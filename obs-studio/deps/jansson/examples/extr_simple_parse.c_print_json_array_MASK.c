
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,size_t,int ) ;

void FUNC_6(json_t *VAR_0, int VAR_1) {
    size_t VAR_2;
    size_t VAR_3 = FUNC_1(VAR_0);
    FUNC_4(VAR_1);

    FUNC_5("JSON Array of %ld element%s:\n", VAR_3, FUNC_2(VAR_3));
    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
        FUNC_3(FUNC_0(VAR_0, VAR_2), VAR_1 + 2);
    }
}
