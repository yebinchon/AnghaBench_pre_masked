
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,char*) ;
 scalar_t__ FUNC_1 (int,int,int,int*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_7, bool VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 if (VAR_8) {
  VAR_9 = VAR_4;
  VAR_10 = VAR_2;
  VAR_11 = VAR_3;
 } else {
  VAR_9 = VAR_5;
  VAR_10 = VAR_0;
  VAR_11 = VAR_1;
 }

 if (FUNC_1(VAR_7, VAR_9, VAR_10, &VAR_11, sizeof(VAR_11)))
  FUNC_0(1, VAR_6, "setsockopt path mtu");
}
