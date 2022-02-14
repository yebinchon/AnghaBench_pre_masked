
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int size; } ;
struct TYPE_7__ {int error; int mmgr; int attr; } ;
struct TYPE_6__ {scalar_t__ length1; scalar_t__ length2; scalar_t__ length3; TYPE_4__* font_data; } ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_Type1FontDefAttr ;
typedef int HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_FontDef ;
typedef int HPDF_BYTE ;
typedef scalar_t__ HPDF_BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 TYPE_4__* FUNC_2 (int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 char* FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (int ,int *,int*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int *,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static HPDF_STATUS
FUNC_8 (HPDF_FontDef VAR_6,
              HPDF_Stream VAR_7)
{
    HPDF_Type1FontDefAttr VAR_8 = (HPDF_Type1FontDefAttr)VAR_6->attr;
    char VAR_9[VAR_2];
    char* VAR_10 = VAR_9;
    HPDF_UINT VAR_11 = 0;
    HPDF_STATUS VAR_12;
    HPDF_BOOL VAR_13 = VAR_0;

    FUNC_3 ((" LoadFontData\n"));

    VAR_8->font_data = FUNC_2 (VAR_6->mmgr, VAR_2);

    if (!VAR_8->font_data)
        return FUNC_0 (VAR_6->error);

    VAR_11 = 11;
    VAR_12 = FUNC_6 (VAR_7, (HPDF_BYTE *)VAR_10, &VAR_11);
    if (VAR_12 != VAR_1)
        return VAR_12;
    VAR_10 += 11;

    for (;;) {
        VAR_11 = VAR_2 - 11;
        VAR_12 = FUNC_6 (VAR_7, (HPDF_BYTE *)VAR_10, &VAR_11);
        if (VAR_12 == VAR_3) {
            VAR_13 = VAR_4;
        } else if (VAR_12 != VAR_1)
            return VAR_12;

        if (VAR_11 > 0) {
            if (VAR_8->length1 == 0) {
               const char *VAR_14 = FUNC_5 (VAR_9, "eexec", VAR_11 + 11);


               if (VAR_14)
                  VAR_8->length1 = VAR_8->font_data->size + (VAR_14 - VAR_9) + 6;
            }

            if (VAR_8->length1 > 0 && VAR_8->length2 == 0) {
                const char *VAR_15 = FUNC_5 (VAR_9, "cleartomark",
                        VAR_11 + 11);

                if (VAR_15)
                    VAR_8->length2 = VAR_8->font_data->size + - 520 -
                        VAR_8->length1 + (VAR_15 - VAR_9);





            }
        }

        if (VAR_13) {
            if ((VAR_12 = FUNC_7 (VAR_8->font_data, (HPDF_BYTE *)VAR_9, VAR_11 + 11)) !=
                        VAR_1)
                return VAR_12;

            break;
        } else {
            if ((VAR_12 = FUNC_7 (VAR_8->font_data, (HPDF_BYTE *)VAR_9, VAR_11)) !=
                        VAR_1)
                return VAR_12;
            FUNC_1 ((HPDF_BYTE *)VAR_9, (HPDF_BYTE *)VAR_9 + VAR_11, 11);
            VAR_10 = VAR_9 + 11;
        }
    }

    if (VAR_8->length1 == 0 || VAR_8->length2 == 0)
        return FUNC_4 (VAR_6->error, VAR_5, 0);

    VAR_8->length3 = VAR_8->font_data->size - VAR_8->length1 - VAR_8->length2;

    return VAR_1;
}
