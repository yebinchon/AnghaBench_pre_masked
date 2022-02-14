
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef char calculated_number ;
typedef int avl_tree_lock ;
typedef int RRDVAR ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char const*,int *,char const*,int ,int,char*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static RRDVAR *FUNC_9(const char *VAR_5, avl_tree_lock *VAR_6, const char *VAR_7) {
    calculated_number *VAR_8 = FUNC_0(1, sizeof(calculated_number));
    *VAR_8 = VAR_1;

    RRDVAR *VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_4, VAR_3|VAR_2, VAR_8);
    if(FUNC_8(!VAR_9)) {
        FUNC_2(VAR_8);
        FUNC_1(VAR_0, "Requested variable '%s' already exists - possibly 2 plugins are updating it at the same time.", VAR_7);

        char *VAR_10 = FUNC_7(VAR_7);
        FUNC_4(VAR_10);
        uint32_t VAR_11 = FUNC_6(VAR_10);


        VAR_9 = FUNC_5(VAR_6, VAR_10, VAR_11);

        FUNC_2(VAR_10);
    }

    return VAR_9;
}
