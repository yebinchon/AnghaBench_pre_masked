
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pg_encoding {int dummy; } ;
struct TYPE_2__ {struct pg_encoding const enc; scalar_t__ name; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*) ;

__attribute__((used)) static const struct pg_encoding *
FUNC_1(const char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].name; VAR_2++)
  if (FUNC_0(VAR_0[VAR_2].name, VAR_1) == 0)
   return &VAR_0[VAR_2].enc;

 return ((void*)0);
}
