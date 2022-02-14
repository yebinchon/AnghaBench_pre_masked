
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int resumestate; scalar_t__* resume; int nodetype; } ;
typedef TYPE_1__ xmlreader ;
typedef int strval ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;


 size_t VAR_5 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_6 ;

__attribute__((used)) static HRESULT FUNC_8(xmlreader *VAR_7)
{
    switch (VAR_7->resumestate)
    {
    case 129:
        FUNC_6(VAR_7);
        VAR_7->resumestate = 128;
        VAR_7->resume[VAR_5] = FUNC_3(VAR_7);
        VAR_7->nodetype = VAR_4;
        FUNC_5(VAR_7, VAR_1, &VAR_6);
        FUNC_5(VAR_7, VAR_2, &VAR_6);
        FUNC_5(VAR_7, VAR_3, &VAR_6);

    case 128:
    {
        strval VAR_8;
        UINT VAR_9;

        FUNC_7(VAR_7);
        if (FUNC_2(VAR_7)) return VAR_0;

        VAR_9 = VAR_7->resume[VAR_5];
        FUNC_4(VAR_9, FUNC_3(VAR_7)-VAR_9, &VAR_8);
        FUNC_5(VAR_7, VAR_3, &VAR_8);
        FUNC_0("%s\n", FUNC_1(VAR_7, &VAR_8));
        VAR_7->resumestate = 129;
    }
    default:
        ;
    }

    return VAR_0;
}
