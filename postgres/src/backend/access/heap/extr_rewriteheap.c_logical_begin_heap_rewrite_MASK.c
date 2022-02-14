
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hash_ctl ;
typedef scalar_t__ TransactionId ;
struct TYPE_7__ {int keysize; int entrysize; int hcxt; } ;
struct TYPE_6__ {int rs_logical_rewrite; int rs_logical_mappings; int rs_cxt; scalar_t__ rs_num_rewrite_mappings; int rs_begin_lsn; scalar_t__ rs_logical_xmin; int rs_old_rel; } ;
typedef TYPE_1__* RewriteState ;
typedef int RewriteMappingFile ;
typedef TYPE_2__ HASHCTL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_5(RewriteState VAR_4)
{
 HASHCTL VAR_5;
 TransactionId VAR_6;






 VAR_4->rs_logical_rewrite =
  FUNC_2(VAR_4->rs_old_rel);

 if (!VAR_4->rs_logical_rewrite)
  return;

 FUNC_1(((void*)0), &VAR_6);






 if (VAR_6 == VAR_3)
 {
  VAR_4->rs_logical_rewrite = 0;
  return;
 }

 VAR_4->rs_logical_xmin = VAR_6;
 VAR_4->rs_begin_lsn = FUNC_0();
 VAR_4->rs_num_rewrite_mappings = 0;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.keysize = sizeof(TransactionId);
 VAR_5.entrysize = sizeof(RewriteMappingFile);
 VAR_5.hcxt = VAR_4->rs_cxt;

 VAR_4->rs_logical_mappings =
  FUNC_3("Logical rewrite mapping",
     128,
     &VAR_5,
     VAR_2 | VAR_0 | VAR_1);
}
