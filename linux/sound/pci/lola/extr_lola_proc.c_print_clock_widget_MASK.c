
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct lola {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lola*,int,int ,int,int ,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct lola*,int,int ,unsigned int*) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct snd_info_buffer*,char*,int,unsigned char,...) ;

__attribute__((used)) static void FUNC_4(struct snd_info_buffer *VAR_4,
          struct lola *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10;

 FUNC_1(VAR_5, VAR_6, VAR_2, &VAR_10);
 FUNC_3(VAR_4, "Node 0x%02x [Clock] wcaps 0x%x\n", VAR_6, VAR_10);
 VAR_9 = VAR_10 & 0xff;
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7 += 4) {
  unsigned int VAR_11;
  unsigned short VAR_12[4];
  const char *VAR_13;

  FUNC_0(VAR_5, VAR_6, VAR_3,
    VAR_7, 0, &VAR_10, &VAR_11);
  VAR_12[0] = VAR_10 & 0xfff;
  VAR_12[1] = (VAR_10 >> 16) & 0xfff;
  VAR_12[2] = VAR_11 & 0xfff;
  VAR_12[3] = (VAR_11 >> 16) & 0xfff;
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   unsigned char VAR_14 = VAR_12[VAR_8] >> 8;
   unsigned int VAR_15 = VAR_12[VAR_8] & 0xff;
   if (VAR_7 + VAR_8 >= VAR_9)
    break;
   if (VAR_14 == VAR_0) {
    VAR_13 = "Internal";
    VAR_15 = FUNC_2(VAR_15);
   } else if (VAR_14 == VAR_1) {
    VAR_13 = "Video";
    VAR_15 = FUNC_2(VAR_15);
   } else {
    VAR_13 = "Other";
   }
   FUNC_3(VAR_4, "  Clock %d: Type %d:%s, freq=%d\n",
        VAR_7 + VAR_8, VAR_14, VAR_13, VAR_15);
  }
 }
}
