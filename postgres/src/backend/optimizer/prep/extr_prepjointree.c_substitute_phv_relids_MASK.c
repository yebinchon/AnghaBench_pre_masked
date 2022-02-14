
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int varno; int subrelids; scalar_t__ sublevels_up; } ;
typedef TYPE_1__ substitute_phv_relids_context ;
typedef int Relids ;
typedef int Node ;


 int FUNC_0 (int *,int ,void*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(Node *VAR_1, int VAR_2, Relids VAR_3)
{
 substitute_phv_relids_context VAR_4;

 VAR_4.varno = VAR_2;
 VAR_4.sublevels_up = 0;
 VAR_4.subrelids = VAR_3;




 FUNC_0(VAR_1,
         VAR_0,
         (void *) &VAR_4,
         0);
}
