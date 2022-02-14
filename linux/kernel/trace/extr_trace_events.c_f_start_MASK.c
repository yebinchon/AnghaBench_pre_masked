
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 void* FUNC_2 (struct seq_file*,void*,scalar_t__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void *FUNC_4(struct seq_file *VAR_3, loff_t *VAR_4)
{
 void *VAR_5 = (void *)VAR_1;
 loff_t VAR_6 = 0;


 FUNC_3(&VAR_2);
 if (!FUNC_1(VAR_3->private))
  return FUNC_0(-VAR_0);

 while (VAR_6 < *VAR_4 && VAR_5)
  VAR_5 = FUNC_2(VAR_3, VAR_5, &VAR_6);

 return VAR_5;
}
