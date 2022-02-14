
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sThousand; void* sThousand_len; int sDecimal; void* sDecimal_len; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{

    if (!FUNC_0(VAR_2, VAR_0, VAR_3.sDecimal, FUNC_1(VAR_3.sDecimal)))
        FUNC_3(VAR_3.sDecimal, FUNC_2("."));

    if (!FUNC_0(VAR_2, VAR_1, VAR_3.sThousand, FUNC_1(VAR_3.sThousand)))
        FUNC_3(VAR_3.sThousand, FUNC_2(","));


    VAR_3.sDecimal_len = FUNC_4(VAR_3.sDecimal);
    VAR_3.sThousand_len = FUNC_4(VAR_3.sThousand);
}
