
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct registry_key {unsigned int cSubKeys; int szName; struct registry_key* pSubKeys; } ;
typedef int HKEY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(HKEY VAR_2, const struct registry_key *VAR_3, unsigned int VAR_4) {
    HKEY VAR_5;
    unsigned int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        if (VAR_1 == FUNC_2(VAR_2, VAR_3[VAR_6].szName, 0, VAR_0, &VAR_5)) {
            FUNC_3(VAR_5, VAR_3[VAR_6].pSubKeys, VAR_3[VAR_6].cSubKeys);
            FUNC_0(VAR_5);
        }
        FUNC_1(VAR_2, VAR_3[VAR_6].szName);
    }
}
