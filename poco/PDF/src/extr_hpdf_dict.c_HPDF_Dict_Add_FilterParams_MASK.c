
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int error; int mmgr; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_Dict ;
typedef int * HPDF_Array ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int *) ;
 int * FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

HPDF_STATUS
FUNC_5(HPDF_Dict VAR_2, HPDF_Dict VAR_3)
{
    HPDF_Array VAR_4;

    VAR_4 = FUNC_3 (VAR_2, "DecodeParms",
                                              VAR_0);
    if(VAR_4==((void*)0)) {
        VAR_4 = FUNC_1 (VAR_2->mmgr);
       if (!VAR_4)
            return FUNC_4 (VAR_2->error);


        FUNC_2(VAR_2, "DecodeParms", VAR_4);
    }
    FUNC_0(VAR_4, VAR_3);
    return VAR_1;
}
