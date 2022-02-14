
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {scalar_t__ len; int array; } ;


 int FUNC_0 (struct strref*,struct strref const*) ;

__attribute__((used)) static inline void FUNC_1(struct strref *VAR_0, const struct strref *VAR_1)
{
 if (!VAR_0->array)
  FUNC_0(VAR_0, VAR_1);
 else
  VAR_0->len += VAR_1->len;
}
