
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;
typedef int (* ADD_STAT ) (int *,int ,int *,int ,void*) ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,int) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;

void FUNC_4(ADD_STAT VAR_3, void *VAR_4) {
    FUNC_1(&VAR_2);

    if (VAR_1 != ((void*)0)) {
        int VAR_5;
        for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
            if (VAR_1[VAR_5] != 0) {
                char VAR_6[12];
                FUNC_3(VAR_6, sizeof(VAR_6), "%d", VAR_5 * 32);
                FUNC_0(VAR_6, "%u", VAR_1[VAR_5]);
            }
        }
    } else {
        FUNC_0("sizes_status", "disabled", "");
    }

    VAR_3(((void*)0), 0, ((void*)0), 0, VAR_4);
    FUNC_2(&VAR_2);
}
