
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tags; } ;
typedef TYPE_1__ RRDHOST ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *,char const*) ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static inline void FUNC_3(RRDHOST *VAR_0, const char *VAR_1) {
    if(VAR_0->tags && VAR_1 && !FUNC_1(VAR_0->tags, VAR_1))
        return;

    void *VAR_2 = (void *)VAR_0->tags;
    VAR_0->tags = (VAR_1 && *VAR_1)?FUNC_2(VAR_1):((void*)0);
    FUNC_0(VAR_2);
}
