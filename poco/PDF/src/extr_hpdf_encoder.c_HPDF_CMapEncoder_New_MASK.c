
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int sig_bytes; int init_fn; int free_fn; int write_fn; int to_unicode_fn; int byte_type_fn; int type; int error; TYPE_1__* mmgr; scalar_t__ name; } ;
struct TYPE_8__ {int error; } ;
typedef TYPE_1__* HPDF_MMgr ;
typedef int HPDF_Encoder_Rec ;
typedef int HPDF_Encoder_Init_Func ;
typedef TYPE_2__* HPDF_Encoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,char*,scalar_t__) ;

HPDF_Encoder
FUNC_4 (HPDF_MMgr VAR_7,
                       char *VAR_8,
                       HPDF_Encoder_Init_Func VAR_9)
{
    HPDF_Encoder VAR_10;

    FUNC_2 ((" HPDF_CMapEncoder_New\n"));

    if (VAR_7 == ((void*)0))
        return ((void*)0);

    VAR_10 = FUNC_0 (VAR_7, sizeof(HPDF_Encoder_Rec));
    if (!VAR_10)
        return ((void*)0);

    FUNC_1 (VAR_10, 0, sizeof(HPDF_Encoder_Rec));

    FUNC_3 (VAR_10->name, VAR_8, VAR_10->name + VAR_6);
    VAR_10->mmgr = VAR_7;
    VAR_10->error = VAR_7->error;
    VAR_10->type = VAR_5;
    VAR_10->byte_type_fn = VAR_0;
    VAR_10->to_unicode_fn = VAR_2;
    VAR_10->write_fn = VAR_3;
    VAR_10->free_fn = VAR_1;
    VAR_10->init_fn = VAR_9;
    VAR_10->sig_bytes = VAR_4;

    return VAR_10;
}
