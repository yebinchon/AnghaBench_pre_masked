
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct echoaudio {int bad_board; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct echoaudio*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_5, u32 *VAR_6)
{
 u32 VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_7 = FUNC_2(VAR_5, VAR_2);
  if ((VAR_7 & VAR_1) != 0) {
   *VAR_6 = FUNC_2(VAR_5, VAR_0);
   return 0;
  }
  FUNC_3(1);
  FUNC_0();
 }

 VAR_5->bad_board = 1;
 FUNC_1(VAR_5->card->dev, "read_dsp: Set bad_board to true\n");
 return -VAR_3;
}
