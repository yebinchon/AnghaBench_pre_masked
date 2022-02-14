
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hints ;
struct TYPE_7__ {int ai_family; int ai_addrlen; int ai_addr; int ai_canonname; } ;
struct TYPE_6__ {int ai_flags; int ai_family; } ;
typedef int PCWSTR ;
typedef int BOOL ;
typedef TYPE_1__ ADDRINFOW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,TYPE_1__*,TYPE_3__**) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* VAR_10 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static
BOOL
FUNC_9(PCWSTR VAR_11)
{
    ADDRINFOW VAR_12;
    int VAR_13;

    FUNC_5(&VAR_12, sizeof(VAR_12));
    VAR_12.ai_family = VAR_4;
    VAR_12.ai_flags = VAR_1;

    VAR_13 = FUNC_2(VAR_11, ((void*)0), &VAR_12, &VAR_10);
    if (VAR_13 != 0)
    {
        VAR_12.ai_flags = VAR_0;

        VAR_13 = FUNC_2(VAR_11, ((void*)0), &VAR_12, &VAR_10);
        if (VAR_13 != 0)
        {
            FUNC_0(VAR_8, VAR_5, VAR_11);
            return VAR_3;
        }

        FUNC_8(VAR_2, VAR_10->ai_canonname, FUNC_7(VAR_10->ai_canonname));
    }
    else if (VAR_7)
    {
        VAR_13 = FUNC_3(VAR_10->ai_addr, VAR_10->ai_addrlen,
                              VAR_2, FUNC_6(VAR_2),
                              ((void*)0), 0,
                              VAR_6);
        if (VAR_13 != 0)
        {
            FUNC_1("GetNameInfoW failed: %d\n", FUNC_4());
        }
    }

    VAR_4 = VAR_10->ai_family;

    return VAR_9;
}
