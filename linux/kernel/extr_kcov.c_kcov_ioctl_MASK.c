
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcov {int lock; } ;
struct file {struct kcov* private_data; } ;


 int FUNC_0 (struct kcov*,unsigned int,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_0, unsigned int VAR_1, unsigned long VAR_2)
{
 struct kcov *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->private_data;
 FUNC_1(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_2(&VAR_3->lock);
 return VAR_4;
}
