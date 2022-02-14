
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {int * array; int len; } ;



__attribute__((used)) static inline bool FUNC_0(const struct strref *VAR_0)
{
 return !VAR_0 || !VAR_0->array || !VAR_0->len || !*VAR_0->array;
}
