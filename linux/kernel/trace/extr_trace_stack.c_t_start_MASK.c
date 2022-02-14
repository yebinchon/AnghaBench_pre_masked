
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;


 void* VAR_0 ;
 void* FUNC_0 (struct seq_file*,scalar_t__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;

__attribute__((used)) static void *FUNC_4(struct seq_file *VAR_3, loff_t *VAR_4)
{
 FUNC_3();

 FUNC_1(VAR_1);

 FUNC_2(&VAR_2);

 if (*VAR_4 == 0)
  return VAR_0;

 return FUNC_0(VAR_3, VAR_4);
}
