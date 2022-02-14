
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smack_rule {int smk_access; TYPE_2__* smk_object; TYPE_1__* smk_subject; } ;
struct seq_file {int dummy; } ;
struct TYPE_4__ {int smk_known; } ;
struct TYPE_3__ {int smk_known; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_7, struct smack_rule *VAR_8, int VAR_9)
{






 if (FUNC_2(VAR_8->smk_subject->smk_known) >= VAR_9 ||
     FUNC_2(VAR_8->smk_object->smk_known) >= VAR_9)
  return;

 if (VAR_8->smk_access == 0)
  return;

 FUNC_0(VAR_7, "%s %s",
     VAR_8->smk_subject->smk_known,
     VAR_8->smk_object->smk_known);

 FUNC_1(VAR_7, ' ');

 if (VAR_8->smk_access & VAR_4)
  FUNC_1(VAR_7, 'r');
 if (VAR_8->smk_access & VAR_6)
  FUNC_1(VAR_7, 'w');
 if (VAR_8->smk_access & VAR_2)
  FUNC_1(VAR_7, 'x');
 if (VAR_8->smk_access & VAR_0)
  FUNC_1(VAR_7, 'a');
 if (VAR_8->smk_access & VAR_5)
  FUNC_1(VAR_7, 't');
 if (VAR_8->smk_access & VAR_3)
  FUNC_1(VAR_7, 'l');
 if (VAR_8->smk_access & VAR_1)
  FUNC_1(VAR_7, 'b');

 FUNC_1(VAR_7, '\n');
}
