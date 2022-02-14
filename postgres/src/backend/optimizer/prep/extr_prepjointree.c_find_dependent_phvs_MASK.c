
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sublevels_up; int relids; } ;
typedef TYPE_1__ find_dependent_phvs_context ;
typedef int Node ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,void*,int ) ;

__attribute__((used)) static bool
FUNC_2(Node *VAR_1, int VAR_2)
{
 find_dependent_phvs_context VAR_3;

 VAR_3.relids = FUNC_0(VAR_2);
 VAR_3.sublevels_up = 0;




 return FUNC_1(VAR_1,
             VAR_0,
             (void *) &VAR_3,
             0);
}
