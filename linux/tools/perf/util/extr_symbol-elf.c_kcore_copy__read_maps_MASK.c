
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcore_copy_info {int dummy; } ;
typedef int Elf ;


 scalar_t__ FUNC_0 (int *,int,int ,struct kcore_copy_info*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct kcore_copy_info *VAR_1, Elf *VAR_2)
{
 if (FUNC_0(VAR_2, 1, VAR_0, VAR_1) < 0)
  return -1;

 return 0;
}
