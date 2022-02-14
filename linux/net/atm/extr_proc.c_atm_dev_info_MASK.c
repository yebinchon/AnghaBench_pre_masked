
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int aal5; int aal0; } ;
struct atm_dev {int refcnt; TYPE_1__ stats; int * esi; int type; int number; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct seq_file*,char*,int ,...) ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_1, const struct atm_dev *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1, "%3d %-8s", VAR_2->number, VAR_2->type);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_1, "%02x", VAR_2->esi[VAR_3]);
 FUNC_4(VAR_1, "  ");
 FUNC_0(VAR_1, "0", &VAR_2->stats.aal0);
 FUNC_4(VAR_1, "  ");
 FUNC_0(VAR_1, "5", &VAR_2->stats.aal5);
 FUNC_2(VAR_1, "\t[%d]", FUNC_1(&VAR_2->refcnt));
 FUNC_3(VAR_1, '\n');
}
