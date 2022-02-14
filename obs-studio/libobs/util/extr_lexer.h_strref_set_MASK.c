
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {char const* array; size_t len; } ;



__attribute__((used)) static inline void FUNC_0(struct strref *VAR_0, const char *VAR_1, size_t VAR_2)
{
 VAR_0->array = VAR_1;
 VAR_0->len = VAR_2;
}
