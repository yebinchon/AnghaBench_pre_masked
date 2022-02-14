
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int resumestate; } ;
typedef TYPE_1__ xmlreader ;
typedef char WCHAR ;
typedef int HRESULT ;


 int FUNC_0 (char*,int) ;



 int VAR_0 ;


 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_9(xmlreader *VAR_4)
{
    static const WCHAR VAR_5[] = {'<','!','[','C','D','A','T','A','[',0};
    static const WCHAR VAR_6[] = {'<','/',0};

    if (VAR_4->resumestate != VAR_0)
    {
        switch (VAR_4->resumestate)
        {
        case 132:
            return FUNC_2(VAR_4);
        case 130:
            return FUNC_4(VAR_4);
        case 129:
        case 128:
            return FUNC_7(VAR_4);
        case 131:
            return FUNC_3(VAR_4);
        default:
            FUNC_0("unknown resume state %d\n", VAR_4->resumestate);
        }
    }

    FUNC_8(VAR_4);


    if (!FUNC_1(VAR_4, VAR_6))
        return FUNC_6(VAR_4);

    if (!FUNC_1(VAR_4, VAR_1))
        return FUNC_4(VAR_4);

    if (!FUNC_1(VAR_4, VAR_3))
        return FUNC_7(VAR_4);

    if (!FUNC_1(VAR_4, VAR_5))
        return FUNC_2(VAR_4);

    if (!FUNC_1(VAR_4, VAR_2))
        return FUNC_5(VAR_4);


    return FUNC_3(VAR_4);
}
