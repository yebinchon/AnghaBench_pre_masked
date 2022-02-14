
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct reader_position {int dummy; } ;
struct TYPE_10__ {struct reader_position position; } ;
typedef TYPE_1__ xmlreader ;
typedef int strval ;
typedef char WCHAR ;
typedef int UINT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 char const* VAR_4 ;
 int FUNC_3 (TYPE_1__*,int *,int *,int *,int *,struct reader_position*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int,int,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_10(xmlreader *VAR_5)
{
    static const WCHAR VAR_6[] = {'s','t','a','n','d','a','l','o','n','e',0};
    static const WCHAR VAR_7[] = {'y','e','s',0};
    static const WCHAR VAR_8[] = {'n','o',0};
    struct reader_position VAR_9;
    strval VAR_10, VAR_11;
    UINT VAR_12;
    HRESULT VAR_13;

    if (!FUNC_9(VAR_5)) return VAR_0;

    VAR_9 = VAR_5->position;
    if (FUNC_4(VAR_5, VAR_6)) return VAR_0;
    FUNC_6(FUNC_5(VAR_5), 10, &VAR_10);

    FUNC_8(VAR_5, 10);

    VAR_13 = FUNC_7(VAR_5);
    if (FUNC_0(VAR_13)) return VAR_13;

    if (FUNC_4(VAR_5, VAR_4) && FUNC_4(VAR_5, VAR_3))
        return VAR_1;

    FUNC_8(VAR_5, 1);

    if (FUNC_4(VAR_5, VAR_7) && FUNC_4(VAR_5, VAR_8))
        return VAR_2;

    VAR_12 = FUNC_5(VAR_5);

    FUNC_8(VAR_5, FUNC_4(VAR_5, VAR_7) ? 2 : 3);
    FUNC_6(VAR_12, FUNC_5(VAR_5)-VAR_12, &VAR_11);
    FUNC_1("standalone=%s\n", FUNC_2(VAR_5, &VAR_11));

    if (FUNC_4(VAR_5, VAR_4) && FUNC_4(VAR_5, VAR_3))
        return VAR_1;

    FUNC_8(VAR_5, 1);

    return FUNC_3(VAR_5, ((void*)0), &VAR_10, ((void*)0), &VAR_11, &VAR_9, 0);
}
