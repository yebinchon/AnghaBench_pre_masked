
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int msg ;
struct TYPE_9__ {int backend; int node; } ;
struct TYPE_7__ {int backend_hi; int backend_lo; int rnode; int id; } ;
struct TYPE_8__ {TYPE_1__ sm; } ;
typedef TYPE_2__ SharedInvalidationMessage ;
typedef TYPE_3__ RelFileNodeBackend ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;

void
FUNC_2(RelFileNodeBackend VAR_1)
{
 SharedInvalidationMessage VAR_2;

 VAR_2.sm.id = VAR_0;
 VAR_2.sm.backend_hi = VAR_1.backend >> 16;
 VAR_2.sm.backend_lo = VAR_1.backend & 0xffff;
 VAR_2.sm.rnode = VAR_1.node;

 FUNC_1(&VAR_2, sizeof(VAR_2));

 FUNC_0(&VAR_2, 1);
}
