
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {int len; char* array; } ;



__attribute__((used)) static inline bool FUNC_0(struct strref *VAR_0)
{
 return VAR_0->len >= 2 && VAR_0->array[0] == '"' &&
        VAR_0->array[VAR_0->len - 1] == '"';
}
