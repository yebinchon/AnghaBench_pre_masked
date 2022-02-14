
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int obj_class; } ;
struct TYPE_12__ {int error; } ;
struct TYPE_11__ {int error; TYPE_6__ header; } ;
typedef int HPDF_Obj_Header ;
typedef int HPDF_Name_Rec ;
typedef TYPE_1__* HPDF_Name ;
typedef TYPE_2__* HPDF_MMgr ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*) ;
 int VAR_1 ;

HPDF_Name
FUNC_4 (HPDF_MMgr VAR_2,
                const char *VAR_3)
{
    HPDF_Name VAR_4;

    VAR_4 = FUNC_1 (VAR_2, sizeof(HPDF_Name_Rec));

    if (VAR_4) {
        FUNC_2 (&VAR_4->header, 0, sizeof(HPDF_Obj_Header));
        VAR_4->header.obj_class = VAR_1;
        VAR_4->error = VAR_2->error;
        if (FUNC_3 (VAR_4, VAR_3) == VAR_0) {
            FUNC_0 (VAR_2, VAR_4);
            return ((void*)0);
        }
    }

    return VAR_4;
}
