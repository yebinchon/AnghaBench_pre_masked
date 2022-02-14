
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* mixxtlk; int * mixplayb; TYPE_1__* card; int fixed_res; } ;
typedef TYPE_2__ vortex_t ;
struct TYPE_9__ {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_6 (int ,char*) ;
 void* FUNC_7 (TYPE_2__*,int ,int,int ) ;
 int FUNC_8 (TYPE_2__*,int,scalar_t__,int ,int ) ;
 int FUNC_9 (TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_10 (TYPE_2__*,int,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_11(vortex_t * VAR_3, int VAR_4)
{
 int VAR_5;
 VAR_3->mixxtlk[0] =
     FUNC_7(VAR_3, VAR_3->fixed_res, VAR_4, VAR_2);
 if (VAR_3->mixxtlk[0] < 0) {
  FUNC_6(VAR_3->card->dev,
    "vortex_Vort3D: ERROR: not enough free mixer resources.\n");
  return;
 }
 VAR_3->mixxtlk[1] =
     FUNC_7(VAR_3, VAR_3->fixed_res, VAR_4, VAR_2);
 if (VAR_3->mixxtlk[1] < 0) {
  FUNC_6(VAR_3->card->dev,
    "vortex_Vort3D: ERROR: not enough free mixer resources.\n");
  return;
 }



 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {

  FUNC_10(VAR_3, VAR_4, 0x11, FUNC_0(VAR_5 * 2), FUNC_3(VAR_5));
  FUNC_10(VAR_3, VAR_4, 0x11, FUNC_0(VAR_5 * 2) + 1, FUNC_3(5 + VAR_5));
 }





 FUNC_10(VAR_3, VAR_4, 0x11, FUNC_4(0), FUNC_2(VAR_3->mixxtlk[0]));
 FUNC_10(VAR_3, VAR_4, 0x11, FUNC_4(1), FUNC_2(VAR_3->mixxtlk[1]));
 FUNC_8(VAR_3, VAR_4, VAR_3->mixxtlk[0], VAR_3->mixplayb[0], 0);
 FUNC_8(VAR_3, VAR_4, VAR_3->mixxtlk[1], VAR_3->mixplayb[1], 0);
 FUNC_9(VAR_3, VAR_3->mixplayb[0], VAR_3->mixxtlk[0],
          VAR_4 ? VAR_0 : VAR_1);
 FUNC_9(VAR_3, VAR_3->mixplayb[1], VAR_3->mixxtlk[1],
          VAR_4 ? VAR_0 : VAR_1);
 if (FUNC_5(VAR_3)) {
  FUNC_8(VAR_3, VAR_4, VAR_3->mixxtlk[0],
         VAR_3->mixplayb[2], 0);
  FUNC_8(VAR_3, VAR_4, VAR_3->mixxtlk[1],
         VAR_3->mixplayb[3], 0);
  FUNC_9(VAR_3, VAR_3->mixplayb[2],
           VAR_3->mixxtlk[0],
           VAR_4 ? VAR_0 : VAR_1);
  FUNC_9(VAR_3, VAR_3->mixplayb[3],
           VAR_3->mixxtlk[1],
           VAR_4 ? VAR_0 : VAR_1);
 }

}
