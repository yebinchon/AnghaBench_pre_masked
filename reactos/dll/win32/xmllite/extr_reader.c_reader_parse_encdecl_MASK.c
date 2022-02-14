
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct reader_position {int dummy; } ;
struct TYPE_15__ {struct reader_position position; } ;
typedef TYPE_1__ xmlreader ;
struct TYPE_16__ {int len; int start; int str; } ;
typedef TYPE_2__ strval ;
typedef char WCHAR ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *,TYPE_2__*,int *,TYPE_2__*,struct reader_position*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_9(xmlreader *VAR_4)
{
    static const WCHAR VAR_5[] = {'e','n','c','o','d','i','n','g',0};
    struct reader_position VAR_6;
    strval VAR_7, VAR_8;
    HRESULT VAR_9;

    if (!FUNC_8(VAR_4)) return VAR_0;

    VAR_6 = VAR_4->position;
    if (FUNC_2(VAR_4, VAR_5)) return VAR_0;
    VAR_7.str = FUNC_4(VAR_4);
    VAR_7.start = FUNC_3(VAR_4);
    VAR_7.len = 8;

    FUNC_7(VAR_4, 8);

    VAR_9 = FUNC_6(VAR_4);
    if (FUNC_0(VAR_9)) return VAR_9;

    if (FUNC_2(VAR_4, VAR_3) && FUNC_2(VAR_4, VAR_2))
        return VAR_1;

    FUNC_7(VAR_4, 1);

    VAR_9 = FUNC_5(VAR_4, &VAR_8);
    if (FUNC_0(VAR_9)) return VAR_9;

    if (FUNC_2(VAR_4, VAR_3) && FUNC_2(VAR_4, VAR_2))
        return VAR_1;


    FUNC_7(VAR_4, 1);

    return FUNC_1(VAR_4, ((void*)0), &VAR_7, ((void*)0), &VAR_8, &VAR_6, 0);
}
