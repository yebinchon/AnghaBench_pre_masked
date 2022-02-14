
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aliasinfo {char* name; char* ref; } ;


 int VAR_0 ;
 struct aliasinfo* VAR_1 ;
 int FUNC_0 (struct aliasinfo*,struct aliasinfo*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct aliasinfo *VAR_4,*VAR_5;

 for (VAR_4 = VAR_1; VAR_4 < VAR_1 + VAR_0; VAR_4++) {
  for (VAR_5 = VAR_4 + 1; VAR_5 < VAR_1 + VAR_0; VAR_5++) {
   char *VAR_6, *VAR_7;

   VAR_6 = VAR_4->name;
   VAR_7 = VAR_5->name;
   if (VAR_2 && !VAR_3) {
    VAR_6 = VAR_4->ref;
    VAR_7 = VAR_5->ref;
   }
   if (FUNC_1(VAR_6, VAR_7) > 0) {
    struct aliasinfo VAR_8;

    FUNC_0(&VAR_8, VAR_4, sizeof(struct aliasinfo));
    FUNC_0(VAR_4, VAR_5, sizeof(struct aliasinfo));
    FUNC_0(VAR_5, &VAR_8, sizeof(struct aliasinfo));
   }
  }
 }
}
