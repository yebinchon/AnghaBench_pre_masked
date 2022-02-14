
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ao {scalar_t__ format; } ;
struct TYPE_5__ {int SubFormat; } ;
typedef TYPE_1__ WAVEFORMATEXTENSIBLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ao*,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ao*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct ao*,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_5(struct ao *VAR_1, WAVEFORMATEXTENSIBLE *VAR_2)
{

    if (FUNC_4(VAR_1, VAR_2))
        return 1;

    if (FUNC_1(VAR_1->format)) {
        if (VAR_1->format != VAR_0) {


            FUNC_0(VAR_1, "Retrying as AC3.\n");
            VAR_2->SubFormat = *FUNC_2(VAR_0);
            if (FUNC_4(VAR_1, VAR_2))
                return 1;
        }
        return 0;
    }


    return FUNC_3(VAR_1, VAR_2);
}
