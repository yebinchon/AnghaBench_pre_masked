
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef scalar_t__ ULONG ;
struct TYPE_3__ {int KeyHandle; } ;
typedef scalar_t__* PULONG ;
typedef TYPE_1__* PLSA_DB_OBJECT ;
typedef int OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef int LPWSTR ;
typedef int * LPVOID ;
typedef int HANDLE ;


 int FUNC_0 (int *,int *,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int *,scalar_t__*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

NTSTATUS
FUNC_6(PLSA_DB_OBJECT VAR_4,
                       LPWSTR VAR_5,
                       LPVOID VAR_6,
                       PULONG VAR_7)
{
    OBJECT_ATTRIBUTES VAR_8;
    UNICODE_STRING VAR_9;
    HANDLE VAR_10;
    ULONG VAR_11;
    NTSTATUS VAR_12;

    FUNC_4(&VAR_9,
                         VAR_5);

    FUNC_0(&VAR_8,
                               &VAR_9,
                               VAR_1,
                               VAR_4->KeyHandle,
                               ((void*)0));

    VAR_12 = FUNC_3(&VAR_10,
                       VAR_0,
                       &VAR_8);
    if (!FUNC_1(VAR_12))
    {
        return VAR_12;
    }

    VAR_11 = *VAR_7;
    VAR_12 = FUNC_5(VAR_10,
                                 ((void*)0),
                                 ((void*)0),
                                 &VAR_11,
                                 0);
    if (!FUNC_1(VAR_12) && VAR_12 != VAR_2)
    {
        goto Done;
    }

    if (VAR_6 == ((void*)0) || *VAR_7 == 0)
    {
        *VAR_7 = VAR_11;
        VAR_12 = VAR_3;
        goto Done;
    }
    else if (*VAR_7 < VAR_11)
    {
        *VAR_7 = VAR_11;
        VAR_12 = VAR_2;
        goto Done;
    }

    VAR_12 = FUNC_5(VAR_10,
                                 ((void*)0),
                                 VAR_6,
                                 &VAR_11,
                                 0);
    if (FUNC_1(VAR_12))
    {
        *VAR_7 = VAR_11;
    }

Done:
    FUNC_2(VAR_10);

    return VAR_12;
}
