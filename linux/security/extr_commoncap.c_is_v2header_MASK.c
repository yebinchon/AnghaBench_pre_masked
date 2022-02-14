
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfs_cap_data {int magic_etc; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(size_t VAR_2, const struct vfs_cap_data *VAR_3)
{
 if (VAR_2 != VAR_1)
  return 0;
 return FUNC_1(FUNC_0(VAR_3->magic_etc)) == VAR_0;
}
