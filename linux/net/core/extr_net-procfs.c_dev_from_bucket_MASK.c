
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct net_device {int dummy; } ;
typedef int loff_t ;


 unsigned int VAR_0 ;
 struct net_device* FUNC_0 (struct seq_file*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int) ;

__attribute__((used)) static inline struct net_device *FUNC_3(struct seq_file *VAR_1, loff_t *VAR_2)
{
 struct net_device *VAR_3;
 unsigned int VAR_4;

 do {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3)
   return VAR_3;

  VAR_4 = FUNC_1(*VAR_2) + 1;
  *VAR_2 = FUNC_2(VAR_4, 1);
 } while (VAR_4 < VAR_0);

 return ((void*)0);
}
