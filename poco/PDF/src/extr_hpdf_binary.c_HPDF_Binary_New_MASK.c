
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int obj_class; } ;
struct TYPE_12__ {scalar_t__ len; int * value; int error; TYPE_1__* mmgr; TYPE_3__ header; } ;
struct TYPE_11__ {int error; } ;
typedef int HPDF_UINT ;
typedef int HPDF_Obj_Header ;
typedef TYPE_1__* HPDF_MMgr ;
typedef int HPDF_Binary_Rec ;
typedef TYPE_2__* HPDF_Binary ;
typedef int HPDF_BYTE ;


 scalar_t__ FUNC_0 (TYPE_2__*,int *,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

HPDF_Binary
FUNC_4 (HPDF_MMgr VAR_2,
                  HPDF_BYTE *VAR_3,
                  HPDF_UINT VAR_4)
{
    HPDF_Binary VAR_5;

    VAR_5 = FUNC_2 (VAR_2, sizeof(HPDF_Binary_Rec));

    if (VAR_5) {
        FUNC_3(&VAR_5->header, 0, sizeof(HPDF_Obj_Header));
        VAR_5->header.obj_class = VAR_0;

        VAR_5->mmgr = VAR_2;
        VAR_5->error = VAR_2->error;
        VAR_5->value = ((void*)0);
        VAR_5->len = 0;
        if (FUNC_0 (VAR_5, VAR_3, VAR_4) != VAR_1) {
            FUNC_1 (VAR_2, VAR_5);
            return ((void*)0);
        }
    }

    return VAR_5;
}
