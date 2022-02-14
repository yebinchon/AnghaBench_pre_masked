
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct kernel_param {scalar_t__ arg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const struct kernel_param *VAR_2)
{
 ulong VAR_3;
 int VAR_4 = FUNC_2(VAR_1, 0, &VAR_3);

 if (!VAR_4) {
  FUNC_0(*(ulong *)VAR_2->arg, (VAR_3 > VAR_0) ? VAR_0 : (VAR_3 ?: 1));
  FUNC_1();
 }
 return VAR_4;
}
