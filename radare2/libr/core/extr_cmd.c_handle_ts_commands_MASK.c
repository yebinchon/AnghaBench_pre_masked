
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int TSNode ;
typedef int RCore ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,char const*,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(RCore *VAR_0, const char *VAR_1, TSNode VAR_2, bool VAR_3) {
 ut32 VAR_4 = FUNC_4 (VAR_2);
 bool VAR_5 = 1;
 int VAR_6;

 FUNC_0 ("commands with %d childs\n", VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
  TSNode VAR_7 = FUNC_3 (VAR_2, VAR_6);
  VAR_5 &= FUNC_2 (VAR_0, VAR_1, VAR_7, VAR_3);
  if (!VAR_5) {
   FUNC_1 ("Error while parsing command: %s\n", VAR_1);
   return 0;
  }
 }
 return VAR_5;
}
