
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext2_off_t ;
typedef int ext2_file_t ;
typedef int __u64 ;


 scalar_t__ FUNC_0 (int ,int*) ;

ext2_off_t FUNC_1(ext2_file_t VAR_0)
{
 __u64 VAR_1;

 if (FUNC_0(VAR_0, &VAR_1))
  return 0;
 if ((VAR_1 >> 32) != 0)
  return 0;
 return VAR_1;
}
