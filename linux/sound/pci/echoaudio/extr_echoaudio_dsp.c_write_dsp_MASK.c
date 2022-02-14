
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {int bad_board; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct echoaudio*,int ) ;
 int FUNC_3 (struct echoaudio*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct echoaudio *VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < 10000000; VAR_7++) {
  VAR_6 = FUNC_2(VAR_4, VAR_2);
  if ((VAR_6 & VAR_1) != 0) {
   FUNC_3(VAR_4, VAR_0, VAR_5);
   FUNC_5();
   return 0;
  }
  FUNC_4(1);
  FUNC_0();
 }

 VAR_4->bad_board = 1;
 FUNC_1(VAR_4->card->dev, "write_dsp: Set bad_board to true\n");
 return -VAR_3;
}
