
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xml_encoding ;
typedef int WCHAR ;
struct TYPE_3__ {int enc; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int ,int const*,int) ;
 TYPE_1__* VAR_1 ;

xml_encoding FUNC_3(const WCHAR *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;

    if (!VAR_2) return VAR_0;

    VAR_4 = 0;
    VAR_5 = FUNC_0(VAR_1) - 1;

    while (VAR_4 <= VAR_5)
    {
        VAR_6 = (VAR_4+VAR_5)/2;

        if (VAR_3 != -1)
            VAR_7 = FUNC_2(VAR_1[VAR_6].name, VAR_2, VAR_3);
        else
            VAR_7 = FUNC_1(VAR_1[VAR_6].name, VAR_2);
        if (!VAR_7)
            return VAR_1[VAR_6].enc;

        if (VAR_7 > 0)
            VAR_5 = VAR_6-1;
        else
            VAR_4 = VAR_6+1;
    }

    return VAR_0;
}
