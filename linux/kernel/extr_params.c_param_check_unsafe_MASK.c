
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const struct kernel_param *VAR_5)
{
 if (VAR_5->flags & VAR_0 &&
     FUNC_2(VAR_3))
  return 0;

 if (VAR_5->flags & VAR_1) {
  FUNC_1("Setting dangerous option %s - tainting kernel\n",
     VAR_5->name);
  FUNC_0(VAR_4, VAR_2);
 }

 return 1;
}
