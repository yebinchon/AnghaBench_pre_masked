
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* addrs; int rtables; } ;
typedef TYPE_1__ find_expr_references_context ;
struct TYPE_7__ {int numrefs; int refs; } ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int List ;
typedef int DependencyType ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (int const*,int ,int ,int ) ;

void
FUNC_6(const ObjectAddress *VAR_0,
        Node *VAR_1, List *VAR_2,
        DependencyType VAR_3)
{
 find_expr_references_context VAR_4;

 VAR_4.addrs = FUNC_4();


 VAR_4.rtables = FUNC_3(VAR_2);


 FUNC_1(VAR_1, &VAR_4);


 FUNC_0(VAR_4.addrs);


 FUNC_5(VAR_0,
          VAR_4.addrs->refs, VAR_4.addrs->numrefs,
          VAR_3);

 FUNC_2(VAR_4.addrs);
}
