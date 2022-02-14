
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int anal; int config; } ;
typedef int RSignOptions ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int *,char const*) ;
 int FUNC_4 (int ,int *,char const*,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*,char const*) ;

__attribute__((used)) static int FUNC_7(void *VAR_1, const char *VAR_2) {
 int VAR_3 = 1;
 RCore *VAR_4 = (RCore *) VAR_1;
 const char *VAR_5 = FUNC_1 (VAR_4->config, "zign.diff.bthresh");
 const char *VAR_6 = FUNC_1 (VAR_4->config, "zign.diff.gthresh");
 RSignOptions *VAR_7 = FUNC_6 (VAR_5, VAR_6);

 switch (*VAR_2) {
 case ' ':
  if (!VAR_2[1]) {
   FUNC_0 ("usage: zc other_space\n");
   VAR_3 = 0;
   break;
  }
  VAR_3 = FUNC_3 (VAR_4->anal, VAR_7, VAR_2 + 1);
  break;
 case 'n':
  switch (VAR_2[1]) {
  case ' ':
   if (!VAR_2[2]) {
    FUNC_0 ("usage: zcn other_space\n");
    VAR_3 = 0;
    break;
   }
   VAR_3 = FUNC_4 (VAR_4->anal, VAR_7, VAR_2 + 2, 0);
   break;
  case '!':
   if (VAR_2[2] != ' ' || !VAR_2[3]) {
    FUNC_0 ("usage: zcn! other_space\n");
    VAR_3 = 0;
    break;
   }
   VAR_3 = FUNC_4 (VAR_4->anal, VAR_7, VAR_2 + 3, 1);
   break;
  default:
   FUNC_0 ("usage: zcn! other_space\n");
   VAR_3 = 0;
  }
  break;
 case '?':
  FUNC_2 (VAR_4, VAR_0);
  break;
 default:
  FUNC_0 ("usage: zc[?n!] other_space\n");
  VAR_3 = 0;
 }

 FUNC_5 (VAR_7);

 return VAR_3;
}
