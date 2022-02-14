
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
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int *,int *,int *,int *,struct reader_position*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_9(xmlreader *VAR_5)
{
    static const WCHAR VAR_6[] = {'v','e','r','s','i','o','n',0};
    struct reader_position VAR_7;
    strval VAR_8, VAR_9;
    HRESULT VAR_10;

    if (!FUNC_8(VAR_5)) return VAR_1;

    VAR_7 = VAR_5->position;
    if (FUNC_2(VAR_5, VAR_6)) return VAR_2;
    FUNC_4(FUNC_3(VAR_5), 7, &VAR_9);

    FUNC_7(VAR_5, 7);

    VAR_10 = FUNC_5(VAR_5);
    if (FUNC_0(VAR_10)) return VAR_10;

    if (FUNC_2(VAR_5, VAR_4) && FUNC_2(VAR_5, VAR_3))
        return VAR_0;

    FUNC_7(VAR_5, 1);

    VAR_10 = FUNC_6(VAR_5, &VAR_8);
    if (FUNC_0(VAR_10)) return VAR_10;

    if (FUNC_2(VAR_5, VAR_4) && FUNC_2(VAR_5, VAR_3))
        return VAR_0;


    FUNC_7(VAR_5, 1);

    return FUNC_1(VAR_5, ((void*)0), &VAR_9, ((void*)0), &VAR_8, &VAR_7, 0);
}
