
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reg; int iob; } ;
typedef TYPE_1__ RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2 (RAnal *VAR_4, bool VAR_5) {
 static bool VAR_6 = 0;

 if (!VAR_6 || VAR_5) {



  VAR_2 =
   FUNC_0 (&VAR_4->iob, VAR_2,
     VAR_1, 0x1000);
  VAR_3 =
   FUNC_0 (&VAR_4->iob, VAR_3,
     VAR_0, 0x20);

  FUNC_1 (VAR_4->reg, "_sram",
     VAR_1);
  FUNC_1 (VAR_4->reg, "_stack",
     VAR_0);
  FUNC_1 (VAR_4->reg, "stkptr", 0x1f);

  VAR_6 = 1;
 }
}
