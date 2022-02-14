
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {int dummy; } ;


 struct config* FUNC_0 (struct config*,void*,size_t) ;
 struct config* FUNC_1 (char const*,void**,size_t*) ;

struct config *FUNC_2(const char *VAR_0)
{
    struct config *VAR_1;
    void *VAR_2;
    size_t VAR_3;

    VAR_1 = FUNC_1(VAR_0, &VAR_2, &VAR_3);
    return VAR_1 ? FUNC_0(VAR_1, VAR_2, VAR_3) : ((void*)0);
}
