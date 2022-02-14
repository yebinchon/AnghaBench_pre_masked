
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {scalar_t__ family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_3)
{
 if (VAR_3->family != VAR_1



  ) {
  FUNC_0("protocol family %u not supported\n",
        VAR_3->family);
  return -VAR_0;
 }

 return 0;
}
