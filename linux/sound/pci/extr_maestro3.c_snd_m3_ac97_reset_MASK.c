
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_m3 {int iobase; TYPE_1__* card; int irda_workaround; scalar_t__ allegro_flag; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_m3*,int ) ;
 int FUNC_7 (struct snd_m3*) ;
 int VAR_9 ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct snd_m3 *VAR_10)
{
 u16 VAR_11;
 int VAR_12 = 0, VAR_13 = 0, VAR_14;
 int VAR_15 = VAR_10->iobase;

 if (VAR_10->allegro_flag) {





  VAR_12 = 50;
  VAR_13 = 800;
 } else {

  VAR_12 = 20;
  VAR_13 = 500;
 }

 for (VAR_14 = 0; VAR_14 < 5; VAR_14++) {
  VAR_11 = FUNC_1(VAR_15 + VAR_1);
  if (!VAR_10->irda_workaround)
   VAR_11 |= 0x10;

  FUNC_6(VAR_10, 0);

  FUNC_4(VAR_4, VAR_15 + VAR_7);
  FUNC_8(20);

  FUNC_4(VAR_11 & ~VAR_3 , VAR_15 + VAR_1);
  FUNC_4(~VAR_3 , VAR_15 + VAR_2);
  FUNC_4(0, VAR_15 + VAR_0);
  FUNC_4(VAR_11 | VAR_3, VAR_15 + VAR_1);

  FUNC_5(FUNC_2(VAR_12));

  FUNC_4(VAR_3, VAR_15 + VAR_0);
  FUNC_8(5);

  FUNC_4(VAR_4 | VAR_8, VAR_15 + VAR_7);
  FUNC_4(~0, VAR_15 + VAR_2);

  FUNC_5(FUNC_2(VAR_13));

  if (! FUNC_7(VAR_10))
   break;

  VAR_12 += 10;
  VAR_13 += 100;

  FUNC_0(VAR_10->card->dev,
   "retrying codec reset with delays of %d and %d ms\n",
      VAR_12, VAR_13);
 }
}
