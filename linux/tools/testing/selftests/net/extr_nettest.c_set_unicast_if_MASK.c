
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ifindex ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,int,int*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = VAR_2;
 int VAR_9 = VAR_3;
 int VAR_10;

 VAR_6 = FUNC_0(VAR_6);

 if (VAR_7 == VAR_0) {
  VAR_8 = VAR_1;
  VAR_9 = VAR_4;
 }
 VAR_10 = FUNC_2(VAR_5, VAR_9, VAR_8, &VAR_6, sizeof(VAR_6));
 if (VAR_10 < 0)
  FUNC_1("setsockopt(IP_UNICAST_IF)");

 return VAR_10;
}
