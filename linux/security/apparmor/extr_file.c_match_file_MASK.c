
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct aa_label {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct aa_label*,struct file*,int ) ;
 int FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, struct file *VAR_2, unsigned int VAR_3)
{
 struct aa_label *VAR_4 = (struct aa_label *)VAR_1;

 if (FUNC_0(VAR_0, VAR_4, VAR_2, FUNC_1(VAR_2)))
  return VAR_3 + 1;
 return 0;
}
