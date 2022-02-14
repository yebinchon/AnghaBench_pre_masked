
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xa_state {int xa_index; int * xa_node; int xa; } ;
struct TYPE_2__ {int shift; } ;


 int VAR_0 ;
 void* FUNC_0 (struct xa_state*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 TYPE_1__* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (struct xa_state*) ;
 void* FUNC_5 (struct xa_state*) ;
 scalar_t__ FUNC_6 (struct xa_state*) ;

__attribute__((used)) static void *FUNC_7(struct xa_state *VAR_1)
{
 void *VAR_2;

 if (FUNC_6(VAR_1))
  return FUNC_5(VAR_1);
 if (FUNC_4(VAR_1))
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_1->xa);
 if (!FUNC_2(VAR_2)) {
  if (VAR_1->xa_index)
   return FUNC_0(VAR_1);
 } else {
  if ((VAR_1->xa_index >> FUNC_3(VAR_2)->shift) > VAR_0)
   return FUNC_0(VAR_1);
 }

 VAR_1->xa_node = ((void*)0);
 return VAR_2;
}
