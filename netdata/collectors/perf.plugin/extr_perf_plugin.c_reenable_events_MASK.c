
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int** VAR_5 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3() {
    int VAR_7, VAR_8;

    for(VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        for(VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
            int VAR_9 = *(VAR_5[VAR_7] + VAR_8);

            if(FUNC_2(VAR_9 == VAR_1)) continue;

            if(FUNC_1(VAR_9, VAR_2, VAR_4) == -1
               || FUNC_1(VAR_9, VAR_3, VAR_4) == -1)
            {
                FUNC_0("Cannot reenable event group");
            }
        }
    }
}
