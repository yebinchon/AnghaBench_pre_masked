
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__* resume; } ;
typedef TYPE_1__ xmlreader ;
struct TYPE_13__ {int len; } ;
typedef TYPE_2__ strval ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__,scalar_t__,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static HRESULT FUNC_9(xmlreader *VAR_4, strval *VAR_5)
{
    WCHAR *VAR_6;
    UINT VAR_7;

    if (VAR_4->resume[VAR_3])
    {
        VAR_7 = VAR_4->resume[VAR_3];
        VAR_6 = FUNC_6(VAR_4);
    }
    else
    {
        VAR_6 = FUNC_6(VAR_4);
        VAR_7 = FUNC_5(VAR_4);
        if (!FUNC_3(*VAR_6)) return VAR_2;
    }

    while (FUNC_2(*VAR_6))
    {
        FUNC_8(VAR_4, 1);
        VAR_6 = FUNC_6(VAR_4);
    }

    if (FUNC_4(VAR_4))
    {
        VAR_4->resume[VAR_3] = VAR_7;
        return VAR_0;
    }
    else
        VAR_4->resume[VAR_3] = 0;

    FUNC_7(VAR_7, FUNC_5(VAR_4)-VAR_7, VAR_5);
    FUNC_0("name %s:%d\n", FUNC_1(VAR_4, VAR_5), VAR_5->len);

    return VAR_1;
}
