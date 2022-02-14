
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int (* write_fn ) (TYPE_4__*,int ) ;int attr; } ;
struct TYPE_8__ {size_t first_char; size_t last_char; } ;
struct TYPE_7__ {int attr; } ;
struct TYPE_6__ {TYPE_4__* encoder; int * widths; } ;
typedef size_t HPDF_UINT ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_FontAttr ;
typedef TYPE_2__* HPDF_Dict ;
typedef TYPE_3__* HPDF_BasicEncoderAttr ;


 char* FUNC_0 (char*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_4__*,int ) ;

__attribute__((used)) static HPDF_STATUS
FUNC_6 (HPDF_Dict VAR_1,
          HPDF_Stream VAR_2)
{
    HPDF_FontAttr VAR_3 = (HPDF_FontAttr)VAR_1->attr;
    HPDF_BasicEncoderAttr VAR_4 =
                    (HPDF_BasicEncoderAttr)VAR_3->encoder->attr;
    HPDF_UINT VAR_5;
    HPDF_STATUS VAR_6;
    char VAR_7[128];
    char *VAR_8 = VAR_7;
    char *VAR_9 = VAR_7 + 127;

    FUNC_1 ((" HPDF_Font_OnWrite\n"));


    if ((VAR_6 = FUNC_3 (VAR_2, "Widths")) != VAR_0)
        return VAR_6;

    if ((VAR_6 = FUNC_4 (VAR_2, " [\012")) != VAR_0)
        return VAR_6;

    for (VAR_5 = VAR_4->first_char; VAR_5 <= VAR_4->last_char; VAR_5++) {

        VAR_8 = FUNC_0 (VAR_8, VAR_3->widths[VAR_5], VAR_9);
        *VAR_8++ = ' ';

        if ((VAR_5 + 1) % 16 == 0) {
            FUNC_2(VAR_8, "\012", VAR_9);
            if ((VAR_6 = FUNC_4 (VAR_2, VAR_7)) != VAR_0)
                return VAR_6;
            VAR_8 = VAR_7;
        }

    }

    FUNC_2 (VAR_8, "]\012", VAR_9);

    if ((VAR_6 = FUNC_4 (VAR_2, VAR_7)) != VAR_0)
        return VAR_6;

    return VAR_3->encoder->write_fn (VAR_3->encoder, VAR_2);
}
