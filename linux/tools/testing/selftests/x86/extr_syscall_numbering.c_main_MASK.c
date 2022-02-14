
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 () ;

int FUNC_4()
{




 FUNC_1("\tChecking for x32...");
 FUNC_0(VAR_4);
 if (FUNC_2(39 | VAR_1, 0, 0, 0, 0, 0, 0) >= 0) {
  FUNC_1(" supported\n");
 } else if (VAR_2 == VAR_0) {
  FUNC_1(" not supported\n");
 } else {
  FUNC_1(" confused\n");
 }

 FUNC_3();

 return VAR_3 ? 1 : 0;
}
