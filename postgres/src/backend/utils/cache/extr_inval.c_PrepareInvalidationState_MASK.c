
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ my_level; struct TYPE_3__* parent; } ;
typedef TYPE_1__ TransInvalidationInfo ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{
 TransInvalidationInfo *VAR_2;

 if (VAR_1 != ((void*)0) &&
  VAR_1->my_level == FUNC_1())
  return;

 VAR_2 = (TransInvalidationInfo *)
  FUNC_2(VAR_0,
          sizeof(TransInvalidationInfo));
 VAR_2->parent = VAR_1;
 VAR_2->my_level = FUNC_1();





 FUNC_0(VAR_1 == ((void*)0) ||
     VAR_2->my_level > VAR_1->my_level);

 VAR_1 = VAR_2;
}
