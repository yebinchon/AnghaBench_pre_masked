
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t GroupCount; TYPE_1__* Groups; } ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_8__ {int Sid; } ;
typedef TYPE_2__ SID_IDENTIFIER_AUTHORITY ;
typedef TYPE_3__* PTOKEN_GROUPS ;
typedef int * PSID ;
typedef int HANDLE ;
typedef size_t DWORD ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*,int,int ,int ,int ,int ,int ,int ,int ,int ,int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,TYPE_3__*,size_t,size_t*) ;
 TYPE_3__* FUNC_5 (int ,int ,size_t) ;
 int FUNC_6 (int ,int ,TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static BOOL FUNC_7(HANDLE VAR_6)
{
    PSID VAR_7 = ((void*)0);
    SID_IDENTIFIER_AUTHORITY VAR_8 = { VAR_3 };
    DWORD VAR_9;
    PTOKEN_GROUPS VAR_10;
    DWORD VAR_11;


    if (! FUNC_0(&VAR_8, 2, VAR_2,
                                   VAR_0, 0, 0, 0, 0, 0, 0,
                                   &VAR_7))
        return VAR_1;


    VAR_9 = 0;
    FUNC_4(VAR_6, VAR_5, ((void*)0), 0, &VAR_9);
    VAR_10 = FUNC_5(FUNC_3(), 0, VAR_9);
    if (VAR_10 == ((void*)0))
    {
        FUNC_2(VAR_7);
        return VAR_1;
    }
    if (! FUNC_4(VAR_6, VAR_5, VAR_10, VAR_9, &VAR_9))
    {
        FUNC_6(FUNC_3(), 0, VAR_10);
        FUNC_2(VAR_7);
        return VAR_1;
    }


    for (VAR_11 = 0; VAR_11 < VAR_10->GroupCount; VAR_11++)
    {
        if (FUNC_1(VAR_10->Groups[VAR_11].Sid, VAR_7))
        {
            FUNC_6(FUNC_3(), 0, VAR_10);
            FUNC_2(VAR_7);
            return VAR_4;
        }
    }


    FUNC_6(FUNC_3(), 0, VAR_10);
    FUNC_2(VAR_7);
    return VAR_1;
}
