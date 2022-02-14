
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* encoding; scalar_t__* props; int newline; scalar_t__ dest; int version; } ;
typedef TYPE_1__ mxwriter ;
typedef char WCHAR ;


 int FUNC_0 (char const*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 int FUNC_1 (TYPE_1__*,char const*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_3(mxwriter *VAR_6)
{
    static const WCHAR VAR_7[] = {'<','?','x','m','l',' ','v','e','r','s','i','o','n','='};
    static const WCHAR VAR_8[] = {' ','e','n','c','o','d','i','n','g','=','\"'};
    static const WCHAR VAR_9[] = {' ','s','t','a','n','d','a','l','o','n','e','=','\"'};
    static const WCHAR VAR_10[] = {'y','e','s','\"','?','>'};
    static const WCHAR VAR_11[] = {'n','o','\"','?','>'};


    FUNC_1(VAR_6, VAR_7, FUNC_0(VAR_7));
    FUNC_2(VAR_6, VAR_6->version, -1);


    FUNC_1(VAR_6, VAR_8, FUNC_0(VAR_8));

    if (VAR_6->dest)
        FUNC_1(VAR_6, VAR_6->encoding, -1);
    else
        FUNC_1(VAR_6, VAR_5, FUNC_0(VAR_5) - 1);
    FUNC_1(VAR_6, VAR_4, 1);


    FUNC_1(VAR_6, VAR_9, FUNC_0(VAR_9));
    if (VAR_6->props[VAR_0] == VAR_2)
        FUNC_1(VAR_6, VAR_10, FUNC_0(VAR_10));
    else
        FUNC_1(VAR_6, VAR_11, FUNC_0(VAR_11));

    FUNC_1(VAR_6, VAR_3, FUNC_0(VAR_3));
    VAR_6->newline = VAR_1;
}
