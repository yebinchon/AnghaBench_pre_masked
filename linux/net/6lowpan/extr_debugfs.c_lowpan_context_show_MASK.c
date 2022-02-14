
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct lowpan_iphc_ctx_table* private; } ;
struct lowpan_iphc_ctx_table {int lock; TYPE_1__* table; } ;
struct TYPE_3__ {int plen; int pfx; int id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct seq_file*,char*,char*,char*,char,...) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_1, void *VAR_2)
{
 struct lowpan_iphc_ctx_table *VAR_3 = VAR_1->private;
 int VAR_4;

 FUNC_2(VAR_1, "%3s|%-43s|%c\n", "cid", "prefix", 'C');
 FUNC_3(VAR_1, "-------------------------------------------------\n");

 FUNC_4(&VAR_3->lock);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!FUNC_0(&VAR_3->table[VAR_4]))
   continue;

  FUNC_2(VAR_1, "%3d|%39pI6c/%-3d|%d\n", VAR_3->table[VAR_4].id,
      &VAR_3->table[VAR_4].pfx, VAR_3->table[VAR_4].plen,
      FUNC_1(&VAR_3->table[VAR_4]));
 }
 FUNC_5(&VAR_3->lock);

 return 0;
}
