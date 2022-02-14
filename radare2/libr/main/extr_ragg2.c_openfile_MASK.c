
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char const*,int,...) ;

__attribute__((used)) static int FUNC_7(const char *VAR_2, int VAR_3) {
 int VAR_4 = FUNC_6 (VAR_2, VAR_1 | VAR_0, 0644);
 if (VAR_4 == -1) {
  VAR_4 = FUNC_6 (VAR_2, VAR_1);
  if (VAR_4 == -1) {
   return -1;
  }
 }
 int VAR_5 = FUNC_5 (VAR_4, 0);

 if (VAR_5 != 0) {
  FUNC_3 ("Could not resize\n");
 }
 FUNC_1 (1);
 FUNC_2 (VAR_4, 1);
 return VAR_4;
}
