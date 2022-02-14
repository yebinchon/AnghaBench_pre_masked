
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog {unsigned short len; struct sock_filter* filter; } ;
struct sock_filter {int dummy; } ;
typedef int filter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sock_filter FUNC_0 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int,struct sock_fprog*) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct sock_filter VAR_4[] = {
  FUNC_0(VAR_1+VAR_0, VAR_3),
 };
 struct sock_fprog VAR_5 = {
  .len = (unsigned short)(sizeof(VAR_4)/sizeof(VAR_4[0])),
  .filter = VAR_4,
 };
 if (FUNC_2(VAR_2, 2, &VAR_5))
  FUNC_1("prctl");
}
