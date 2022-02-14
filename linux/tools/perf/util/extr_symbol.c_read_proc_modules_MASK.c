
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rb_root*) ;
 scalar_t__ FUNC_1 (char const*,struct rb_root*,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, struct rb_root *VAR_2)
{
 if (FUNC_2(VAR_1, "/proc/modules"))
  return -1;

 if (FUNC_1(VAR_1, VAR_2, VAR_0)) {
  FUNC_0(VAR_2);
  return -1;
 }

 return 0;
}
