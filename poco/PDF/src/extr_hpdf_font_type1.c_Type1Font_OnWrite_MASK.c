
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int (* write_fn ) (TYPE_6__*,int ) ;int attr; } ;
struct TYPE_12__ {size_t first_char; size_t last_char; scalar_t__ has_differences; } ;
struct TYPE_11__ {int attr; } ;
struct TYPE_10__ {size_t* widths; TYPE_6__* encoder; TYPE_1__* fontdef; } ;
struct TYPE_9__ {int is_base14font; } ;
struct TYPE_8__ {int attr; } ;
typedef size_t HPDF_UINT ;
typedef TYPE_2__* HPDF_Type1FontDefAttr ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef TYPE_3__* HPDF_FontAttr ;
typedef TYPE_4__* HPDF_Dict ;
typedef TYPE_5__* HPDF_BasicEncoderAttr ;


 char* FUNC_0 (char*,size_t,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_6__*,int ) ;

__attribute__((used)) static HPDF_STATUS
FUNC_6 (HPDF_Dict VAR_2,
          HPDF_Stream VAR_3)
{
    HPDF_FontAttr VAR_4 = (HPDF_FontAttr)VAR_2->attr;
    HPDF_Type1FontDefAttr VAR_5 =
                    (HPDF_Type1FontDefAttr)VAR_4->fontdef->attr;
    HPDF_BasicEncoderAttr VAR_6 =
                    (HPDF_BasicEncoderAttr)VAR_4->encoder->attr;
    HPDF_UINT VAR_7;
    HPDF_STATUS VAR_8;
    char VAR_9[VAR_1];
    char *VAR_10 = VAR_9 + VAR_1 - 1;

    FUNC_1 ((" HPDF_Font_Type1Font_OnWrite\n"));


    if (!VAR_5->is_base14font || VAR_6->has_differences) {
        char *VAR_11;

        VAR_11 = (char *)FUNC_2 (VAR_9, "/FirstChar ", VAR_10);
        VAR_11 = FUNC_0 (VAR_11, VAR_6->first_char, VAR_10);
        FUNC_2 (VAR_11, "\012", VAR_10);
        if ((VAR_8 = FUNC_4 (VAR_3, VAR_9)) != VAR_0)
            return VAR_8;

        VAR_11 = (char *)FUNC_2 (VAR_9, "/LastChar ", VAR_10);
        VAR_11 = FUNC_0 (VAR_11, VAR_6->last_char, VAR_10);
        FUNC_2 (VAR_11, "\012", VAR_10);
        if ((VAR_8 = FUNC_4 (VAR_3, VAR_9)) != VAR_0)
            return VAR_8;


        if ((VAR_8 = FUNC_3 (VAR_3, "Widths")) != VAR_0)
            return VAR_8;

        if ((VAR_8 = FUNC_4 (VAR_3, " [\012")) != VAR_0)
            return VAR_8;

        VAR_11 = VAR_9;
        for (VAR_7 = VAR_6->first_char; VAR_7 <= VAR_6->last_char; VAR_7++) {

            VAR_11 = FUNC_0 (VAR_11, VAR_4->widths[VAR_7], VAR_10);
            *VAR_11++ = ' ';

            if ((VAR_7 + 1) % 16 == 0) {
                FUNC_2(VAR_11, "\012", VAR_10);
                if ((VAR_8 = FUNC_4 (VAR_3, VAR_9)) != VAR_0)
                    return VAR_8;
                VAR_11 = VAR_9;
            }
        }

        FUNC_2 (VAR_11, "]\012", VAR_10);

        if ((VAR_8 = FUNC_4 (VAR_3, VAR_9)) != VAR_0)
            return VAR_8;
    }

    return VAR_4->encoder->write_fn (VAR_4->encoder, VAR_3);
}
