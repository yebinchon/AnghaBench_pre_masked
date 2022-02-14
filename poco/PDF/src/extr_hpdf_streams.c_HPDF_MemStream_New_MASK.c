
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int error; } ;
struct TYPE_11__ {int free_fn; int size_fn; int tell_fn; int seek_fn; int read_fn; int write_fn; scalar_t__ buf_siz; scalar_t__ w_pos; struct TYPE_11__* attr; TYPE_3__* mmgr; int error; int type; int sig_bytes; int buf; } ;
typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_Stream_Rec ;
typedef TYPE_1__* HPDF_Stream ;
typedef int HPDF_MemStreamAttr_Rec ;
typedef TYPE_1__* HPDF_MemStreamAttr ;
typedef TYPE_3__* HPDF_MMgr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

HPDF_Stream
FUNC_5 (HPDF_MMgr VAR_10,
                     HPDF_UINT VAR_11)
{
    HPDF_Stream VAR_12;

    FUNC_4((" HPDF_MemStream_New\n"));


    VAR_12 = (HPDF_Stream)FUNC_1 (VAR_10, sizeof(HPDF_Stream_Rec));

    if (VAR_12) {

        HPDF_MemStreamAttr VAR_13 = (HPDF_MemStreamAttr)FUNC_1 (VAR_10,
                sizeof(HPDF_MemStreamAttr_Rec));

        if (!VAR_13) {
            FUNC_0 (VAR_10, VAR_12);
            return ((void*)0);
        }

        FUNC_3 (VAR_12, 0, sizeof(HPDF_Stream_Rec));
        FUNC_3 (VAR_13, 0, sizeof(HPDF_MemStreamAttr_Rec));

        VAR_13->buf = FUNC_2 (VAR_10, VAR_0);
        if (!VAR_13->buf) {
            FUNC_0 (VAR_10, VAR_12);
            FUNC_0 (VAR_10, VAR_13);
            return ((void*)0);
        }

        VAR_12->sig_bytes = VAR_9;
        VAR_12->type = VAR_8;
        VAR_12->error = VAR_10->error;
        VAR_12->mmgr = VAR_10;
        VAR_12->attr = VAR_13;
        VAR_13->buf_siz = (VAR_11 > 0) ? VAR_11 : VAR_7;
        VAR_13->w_pos = VAR_13->buf_siz;

        VAR_12->write_fn = VAR_6;
        VAR_12->read_fn = VAR_2;
        VAR_12->seek_fn = VAR_3;
        VAR_12->tell_fn = VAR_5;
        VAR_12->size_fn = VAR_4;
        VAR_12->free_fn = VAR_1;
    }

    return VAR_12;
}
