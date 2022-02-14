
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RCore ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(RCore *VAR_4, char VAR_5) {
 switch (VAR_5) {
 case 'b':
  FUNC_1 (VAR_4, VAR_1);
  break;
 case 's':
  FUNC_1 (VAR_4, VAR_3);
  break;
 case 'r':
  FUNC_1 (VAR_4, VAR_2);
  break;
 case '?':
  FUNC_1 (VAR_4, VAR_0);
  break;
 default:
  FUNC_0 ("See afv?, afvb?, afvr? and afvs?\n");
 }
}
