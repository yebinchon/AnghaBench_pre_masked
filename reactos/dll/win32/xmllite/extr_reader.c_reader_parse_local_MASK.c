
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* resume; } ;
typedef TYPE_1__ xmlreader ;
typedef int strval ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static HRESULT FUNC_6(xmlreader *VAR_4, strval *VAR_5, BOOL VAR_6)
{
    WCHAR *VAR_7;
    UINT VAR_8;

    if (VAR_4->resume[VAR_3])
    {
        VAR_8 = VAR_4->resume[VAR_3];
        VAR_7 = FUNC_3(VAR_4);
    }
    else
    {
        VAR_7 = FUNC_3(VAR_4);
        VAR_8 = FUNC_2(VAR_4);
    }

    while (FUNC_0(*VAR_7))
    {
        FUNC_5(VAR_4, 1);
        VAR_7 = FUNC_3(VAR_4);
    }

    if (VAR_6 && *VAR_7 == ':')
        return VAR_1;

    if (FUNC_1(VAR_4))
    {
         VAR_4->resume[VAR_3] = VAR_8;
         return VAR_0;
    }
    else
         VAR_4->resume[VAR_3] = 0;

    FUNC_4(VAR_8, FUNC_2(VAR_4)-VAR_8, VAR_5);

    return VAR_2;
}
