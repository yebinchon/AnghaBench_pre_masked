
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WND ;
struct TYPE_8__ {int Vert; int Horz; } ;
struct TYPE_7__ {int SBCalc; } ;
struct TYPE_6__ {int cbwndExtra; int pSBInfo; } ;
typedef int SBWND ;
typedef TYPE_1__* PWND ;
typedef TYPE_2__* PSBWND ;
typedef TYPE_3__* PSBINFO ;
typedef int * PSBDATA ;
typedef int INT ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;




__attribute__((used)) static PSBDATA
FUNC_2(PWND VAR_0, INT VAR_1)
{
   PSBWND VAR_2;
   PSBINFO VAR_3;

   VAR_3 = FUNC_0(VAR_0->pSBInfo);
   switch (VAR_1)
   {
       case 129:
         return &VAR_3->Horz;
       case 128:
         return &VAR_3->Vert;
       case 130:
         if ( VAR_0->cbwndExtra < (sizeof(SBWND)-sizeof(WND)) )
         {
            FUNC_1("IntGetSBData Wrong Extra bytes for CTL Scrollbar!\n");
            return 0;
         }
         VAR_2 = (PSBWND)VAR_0;
         return (PSBDATA)&VAR_2->SBCalc;
       default:
            FUNC_1("IntGetSBData Bad Bar!\n");
   }
   return ((void*)0);
}
