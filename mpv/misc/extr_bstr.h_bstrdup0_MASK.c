
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int len; scalar_t__ start; } ;


 char* FUNC_0 (void*,char*,int ) ;

__attribute__((used)) static inline char *FUNC_1(void *VAR_0, struct bstr VAR_1)
{
    return FUNC_0(VAR_0, (char *)VAR_1.start, VAR_1.len);
}
