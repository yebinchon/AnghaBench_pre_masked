
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_umem {TYPE_1__* user; int npgs; } ;
struct TYPE_2__ {int locked_vm; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct xdp_umem *VAR_0)
{
 if (VAR_0->user) {
  FUNC_0(VAR_0->npgs, &VAR_0->user->locked_vm);
  FUNC_1(VAR_0->user);
 }
}
