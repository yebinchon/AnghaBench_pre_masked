
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlreader ;
typedef scalar_t__ WCHAR ;


 scalar_t__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(xmlreader *VAR_0, const WCHAR *VAR_1)
{
    int VAR_2=0;
    const WCHAR *VAR_3 = FUNC_0(VAR_0);
    while (VAR_1[VAR_2])
    {
        if (!VAR_3[VAR_2])
        {
            FUNC_1(VAR_0);
            VAR_3 = FUNC_0(VAR_0);
        }
        if (VAR_1[VAR_2] != VAR_3[VAR_2])
            return VAR_3[VAR_2] - VAR_1[VAR_2];
        VAR_2++;
    }
    return 0;
}
