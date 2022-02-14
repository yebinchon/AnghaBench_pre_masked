
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instruction {unsigned int num_srcs; void* src; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct instruction*) ;

struct instruction *FUNC_3(unsigned int VAR_0) {
    struct instruction *VAR_1 = FUNC_1(sizeof(*VAR_1));
    if(!VAR_1) {
        FUNC_0("Failed to allocate memory for an instruction structure\n");
        return ((void*)0);
    }

    if(VAR_0) {
        VAR_1->src = FUNC_1(VAR_0 * sizeof(*VAR_1->src));
        if(!VAR_1->src) {
            FUNC_0("Failed to allocate memory for instruction registers\n");
            FUNC_2(VAR_1);
            return ((void*)0);
        }
        VAR_1->num_srcs = VAR_0;
    }
    return VAR_1;
}
