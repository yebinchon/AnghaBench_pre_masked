
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mp_subtitle_opts {scalar_t__ ass_style_override; int sub_style; scalar_t__ ass_styles_file; } ;
struct TYPE_9__ {int Name; } ;
struct TYPE_8__ {scalar_t__ n_styles; int PlayResY; int PlayResX; int Kerning; int default_style; TYPE_2__* styles; } ;
typedef TYPE_1__ ASS_Track ;
typedef TYPE_2__ ASS_Style ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(ASS_Track *VAR_1, struct mp_subtitle_opts *VAR_2)
{
    if (VAR_2->ass_styles_file && VAR_2->ass_style_override)
        FUNC_2(VAR_1, VAR_2->ass_styles_file, ((void*)0));

    if (VAR_1->n_styles == 0) {
        if (!VAR_1->PlayResY) {
            VAR_1->PlayResY = VAR_0;
            VAR_1->PlayResX = VAR_1->PlayResY * 4 / 3;
        }
        VAR_1->Kerning = 1;
        int VAR_3 = FUNC_0(VAR_1);
        VAR_1->default_style = VAR_3;
        ASS_Style *VAR_4 = VAR_1->styles + VAR_3;
        VAR_4->Name = FUNC_4("Default");
        FUNC_3(VAR_4, VAR_1->PlayResY, VAR_2->sub_style);
    }

    if (VAR_2->ass_style_override)
        FUNC_1(VAR_1);
}
