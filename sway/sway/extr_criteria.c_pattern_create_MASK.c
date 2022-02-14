
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern {int regex; int match_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pattern* FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static bool FUNC_4(struct pattern **VAR_3, char *VAR_4) {
 *VAR_3 = FUNC_0(1, sizeof(struct pattern));
 if (!*VAR_3) {
  FUNC_3(VAR_2, "Failed to allocate pattern");
 }

 if (FUNC_2(VAR_4, "__focused__") == 0) {
  (*VAR_3)->match_type = VAR_0;
 } else {
  (*VAR_3)->match_type = VAR_1;
  if (!FUNC_1(&(*VAR_3)->regex, VAR_4)) {
   return 0;
  };
 }
 return 1;
}
