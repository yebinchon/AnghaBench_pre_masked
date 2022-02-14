
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; scalar_t__ len; scalar_t__ capacity; } ;


 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static inline void FUNC_1(struct dstr *VAR_0, char *VAR_1)
{
 VAR_0->array = VAR_1;
 VAR_0->len = (!VAR_1) ? 0 : FUNC_0(VAR_1);
 VAR_0->capacity = VAR_0->len + 1;
}
