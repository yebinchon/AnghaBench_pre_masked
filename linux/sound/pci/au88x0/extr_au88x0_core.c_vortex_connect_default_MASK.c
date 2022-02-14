
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void** mixspdif; int fixed_res; void** mixcapt; void** mixplayb; } ;
typedef TYPE_1__ vortex_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int) ;
 void* FUNC_4 (TYPE_1__*,int ,int,int ) ;
 int FUNC_5 (TYPE_1__*,int,void**) ;
 int FUNC_6 (TYPE_1__*,int,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int,int,void*,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_9(vortex_t * VAR_2, int VAR_3)
{

 VAR_2->mixplayb[0] = FUNC_4(VAR_2, VAR_2->fixed_res, VAR_3,
      VAR_1);
 VAR_2->mixplayb[1] = FUNC_4(VAR_2, VAR_2->fixed_res, VAR_3,
      VAR_1);
 if (FUNC_2(VAR_2)) {
  VAR_2->mixplayb[2] = FUNC_4(VAR_2, VAR_2->fixed_res, VAR_3,
       VAR_1);
  VAR_2->mixplayb[3] = FUNC_4(VAR_2, VAR_2->fixed_res, VAR_3,
       VAR_1);
 }
 FUNC_5(VAR_2, VAR_3, VAR_2->mixplayb);

 VAR_2->mixcapt[0] = FUNC_4(VAR_2, VAR_2->fixed_res, VAR_3,
      VAR_0);
 VAR_2->mixcapt[1] = FUNC_4(VAR_2, VAR_2->fixed_res, VAR_3,
      VAR_0);
 FUNC_6(VAR_2, VAR_3, FUNC_1(0), FUNC_1(1));



 VAR_2->mixspdif[0] = FUNC_4(VAR_2, VAR_2->fixed_res, VAR_3,
      VAR_1);
 VAR_2->mixspdif[1] = FUNC_4(VAR_2, VAR_2->fixed_res, VAR_3,
      VAR_1);
 FUNC_7(VAR_2, VAR_3, 0x14, VAR_2->mixspdif[0],
      FUNC_0(0));
 FUNC_7(VAR_2, VAR_3, 0x14, VAR_2->mixspdif[1],
      FUNC_0(1));



 FUNC_8(VAR_2, VAR_3);



 FUNC_3(VAR_2, VAR_3);







}
