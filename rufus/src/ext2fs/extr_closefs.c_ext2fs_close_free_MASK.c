
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * ext2_filsys ;
typedef scalar_t__ errcode_t ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

errcode_t FUNC_2(ext2_filsys *VAR_0)
{
 errcode_t VAR_1;
 ext2_filsys VAR_2 = *VAR_0;

 VAR_1 = FUNC_0(VAR_2, 0);
 if (VAR_1)
  FUNC_1(VAR_2);
 *VAR_0 = ((void*)0);
 return VAR_1;
}
