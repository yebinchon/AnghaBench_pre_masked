
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {int len; int array; } ;



__attribute__((used)) static inline void FUNC_0(struct strref *VAR_0, const struct strref *VAR_1)
{
 VAR_0->array = VAR_1->array;
 VAR_0->len = VAR_1->len;
}
