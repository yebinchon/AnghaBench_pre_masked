
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ resumestate; scalar_t__* resume; int nodetype; } ;
typedef TYPE_1__ xmlreader ;
typedef int strval ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static HRESULT FUNC_8(xmlreader *VAR_6)
{
    WCHAR *VAR_7;
    UINT VAR_8;

    if (VAR_6->resumestate == VAR_3)
    {
        VAR_8 = VAR_6->resume[VAR_5];
        VAR_7 = FUNC_3(VAR_6);
    }
    else
    {

        FUNC_7(VAR_6, 9);
        FUNC_6(VAR_6);
        VAR_7 = FUNC_3(VAR_6);
        VAR_8 = FUNC_2(VAR_6);
        VAR_6->nodetype = VAR_2;
        VAR_6->resume[VAR_5] = VAR_8;
        VAR_6->resumestate = VAR_3;
        FUNC_5(VAR_6, VAR_1, ((void*)0));
    }

    while (*VAR_7)
    {
        if (*VAR_7 == ']' && *(VAR_7+1) == ']' && *(VAR_7+2) == '>')
        {
            strval VAR_9;

            FUNC_4(VAR_8, FUNC_2(VAR_6)-VAR_8, &VAR_9);


            FUNC_7(VAR_6, 3);
            FUNC_0("%s\n", FUNC_1(VAR_6, &VAR_9));

            FUNC_5(VAR_6, VAR_1, &VAR_9);
            VAR_6->resume[VAR_5] = 0;
            VAR_6->resumestate = VAR_4;
            return VAR_0;
        }
        else
        {
            FUNC_7(VAR_6, 1);
            VAR_7++;
        }
    }

    return VAR_0;
}
