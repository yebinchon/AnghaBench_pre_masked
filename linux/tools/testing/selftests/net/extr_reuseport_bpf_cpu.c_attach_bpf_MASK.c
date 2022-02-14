
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog {int len; struct sock_filter* filter; } ;
struct sock_filter {int member_0; scalar_t__ member_3; int member_2; int member_1; } ;
typedef int p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ,char*) ;
 scalar_t__ FUNC_1 (int,int ,int ,struct sock_fprog*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_10)
{
 struct sock_filter VAR_11[] = {

  { VAR_2 | VAR_4 | VAR_1, 0, 0, VAR_6 + VAR_5 },

  { VAR_3 | VAR_0, 0, 0, 0 },
 };
 struct sock_fprog VAR_12 = {
  .len = 2,
  .filter = VAR_11,
 };

 if (FUNC_1(VAR_10, VAR_7, VAR_8, &VAR_12, sizeof(VAR_12)))
  FUNC_0(1, VAR_9, "failed to set SO_ATTACH_REUSEPORT_CBPF");
}
