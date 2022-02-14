
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct sctp_ht_iter* private; } ;
struct sctp_ht_iter {int hti; } ;
typedef int loff_t ;


 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct seq_file*) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_0, loff_t *VAR_1)
{
 struct sctp_ht_iter *VAR_2 = VAR_0->private;

 FUNC_1(&VAR_2->hti);

 return FUNC_0(FUNC_2(VAR_0), &VAR_2->hti, *VAR_1);
}
