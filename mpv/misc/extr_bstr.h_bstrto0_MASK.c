
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {scalar_t__ start; } ;


 char* FUNC_0 (void*,struct bstr) ;
 char* FUNC_1 (void*,char*) ;

__attribute__((used)) static inline char *FUNC_2(void *VAR_0, struct bstr VAR_1)
{
    return VAR_1.start ? FUNC_0(VAR_0, VAR_1) : FUNC_1(VAR_0, "");
}
