
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** p; } ;
typedef void* Point ;
typedef int POLYGON ;
typedef TYPE_1__ LSEG ;


 scalar_t__ FUNC_0 (TYPE_1__*,void**) ;
 int FUNC_1 (void**,void**,int *,int) ;
 scalar_t__ FUNC_2 (void**,void**) ;

__attribute__((used)) static bool
FUNC_3(Point *VAR_0, Point *VAR_1, LSEG *VAR_2, POLYGON *VAR_3, int VAR_4)
{

 LSEG VAR_5;

 VAR_5.p[0] = *VAR_0;
 VAR_5.p[1] = *VAR_1;

 if (FUNC_2(VAR_0, VAR_2->p))
 {
  if (FUNC_0(&VAR_5, VAR_2->p + 1))
   return FUNC_1(VAR_1, VAR_2->p + 1, VAR_3, VAR_4);
 }
 else if (FUNC_2(VAR_0, VAR_2->p + 1))
 {
  if (FUNC_0(&VAR_5, VAR_2->p))
   return FUNC_1(VAR_1, VAR_2->p, VAR_3, VAR_4);
 }
 else if (FUNC_0(&VAR_5, VAR_2->p))
 {
  return FUNC_1(VAR_1, VAR_2->p, VAR_3, VAR_4);
 }
 else if (FUNC_0(&VAR_5, VAR_2->p + 1))
 {
  return FUNC_1(VAR_1, VAR_2->p + 1, VAR_3, VAR_4);
 }

 return 1;
}
