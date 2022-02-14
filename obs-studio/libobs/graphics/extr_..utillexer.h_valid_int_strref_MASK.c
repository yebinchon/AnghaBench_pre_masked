
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {int len; int array; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct strref *VAR_0)
{
 return FUNC_0(VAR_0->array, VAR_0->len);
}
