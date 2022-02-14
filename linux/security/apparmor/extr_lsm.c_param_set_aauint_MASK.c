
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char const*,struct kernel_param const*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_5, const struct kernel_param *VAR_6)
{
 int VAR_7;

 if (!VAR_3)
  return -VAR_0;

 if (VAR_4)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 FUNC_1("AppArmor: buffer size set to %d bytes\n", VAR_2);

 return VAR_7;
}
