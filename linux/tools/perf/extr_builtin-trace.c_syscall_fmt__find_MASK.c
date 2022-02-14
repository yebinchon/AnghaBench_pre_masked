
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_fmt {int dummy; } ;


 int FUNC_0 (int ) ;
 struct syscall_fmt* FUNC_1 (char const*,int ,int const,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct syscall_fmt *FUNC_2(const char *VAR_2)
{
 const int VAR_3 = FUNC_0(VAR_1);
 return FUNC_1(VAR_2, VAR_1, VAR_3, sizeof(struct syscall_fmt), VAR_0);
}
