
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int one ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_3)
{
 int VAR_4 = 1;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_1, &VAR_4, sizeof(VAR_4));
 if (VAR_5 < 0 && VAR_5 != -VAR_0)
  FUNC_0("setsockopt(IPV6_RECVERR)");

 return VAR_5;
}
