
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ tdrefcount; } ;
struct TYPE_10__ {scalar_t__ rd_partcheckcxt; scalar_t__ rd_pdcxt; scalar_t__ rd_partkeycxt; TYPE_1__* rd_rsdesc; scalar_t__ rd_rulescxt; scalar_t__ rd_indexcxt; struct TYPE_10__* rd_fdwroutine; struct TYPE_10__* rd_amcache; struct TYPE_10__* rd_indextuple; struct TYPE_10__* rd_options; struct TYPE_10__* rd_pubactions; int rd_idattr; int rd_pkattr; int rd_keyattr; int rd_indexattr; int rd_indexlist; int rd_fkeylist; int trigdesc; TYPE_4__* rd_att; struct TYPE_10__* rd_rel; } ;
struct TYPE_9__ {scalar_t__ rscxt; } ;
typedef TYPE_2__* Relation ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_11(Relation VAR_0, bool VAR_1)
{
 FUNC_0(FUNC_5(VAR_0));






 FUNC_4(VAR_0);





 if (VAR_0->rd_rel)
  FUNC_10(VAR_0->rd_rel);

 FUNC_0(VAR_0->rd_att->tdrefcount > 0);
 if (--VAR_0->rd_att->tdrefcount == 0)
 {
  if (VAR_1)
   FUNC_6(VAR_0->rd_att);
  else
   FUNC_2(VAR_0->rd_att);
 }
 FUNC_1(VAR_0->trigdesc);
 FUNC_9(VAR_0->rd_fkeylist);
 FUNC_8(VAR_0->rd_indexlist);
 FUNC_7(VAR_0->rd_indexattr);
 FUNC_7(VAR_0->rd_keyattr);
 FUNC_7(VAR_0->rd_pkattr);
 FUNC_7(VAR_0->rd_idattr);
 if (VAR_0->rd_pubactions)
  FUNC_10(VAR_0->rd_pubactions);
 if (VAR_0->rd_options)
  FUNC_10(VAR_0->rd_options);
 if (VAR_0->rd_indextuple)
  FUNC_10(VAR_0->rd_indextuple);
 if (VAR_0->rd_amcache)
  FUNC_10(VAR_0->rd_amcache);
 if (VAR_0->rd_fdwroutine)
  FUNC_10(VAR_0->rd_fdwroutine);
 if (VAR_0->rd_indexcxt)
  FUNC_3(VAR_0->rd_indexcxt);
 if (VAR_0->rd_rulescxt)
  FUNC_3(VAR_0->rd_rulescxt);
 if (VAR_0->rd_rsdesc)
  FUNC_3(VAR_0->rd_rsdesc->rscxt);
 if (VAR_0->rd_partkeycxt)
  FUNC_3(VAR_0->rd_partkeycxt);
 if (VAR_0->rd_pdcxt)
  FUNC_3(VAR_0->rd_pdcxt);
 if (VAR_0->rd_partcheckcxt)
  FUNC_3(VAR_0->rd_partcheckcxt);
 FUNC_10(VAR_0);
}
