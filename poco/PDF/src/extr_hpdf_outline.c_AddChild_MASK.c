
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int error; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_1__* HPDF_Outline ;


 scalar_t__ FUNC_0 (TYPE_1__*,char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static HPDF_STATUS
FUNC_4 (HPDF_Outline VAR_2,
           HPDF_Outline VAR_3)
{
    HPDF_Outline VAR_4 = (HPDF_Outline)FUNC_1 (VAR_2, "First",
                    VAR_0);
    HPDF_Outline VAR_5 = (HPDF_Outline)FUNC_1 (VAR_2, "Last",
                    VAR_0);
    HPDF_STATUS VAR_6 = 0;

    FUNC_3((" AddChild\n"));

    if (!VAR_4)
        VAR_6 += FUNC_0 (VAR_2, "First", VAR_3);

    if (VAR_5) {
        VAR_6 += FUNC_0 (VAR_5, "Next", VAR_3);
        VAR_6 += FUNC_0 (VAR_3, "Prev", VAR_5);
    }

    VAR_6 += FUNC_0 (VAR_2, "Last", VAR_3);
    VAR_6 += FUNC_0 (VAR_3, "Parent", VAR_2);

    if (VAR_6 != VAR_1)
        return FUNC_2 (VAR_3->error);

    return VAR_1;
}
