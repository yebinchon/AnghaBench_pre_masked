
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*,size_t*,int *,int ) ;

__attribute__((used)) static inline int
FUNC_3()
{
    int VAR_0;
    char VAR_1[32] = {0};
    size_t VAR_2 = sizeof(VAR_1);
    VAR_0 = FUNC_2("kern.osproductversion", VAR_1, &VAR_2, ((void*)0), 0);
    if ( VAR_0 == 0 && FUNC_1(VAR_1, "10.9", FUNC_0("10.9")) == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
