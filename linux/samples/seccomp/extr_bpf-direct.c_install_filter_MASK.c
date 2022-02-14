
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog {unsigned short len; struct sock_filter* filter; } ;
struct sock_filter {int dummy; } ;
typedef int filter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sock_filter FUNC_0 (scalar_t__,int ,int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct sock_filter FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int,struct sock_fprog*,...) ;
 int FUNC_4 (int ) ;
 int VAR_22 ;

__attribute__((used)) static int FUNC_5(void)
{
 struct sock_filter VAR_23[] = {

  FUNC_1(VAR_4+VAR_6+VAR_0, VAR_22),

  FUNC_0(VAR_2+VAR_1+VAR_3, VAR_19, 0, 1),
  FUNC_1(VAR_5+VAR_3, VAR_10),




  FUNC_0(VAR_2+VAR_1+VAR_3, VAR_17, 0, 1),
  FUNC_1(VAR_5+VAR_3, VAR_10),
  FUNC_0(VAR_2+VAR_1+VAR_3, VAR_16, 0, 1),
  FUNC_1(VAR_5+VAR_3, VAR_10),
  FUNC_0(VAR_2+VAR_1+VAR_3, VAR_18, 1, 0),
  FUNC_0(VAR_2+VAR_1+VAR_3, VAR_21, 3, 2),


  FUNC_1(VAR_4+VAR_6+VAR_0, FUNC_4(0)),
  FUNC_0(VAR_2+VAR_1+VAR_3, VAR_14, 4, 0),
  FUNC_1(VAR_5+VAR_3, VAR_11),


  FUNC_1(VAR_4+VAR_6+VAR_0, FUNC_4(0)),
  FUNC_0(VAR_2+VAR_1+VAR_3, VAR_15, 1, 0),

  FUNC_0(VAR_2+VAR_1+VAR_3, VAR_13, 1, 2),

  FUNC_1(VAR_5+VAR_3, VAR_10),
  FUNC_1(VAR_5+VAR_3, VAR_12),
  FUNC_1(VAR_5+VAR_3, VAR_11),
 };
 struct sock_fprog VAR_24 = {
  .len = (unsigned short)(sizeof(VAR_23)/sizeof(VAR_23[0])),
  .filter = VAR_23,
 };

 if (FUNC_3(VAR_7, 1, 0, 0, 0)) {
  FUNC_2("prctl(NO_NEW_PRIVS)");
  return 1;
 }


 if (FUNC_3(VAR_8, VAR_9, &VAR_24)) {
  FUNC_2("prctl");
  return 1;
 }
 return 0;
}
