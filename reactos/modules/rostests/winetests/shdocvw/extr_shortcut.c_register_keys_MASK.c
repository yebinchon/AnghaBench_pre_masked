
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct registry_value {int dwType; int szName; } ;
struct registry_key {unsigned int cValues; unsigned int cSubKeys; struct registry_key* pSubKeys; struct registry_value* pValues; int szName; } ;
typedef int HKEY ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct registry_value const*) ;
 int FUNC_1 (struct registry_value const*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_5(HKEY VAR_4, const struct registry_key *VAR_5, unsigned int VAR_6) {
    HKEY VAR_7;
    unsigned int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        if (VAR_0 == FUNC_3(VAR_4, VAR_5[VAR_8].szName, 0, ((void*)0), 0,
                                             VAR_2, ((void*)0), &VAR_7, ((void*)0)))
        {
            for (VAR_9 = 0; VAR_9 < VAR_5[VAR_8].cValues; VAR_9++) {
                const struct registry_value * VAR_10 = &VAR_5[VAR_8].pValues[VAR_9];
                if (VAR_0 != FUNC_4(VAR_7, VAR_10->szName, 0, VAR_10->dwType,
                                                    FUNC_0(VAR_10), FUNC_1(VAR_10)))
                {
                    FUNC_2(VAR_7);
                    return VAR_1;
                }
            }

            if (!FUNC_5(VAR_7, VAR_5[VAR_8].pSubKeys, VAR_5[VAR_8].cSubKeys)) {
                FUNC_2(VAR_7);
                return VAR_1;
            }

            FUNC_2(VAR_7);
        }
    }

    return VAR_3;
}
