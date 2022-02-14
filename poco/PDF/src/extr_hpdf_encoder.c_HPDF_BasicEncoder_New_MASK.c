
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int base_encoding; scalar_t__ ovewrride_map; int encoding_name; } ;
struct TYPE_16__ {char* name; char* base_encoding; int has_differences; int last_char; int first_char; struct TYPE_16__* attr; int sig_bytes; TYPE_1__* mmgr; int free_fn; int write_fn; int * encode_text_fn; int to_unicode_fn; int type; int error; } ;
struct TYPE_15__ {int error; } ;
typedef TYPE_1__* HPDF_MMgr ;
typedef int HPDF_Encoder_Rec ;
typedef TYPE_2__* HPDF_Encoder ;
typedef TYPE_3__ HPDF_BuiltinEncodingData ;
typedef int HPDF_BasicEncoderAttr_Rec ;
typedef TYPE_2__* HPDF_BasicEncoderAttr ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_1 (char const*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*,int ,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

HPDF_Encoder
FUNC_9 (HPDF_MMgr VAR_18,
                        const char *VAR_19)
{
    HPDF_Encoder VAR_20;
    HPDF_BasicEncoderAttr VAR_21;
    const HPDF_BuiltinEncodingData *VAR_22;
    char *VAR_23;

    FUNC_6((" HPDF_BasicEncoder_New\n"));

    if (VAR_18 == ((void*)0))
        return ((void*)0);

    VAR_22 = FUNC_1 (VAR_19);
    if (!VAR_22->encoding_name) {
        FUNC_7 (VAR_18->error, VAR_12, 0);
        return ((void*)0);
    }

    VAR_20 = FUNC_4 (VAR_18, sizeof(HPDF_Encoder_Rec));
    if (!VAR_20)
        return ((void*)0);

    FUNC_5 (VAR_20, 0, sizeof(HPDF_Encoder_Rec));

    VAR_23 = VAR_20->name + VAR_13;
    FUNC_8 (VAR_20->name, VAR_22->encoding_name, VAR_23);

    VAR_20->mmgr = VAR_18;
    VAR_20->error = VAR_18->error;
    VAR_20->type = VAR_6;
    VAR_20->to_unicode_fn = VAR_3;
    VAR_20->encode_text_fn = ((void*)0);
    VAR_20->write_fn = VAR_4;
    VAR_20->free_fn = VAR_2;

    VAR_21 = FUNC_4(VAR_18, sizeof(HPDF_BasicEncoderAttr_Rec));
    if (!VAR_21) {
        FUNC_3 (VAR_20->mmgr, VAR_20);
        return ((void*)0);
    }

    VAR_20->sig_bytes = VAR_5;
    VAR_20->attr = VAR_21;
    FUNC_5 (VAR_21, 0, sizeof(HPDF_BasicEncoderAttr_Rec));

    VAR_21->first_char = VAR_0;
    VAR_21->last_char = VAR_1;
    VAR_21->has_differences = VAR_11;

    VAR_23 = VAR_21->base_encoding + VAR_13;

    switch (VAR_22->base_encoding) {
        case 129:
            FUNC_8 (VAR_21->base_encoding,
                     VAR_9, VAR_23);
            FUNC_0 (VAR_20, VAR_16);
            break;
        case 128:
            FUNC_8 (VAR_21->base_encoding,
                     VAR_10, VAR_23);
            FUNC_0 (VAR_20, VAR_17);
            break;
        case 130:
            FUNC_8 (VAR_21->base_encoding,
                     VAR_8, VAR_23);
            FUNC_0 (VAR_20, VAR_15);
            break;
        default:
            FUNC_8 (VAR_21->base_encoding,
                     VAR_7, VAR_23);
            FUNC_0 (VAR_20,
                    VAR_14);
    }

    if (VAR_22->ovewrride_map)
        FUNC_2 (VAR_20, VAR_22->ovewrride_map);

    return VAR_20;
}
