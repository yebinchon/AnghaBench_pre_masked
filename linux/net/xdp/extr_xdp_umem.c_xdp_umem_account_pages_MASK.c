
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xdp_umem {unsigned long npgs; TYPE_1__* user; } ;
struct TYPE_3__ {int locked_vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int *,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ) ;
 unsigned long FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct xdp_umem *VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;

 if (FUNC_2(VAR_0))
  return 0;

 VAR_5 = FUNC_6(VAR_3) >> VAR_2;
 VAR_4->user = FUNC_5(FUNC_3());

 do {
  VAR_7 = FUNC_1(&VAR_4->user->locked_vm);
  VAR_6 = VAR_7 + VAR_4->npgs;
  if (VAR_6 > VAR_5) {
   FUNC_4(VAR_4->user);
   VAR_4->user = ((void*)0);
   return -VAR_1;
  }
 } while (FUNC_0(&VAR_4->user->locked_vm, VAR_7,
         VAR_6) != VAR_7);
 return 0;
}
