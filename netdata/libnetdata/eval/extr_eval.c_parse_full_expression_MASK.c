
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVAL_NODE ;


 int VAR_0 ;
 int * FUNC_0 (char const**,int*) ;
 int * FUNC_1 (char const**,int*,int *) ;

__attribute__((used)) static inline EVAL_NODE *FUNC_2(const char **VAR_1, int *VAR_2) {
    EVAL_NODE *VAR_3 = FUNC_0(VAR_1, VAR_2);
    if(!VAR_3) {
        *VAR_2 = VAR_0;
        return ((void*)0);
    }

    return FUNC_1(VAR_1, VAR_2, VAR_3);
}
