
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum dso_type { ____Placeholder_dso_type } dso_type ;
typedef int ehdr ;
struct TYPE_3__ {scalar_t__ e_machine; } ;
typedef TYPE_1__ Elf64_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,TYPE_1__*,int) ;

enum dso_type FUNC_2(int VAR_5)
{
 Elf64_Ehdr VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 < 0)
  return VAR_2;

 if (VAR_7)
  return VAR_1;

 if (FUNC_1(VAR_5, &VAR_6, sizeof(VAR_6)) != sizeof(VAR_6))
  return VAR_2;

 if (VAR_6.e_machine == VAR_4)
  return VAR_3;

 return VAR_0;
}
