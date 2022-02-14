
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int firstLine ;
typedef int RCore ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (int,int *,int) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_6(RCore *VAR_1, const char *VAR_2) {
 int VAR_3 = FUNC_1 (VAR_2, VAR_0, 0);
 if (VAR_3 != -1) {
  char VAR_4[128] = {0};
  int VAR_5 = FUNC_2 (VAR_3, (ut8*)VAR_4, sizeof (VAR_4) - 1);
  VAR_4[VAR_5] = 0;
  if (!FUNC_5 (VAR_4, "#!/", 3)) {

   char *VAR_6 = FUNC_3 (VAR_4, '\n');
   if (VAR_6) {
    *VAR_6 = 0;
   }
   VAR_6 = FUNC_3 (VAR_4, ' ');
   if (VAR_6) {
    *VAR_6 = 0;
   }
   return FUNC_4 (VAR_4 + 2);
  }
  FUNC_0 (VAR_3);
 }
 return ((void*)0);
}
