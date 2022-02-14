
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog {int len; struct sock_filter* filter; } ;
struct sock_filter {int dummy; } ;
typedef int bpf_prog ;
typedef int bpf_filter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sock_filter FUNC_0 (scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ,int ,struct sock_fprog*,int) ;

__attribute__((used)) static void FUNC_4(int VAR_7)
{
 struct sock_filter VAR_8[] = {
  FUNC_0(VAR_3+VAR_2+VAR_1, 80),
  FUNC_0(VAR_4+VAR_0, 0),
 };
 struct sock_fprog VAR_9;

 VAR_9.filter = VAR_8;
 VAR_9.len = sizeof(VAR_8) / sizeof(struct sock_filter);

 if (FUNC_3(VAR_7, VAR_6, VAR_5, &VAR_9,
         sizeof(VAR_9))) {
  FUNC_2("fanout data cbpf");
  FUNC_1(1);
 }
}
