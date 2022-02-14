
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int error; } ;
struct TYPE_7__ {int type; void* attr; int size_fn; int tell_fn; int seek_fn; int read_fn; TYPE_2__* mmgr; int error; int sig_bytes; } ;
typedef int HPDF_Stream_Tell_Func ;
typedef int HPDF_Stream_Size_Func ;
typedef int HPDF_Stream_Seek_Func ;
typedef int HPDF_Stream_Rec ;
typedef int HPDF_Stream_Read_Func ;
typedef TYPE_1__* HPDF_Stream ;
typedef TYPE_2__* HPDF_MMgr ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

HPDF_Stream
FUNC_3 (HPDF_MMgr VAR_2,
                          HPDF_Stream_Read_Func VAR_3,
                          HPDF_Stream_Seek_Func VAR_4,
                          HPDF_Stream_Tell_Func VAR_5,
                          HPDF_Stream_Size_Func VAR_6,
                          void* VAR_7)
{
    HPDF_Stream VAR_8;

    FUNC_2((" HPDF_CallbackReader_New\n"));

    VAR_8 = (HPDF_Stream)FUNC_0 (VAR_2, sizeof(HPDF_Stream_Rec));

    if (VAR_8) {
        FUNC_1 (VAR_8, 0, sizeof(HPDF_Stream_Rec));
        VAR_8->sig_bytes = VAR_1;
        VAR_8->error = VAR_2->error;
        VAR_8->mmgr = VAR_2;
        VAR_8->read_fn = VAR_3;
        VAR_8->seek_fn = VAR_4;
        VAR_8->tell_fn = VAR_5;
        VAR_8->size_fn = VAR_6;
        VAR_8->attr = VAR_7;
        VAR_8->type = VAR_0;
    }

    return VAR_8;
}
