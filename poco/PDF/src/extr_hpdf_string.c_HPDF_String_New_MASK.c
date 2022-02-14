
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int obj_class; } ;
struct TYPE_11__ {int error; } ;
struct TYPE_10__ {TYPE_2__* mmgr; scalar_t__ len; int * value; int encoder; int error; TYPE_6__ header; } ;
typedef int HPDF_String_Rec ;
typedef TYPE_1__* HPDF_String ;
typedef int HPDF_Obj_Header ;
typedef TYPE_2__* HPDF_MMgr ;
typedef int HPDF_Encoder ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*) ;

HPDF_String
FUNC_5 (HPDF_MMgr VAR_2,
                  const char *VAR_3,
                  HPDF_Encoder VAR_4)
{
    HPDF_String VAR_5;

    FUNC_3((" HPDF_String_New\n"));

    VAR_5 = (HPDF_String)FUNC_1 (VAR_2, sizeof(HPDF_String_Rec));
    if (VAR_5) {
        FUNC_2 (&VAR_5->header, 0, sizeof(HPDF_Obj_Header));
        VAR_5->header.obj_class = VAR_0;

        VAR_5->mmgr = VAR_2;
        VAR_5->error = VAR_2->error;
        VAR_5->encoder = VAR_4;
        VAR_5->value = ((void*)0);
        VAR_5->len = 0;

        if (FUNC_4 (VAR_5, VAR_3) != VAR_1) {
            FUNC_0 (VAR_5->mmgr, VAR_5);
            return ((void*)0);
        }
    }

    return VAR_5;
}
