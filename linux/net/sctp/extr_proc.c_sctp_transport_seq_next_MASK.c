
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct sctp_ht_iter* private; } ;
struct sctp_ht_iter {int hti; } ;
typedef int loff_t ;


 void* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct seq_file*) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct sctp_ht_iter *VAR_3 = VAR_0->private;

 ++*VAR_2;

 return FUNC_0(FUNC_1(VAR_0), &VAR_3->hti);
}
