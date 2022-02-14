
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xml_encoding ;
typedef int WCHAR ;
struct TYPE_3__ {int enc; int encoding; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int const*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static xml_encoding FUNC_2(const WCHAR *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_3 = 0;
    VAR_4 = FUNC_0(VAR_1) - 1;

    while (VAR_3 <= VAR_4)
    {
        VAR_5 = (VAR_3+VAR_4)/2;

        VAR_6 = FUNC_1(VAR_1[VAR_5].encoding, VAR_2);
        if (!VAR_6)
            return VAR_1[VAR_5].enc;

        if (VAR_6 > 0)
            VAR_4 = VAR_5-1;
        else
            VAR_3 = VAR_5+1;
    }

    return VAR_0;
}
