
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int output; scalar_t__ omitxmldecl; int state; } ;
typedef TYPE_1__ xmlwriter ;
typedef scalar_t__ XmlStandalone ;
typedef char WCHAR ;
typedef int HRESULT ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static HRESULT FUNC_5(xmlwriter *VAR_5, XmlStandalone VAR_6)
{
    static const WCHAR VAR_7[] = {'<','?','x','m','l',' ','v','e','r','s','i','o','n','=','"','1','.','0','"'};
    static const WCHAR VAR_8[] = {' ','e','n','c','o','d','i','n','g','='};

    FUNC_2(VAR_5);
    VAR_5->state = VAR_3;
    if (VAR_5->omitxmldecl) return VAR_0;


    FUNC_3(VAR_5->output, VAR_7, FUNC_0(VAR_7));


    FUNC_3(VAR_5->output, VAR_8, FUNC_0(VAR_8));
    FUNC_4(VAR_5->output, FUNC_1(VAR_5->output), -1);


    if (VAR_6 == VAR_1)
        FUNC_3(VAR_5->output, VAR_4, FUNC_0(VAR_4));
    else {
        static const WCHAR VAR_9[] = {' ','s','t','a','n','d','a','l','o','n','e','=','\"'};
        static const WCHAR VAR_10[] = {'y','e','s','\"','?','>'};
        static const WCHAR VAR_11[] = {'n','o','\"','?','>'};

        FUNC_3(VAR_5->output, VAR_9, FUNC_0(VAR_9));
        if (VAR_6 == VAR_2)
            FUNC_3(VAR_5->output, VAR_10, FUNC_0(VAR_10));
        else
            FUNC_3(VAR_5->output, VAR_11, FUNC_0(VAR_11));
    }

    return VAR_0;
}
