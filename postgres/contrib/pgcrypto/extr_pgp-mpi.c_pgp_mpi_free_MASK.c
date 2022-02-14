
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bytes; } ;
typedef TYPE_1__ PGP_MPI ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;

int
FUNC_2(PGP_MPI *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;
 FUNC_1(VAR_0, 0, sizeof(*VAR_0) + VAR_0->bytes);
 FUNC_0(VAR_0);
 return 0;
}
