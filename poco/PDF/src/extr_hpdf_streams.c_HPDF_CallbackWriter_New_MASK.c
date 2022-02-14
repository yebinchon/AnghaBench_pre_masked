
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int error; } ;
struct TYPE_7__ {int type; void* attr; int write_fn; TYPE_2__* mmgr; int error; int sig_bytes; } ;
typedef int HPDF_Stream_Write_Func ;
typedef int HPDF_Stream_Rec ;
typedef TYPE_1__* HPDF_Stream ;
typedef TYPE_2__* HPDF_MMgr ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

HPDF_Stream
FUNC_3 (HPDF_MMgr VAR_2,
                         HPDF_Stream_Write_Func VAR_3,
                         void* VAR_4)
{
    HPDF_Stream VAR_5;

    FUNC_2((" HPDF_CallbackWriter_New\n"));

    VAR_5 = (HPDF_Stream)FUNC_0 (VAR_2, sizeof(HPDF_Stream_Rec));

    if (VAR_5) {
        FUNC_1 (VAR_5, 0, sizeof(HPDF_Stream_Rec));
        VAR_5->sig_bytes = VAR_1;
        VAR_5->error = VAR_2->error;
        VAR_5->mmgr = VAR_2;
        VAR_5->write_fn = VAR_3;
        VAR_5->attr = VAR_4;
        VAR_5->type = VAR_0;
    }

    return VAR_5;
}
