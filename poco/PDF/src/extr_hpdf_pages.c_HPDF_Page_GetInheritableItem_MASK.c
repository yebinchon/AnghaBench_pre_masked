
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int error; } ;
typedef int HPDF_UINT16 ;
typedef TYPE_1__* HPDF_Pages ;
typedef TYPE_1__* HPDF_Page ;
typedef size_t HPDF_INT ;
typedef scalar_t__ HPDF_BOOL ;


 void* FUNC_0 (TYPE_1__*,char const*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (char const*,scalar_t__) ;
 scalar_t__ VAR_4 ;

void*
FUNC_4 (HPDF_Page VAR_5,
                               const char *VAR_6,
                               HPDF_UINT16 VAR_7)
{
    HPDF_BOOL VAR_8 = VAR_0;
    HPDF_INT VAR_9 = 0;
    void * VAR_10;

    FUNC_1((" HPDF_Page_GetInheritableItem\n"));


    while (VAR_1[VAR_9]) {
        if (FUNC_3 (VAR_6, VAR_1[VAR_9]) == 0) {
            VAR_8 = VAR_4;
            break;
        }
        VAR_9++;
    }


    if (VAR_8 != VAR_4) {
        FUNC_2 (VAR_5->error, VAR_2, 0);
        return ((void*)0);
    }

    VAR_10 = FUNC_0 (VAR_5, VAR_6, VAR_7);




    if (!VAR_10) {
        HPDF_Pages VAR_11 = FUNC_0 (VAR_5, "Parent", VAR_3);
        while (VAR_11) {
            VAR_10 = FUNC_0 (VAR_5, VAR_6, VAR_7);

            if (VAR_10)
                break;

            VAR_11 = FUNC_0 (VAR_11, "Parent", VAR_3);
        }
    }

    return VAR_10;
}
