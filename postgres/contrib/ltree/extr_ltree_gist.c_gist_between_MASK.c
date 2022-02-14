
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ltree_gist ;
struct TYPE_4__ {scalar_t__ firstgood; } ;
typedef TYPE_1__ lquery ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_3(ltree_gist *VAR_0, lquery *VAR_1)
{
 if (VAR_1->firstgood == 0)
  return 1;

 if (FUNC_2(FUNC_0(VAR_0), VAR_1) > 0)
  return 0;

 if (FUNC_2(FUNC_1(VAR_0), VAR_1) < 0)
  return 0;

 return 1;
}
