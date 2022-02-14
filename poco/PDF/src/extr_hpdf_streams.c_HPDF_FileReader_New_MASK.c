
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int error; } ;
struct TYPE_7__ {scalar_t__ attr; int free_fn; int size_fn; int tell_fn; int seek_fn; int read_fn; TYPE_2__* mmgr; int error; int type; int sig_bytes; } ;
typedef int HPDF_Stream_Rec ;
typedef TYPE_1__* HPDF_Stream ;
typedef TYPE_2__* HPDF_MMgr ;
typedef scalar_t__ HPDF_FILEP ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_8 ;

HPDF_Stream
FUNC_6 (HPDF_MMgr VAR_9,
                      const char *VAR_10)
{
    HPDF_Stream VAR_11;
    HPDF_FILEP VAR_12 = FUNC_1 (VAR_10, "rb");

    FUNC_4((" HPDF_FileReader_New\n"));

    if (!VAR_12) {



        FUNC_5 (VAR_9->error, VAR_0, VAR_8);

        return ((void*)0);
    }

    VAR_11 = (HPDF_Stream)FUNC_2(VAR_9, sizeof(HPDF_Stream_Rec));

    if (VAR_11) {
        FUNC_3(VAR_11, 0, sizeof(HPDF_Stream_Rec));
        VAR_11->sig_bytes = VAR_7;
        VAR_11->type = VAR_6;
        VAR_11->error = VAR_9->error;
        VAR_11->mmgr = VAR_9;
        VAR_11->read_fn = VAR_1;
        VAR_11->seek_fn = VAR_2;
        VAR_11->tell_fn = VAR_5;
        VAR_11->size_fn = VAR_4;
        VAR_11->free_fn = VAR_3;
        VAR_11->attr = VAR_12;
    }

    return VAR_11;
}
