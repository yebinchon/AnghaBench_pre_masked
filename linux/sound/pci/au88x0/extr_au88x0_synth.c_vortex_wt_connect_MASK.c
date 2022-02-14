
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* mixwt; int mmio; int * mixplayb; int fixed_res; } ;
typedef TYPE_1__ vortex_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int ) ;
 int FUNC_6 (TYPE_1__*,int,int,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_8(vortex_t * VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 for (VAR_6 = 0; VAR_6 < 1; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
   VAR_8 =
       FUNC_5(VAR_4,
        VAR_4->fixed_res, VAR_5,
        VAR_3);
   VAR_4->mixwt[(VAR_6 * 6) + VAR_7] = VAR_8;

   FUNC_7(VAR_4, VAR_5, 0x11,
         FUNC_1(VAR_6, VAR_7 + 0x20), FUNC_0(VAR_8));

   FUNC_6(VAR_4, VAR_5, VAR_8,
          VAR_4->mixplayb[VAR_7 % 2], 0);
   if (FUNC_2(VAR_4))
    FUNC_6(VAR_4, VAR_5,
           VAR_8,
           VAR_4->mixplayb[2 +
             (VAR_7 % 2)], 0);
  }
 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_4(VAR_4->mmio, FUNC_3(VAR_6), 1);
 }
}
