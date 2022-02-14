
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_uart16550 {scalar_t__ irq; scalar_t__ adaptor; int buff_in_count; int prev_out; unsigned char* prev_status; int open_lock; int drop_on_full; } ;
struct snd_rawmidi_substream {int number; TYPE_1__* rmidi; } ;
struct TYPE_2__ {struct snd_uart16550* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct snd_rawmidi_substream*,unsigned char*,int) ;
 int FUNC_1 (struct snd_rawmidi_substream*,int) ;
 int FUNC_2 (struct snd_rawmidi_substream*,unsigned char*,int) ;
 scalar_t__ FUNC_3 (struct snd_uart16550*,int) ;
 int FUNC_4 (struct snd_uart16550*) ;
 int FUNC_5 (struct snd_uart16550*,struct snd_rawmidi_substream*,unsigned char) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct snd_rawmidi_substream *VAR_6)
{
 unsigned long VAR_7;
 unsigned char VAR_8, VAR_9;
 struct snd_uart16550 *VAR_10 = VAR_6->rmidi->private_data;
 char VAR_11;
 static unsigned long VAR_12 = 0;






 FUNC_6(&VAR_10->open_lock, VAR_7);

 if (VAR_10->irq < 0)
  FUNC_4(VAR_10);

 if (VAR_10->adaptor == VAR_2) {
  while (1) {


   if (VAR_10->buff_in_count > VAR_4 - 2)
    break;
   if (FUNC_0(VAR_6, &VAR_8, 1) != 1)
    break;





   VAR_9 = (VAR_6->number << 4) | 0x08;

   if (VAR_9 == 0x08)
    VAR_9 = 0xf8;

   FUNC_5(VAR_10, VAR_6, VAR_9);

   FUNC_5(VAR_10, VAR_6, VAR_8);
  }
 } else {
  VAR_11 = 0;
  while (FUNC_2(VAR_6, &VAR_8, 1) == 1) {


   if (VAR_11 == 0 &&
       (VAR_10->adaptor == VAR_3 ||
        VAR_10->adaptor == VAR_1) &&
       (VAR_10->prev_out != VAR_6->number ||
        FUNC_8(VAR_5, VAR_12 + 3*VAR_0))) {

    if (FUNC_3(VAR_10, 3)) {






     VAR_10->prev_out = VAR_6->number;

     FUNC_5(VAR_10, VAR_6,
          0xf5);

     FUNC_5(VAR_10, VAR_6,
          VAR_10->prev_out + 1);


     if (VAR_8 < 0x80 &&
         VAR_10->adaptor == VAR_3)
      FUNC_5(VAR_10, VAR_6, VAR_10->prev_status[VAR_10->prev_out]);
    } else if (!VAR_10->drop_on_full)
     break;

   }


   if (!FUNC_5(VAR_10, VAR_6, VAR_8) &&
       !VAR_10->drop_on_full )
    break;

   if (VAR_8 >= 0x80 && VAR_8 < 0xf0)
    VAR_10->prev_status[VAR_10->prev_out] = VAR_8;
   VAR_11 = 1;

   FUNC_1( VAR_6, 1 );
  }
  VAR_12 = VAR_5;
 }
 FUNC_7(&VAR_10->open_lock, VAR_7);
}
