
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int resumestate; scalar_t__* resume; int nodetype; } ;
typedef TYPE_1__ xmlreader ;
typedef int strval ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int VAR_4 ;

 int VAR_5 ;

 size_t VAR_6 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (char) ;
 void* FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int VAR_7 ;

__attribute__((used)) static HRESULT FUNC_12(xmlreader *VAR_8)
{
    strval VAR_9;
    WCHAR *VAR_10;
    UINT VAR_11;
    HRESULT VAR_12;

    switch (VAR_8->resumestate)
    {
    case 129:

        FUNC_11(VAR_8, 2);
        FUNC_10(VAR_8);
        VAR_8->resumestate = 128;
    case 128:
        VAR_12 = FUNC_8(VAR_8, &VAR_9);
        if (FUNC_0(VAR_12)) return VAR_12;
        FUNC_9(VAR_8, VAR_1, &VAR_9);
        FUNC_9(VAR_8, VAR_2, &VAR_9);
        FUNC_9(VAR_8, VAR_3, &VAR_7);
        VAR_8->resumestate = VAR_5;
        VAR_8->resume[VAR_6] = FUNC_4(VAR_8);
    default:
        ;
    }

    VAR_11 = VAR_8->resume[VAR_6];
    VAR_10 = FUNC_5(VAR_8);
    while (*VAR_10)
    {
        if (VAR_10[0] == '?')
        {
            if (VAR_10[1] == '>')
            {
                UINT VAR_13 = FUNC_4(VAR_8);
                strval VAR_14;


                while (VAR_11 < VAR_13)
                {
                    VAR_10 = FUNC_6(VAR_8, VAR_11);
                    if (!FUNC_3(*VAR_10)) break;
                    VAR_11++;
                }

                FUNC_7(VAR_11, VAR_13-VAR_11, &VAR_14);


                FUNC_11(VAR_8, 2);
                FUNC_1("%s\n", FUNC_2(VAR_8, &VAR_14));
                VAR_8->nodetype = VAR_4;
                VAR_8->resumestate = 129;
                VAR_8->resume[VAR_6] = 0;
                FUNC_9(VAR_8, VAR_3, &VAR_14);
                return VAR_0;
            }
        }

        FUNC_11(VAR_8, 1);
        VAR_10 = FUNC_5(VAR_8);
    }

    return VAR_0;
}
