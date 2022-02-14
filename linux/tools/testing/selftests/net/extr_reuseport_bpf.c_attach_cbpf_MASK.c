
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sock_fprog {struct sock_filter* filter; int len; } ;
struct sock_filter {int member_0; int member_3; int member_2; int member_1; } ;
typedef int p ;


 int FUNC_0 (struct sock_filter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,int ,char*) ;
 scalar_t__ FUNC_2 (int,int ,int ,struct sock_fprog*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_10, uint16_t VAR_11)
{
 struct sock_filter VAR_12[] = {

  { VAR_3 | VAR_6 | VAR_1, 0, 0, 0 },

  { VAR_2 | VAR_4, 0, 0, VAR_11 },

  { VAR_5 | VAR_0, 0, 0, 0 },
 };
 struct sock_fprog VAR_13 = {
  .len = FUNC_0(VAR_12),
  .filter = VAR_12,
 };

 if (FUNC_2(VAR_10, VAR_7, VAR_8, &VAR_13, sizeof(VAR_13)))
  FUNC_1(1, VAR_9, "failed to set SO_ATTACH_REUSEPORT_CBPF");
}
