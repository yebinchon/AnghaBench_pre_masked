
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xsk_umem {int dummy; } ;
struct TYPE_4__ {int xsk; TYPE_1__* umem; } ;
struct TYPE_3__ {struct xsk_umem* umem; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xsk_umem*) ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static void FUNC_5(int VAR_2)
{
 struct xsk_umem *VAR_3 = VAR_1[0]->umem->umem;

 (void)VAR_2;

 FUNC_0();
 FUNC_3(VAR_1[0]->xsk);
 (void)FUNC_4(VAR_3);
 FUNC_2();

 FUNC_1(VAR_0);
}
