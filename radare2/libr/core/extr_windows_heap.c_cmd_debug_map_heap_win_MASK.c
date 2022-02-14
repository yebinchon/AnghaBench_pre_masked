
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RCore ;


 int FUNC_0 (int *,char const*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char const) ;

__attribute__((used)) static int FUNC_4(RCore *VAR_1, const char *VAR_2) {
 FUNC_1 ();
 switch (VAR_2[0]) {
 case '?':
  FUNC_2 (VAR_1, VAR_0);
  break;
 case 'b':
  FUNC_0 (VAR_1, VAR_2 + 1);
  break;
 default:
  FUNC_3 (VAR_1, VAR_2[0]);
  break;
 }
 return 1;
}
