
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_magic {int dummy; } ;
typedef int errmsg ;
typedef int RRegex ;
typedef int RMagic ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int,int *,char*,int) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char) ;

__attribute__((used)) static int FUNC_6(RMagic *VAR_3, struct r_magic *VAR_4) {
 RRegex VAR_5;
 int VAR_6;

 if (!FUNC_5 (VAR_0, '%')) {
  return 0;
 }

 VAR_6 = FUNC_1 (&VAR_5, "%[-0-9\\.]*s", VAR_1|VAR_2);
 if (VAR_6) {
  char VAR_7[512];
  FUNC_2 (VAR_6, &VAR_5, VAR_7, sizeof (VAR_7) - 1);
  FUNC_0 (VAR_3, "regex error %d, (%s)", VAR_6, VAR_7);
  return -1;
 } else {
  VAR_6 = FUNC_3 (&VAR_5, VAR_0, 0, 0, 0);
  FUNC_4 (&VAR_5);
  return !VAR_6;
 }
}
