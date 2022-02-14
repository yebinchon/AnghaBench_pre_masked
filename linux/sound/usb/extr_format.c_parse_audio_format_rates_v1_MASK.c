
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {scalar_t__ usb_id; } ;
struct audioformat {int altsetting; unsigned int* rate_table; size_t nr_rates; unsigned int rate_min; unsigned int rate_max; int maxpacksize; int rates; int iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 void* FUNC_1 (unsigned char*) ;
 int FUNC_2 (char*) ;
 unsigned int* FUNC_3 (int,int,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct snd_usb_audio*,char*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_usb_audio *VAR_4, struct audioformat *VAR_5,
           unsigned char *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_6[VAR_7];

 if (VAR_6[0] < VAR_7 + 1 + 3 * (VAR_8 ? VAR_8 : 2)) {
  FUNC_5(VAR_4,
   "%u:%d : invalid UAC_FORMAT_TYPE desc\n",
   VAR_5->iface, VAR_5->altsetting);
  return -VAR_0;
 }

 if (VAR_8) {



  int VAR_9, VAR_10;

  VAR_5->rate_table = FUNC_3(VAR_8, sizeof(int),
            VAR_2);
  if (VAR_5->rate_table == ((void*)0))
   return -VAR_1;

  VAR_5->nr_rates = 0;
  VAR_5->rate_min = VAR_5->rate_max = 0;
  for (VAR_9 = 0, VAR_10 = VAR_7 + 1; VAR_9 < VAR_8; VAR_9++, VAR_10 += 3) {
   unsigned int VAR_11 = FUNC_1(&VAR_6[VAR_10]);
   if (!VAR_11)
    continue;


   if (VAR_11 == 48000 && VAR_8 == 1 &&
       (VAR_4->usb_id == FUNC_0(0x0d8c, 0x0201) ||
        VAR_4->usb_id == FUNC_0(0x0d8c, 0x0102) ||
        VAR_4->usb_id == FUNC_0(0x0ccd, 0x00b1)) &&
       VAR_5->altsetting == 5 && VAR_5->maxpacksize == 392)
    VAR_11 = 96000;

   if (VAR_11 == 16000 &&
       (VAR_4->usb_id == FUNC_0(0x041e, 0x4064) ||
        VAR_4->usb_id == FUNC_0(0x041e, 0x4068)))
    VAR_11 = 8000;

   VAR_5->rate_table[VAR_5->nr_rates] = VAR_11;
   if (!VAR_5->rate_min || VAR_11 < VAR_5->rate_min)
    VAR_5->rate_min = VAR_11;
   if (!VAR_5->rate_max || VAR_11 > VAR_5->rate_max)
    VAR_5->rate_max = VAR_11;
   VAR_5->rates |= FUNC_4(VAR_11);
   VAR_5->nr_rates++;
  }
  if (!VAR_5->nr_rates) {
   FUNC_2("All rates were zero. Skipping format!\n");
   return -VAR_0;
  }
 } else {

  VAR_5->rates = VAR_3;
  VAR_5->rate_min = FUNC_1(&VAR_6[VAR_7 + 1]);
  VAR_5->rate_max = FUNC_1(&VAR_6[VAR_7 + 4]);
 }
 return 0;
}
