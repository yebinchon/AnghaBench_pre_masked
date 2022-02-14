
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; void** obj; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_List ;
typedef int HPDF_INT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (char*) ;

HPDF_STATUS
FUNC_3 (HPDF_List VAR_1,
                   void *VAR_2,
                   void *VAR_3)
{
    HPDF_INT VAR_4 = FUNC_1 (VAR_1, VAR_2);
    void *VAR_5 = VAR_1->obj[VAR_1->count - 1];
    HPDF_INT VAR_6;

    FUNC_2((" HPDF_List_Insert\n"));

    if (VAR_4 < 0)
        return VAR_0;


    for (VAR_6 = VAR_1->count - 2; VAR_6 >= VAR_4; VAR_6--)
        VAR_1->obj[VAR_6 + 1] = VAR_1->obj[VAR_6];

    VAR_1->obj[VAR_4] = VAR_3;

    return FUNC_0 (VAR_1, VAR_5);
}
