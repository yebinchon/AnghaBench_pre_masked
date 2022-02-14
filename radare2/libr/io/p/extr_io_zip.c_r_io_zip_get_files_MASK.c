
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;
typedef int ut32 ;
struct zip_stat {int name; } ;
struct zip {int dummy; } ;
typedef int RList ;


 int VAR_0 ;
 struct zip* FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct zip*) ;
 scalar_t__ FUNC_5 (struct zip*) ;
 int FUNC_6 (struct zip*,scalar_t__,int ,struct zip_stat*) ;
 int FUNC_7 (struct zip_stat*) ;

RList * FUNC_8(char *VAR_1, ut32 VAR_2, int VAR_3, int VAR_4) {
 struct zip *VAR_5 = FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4);
 ut64 VAR_6 = 0, VAR_7 = 0;
 RList *VAR_8 = ((void*)0);
 struct zip_stat VAR_9;
 char *VAR_10;
 if (VAR_5) {
  VAR_8 = FUNC_2 (VAR_0);
  if (!VAR_8) {
   FUNC_4 (VAR_5);
   return ((void*)0);
  }
  VAR_6 = FUNC_5 (VAR_5);
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   FUNC_7 (&VAR_9);
   FUNC_6 (VAR_5, VAR_7, 0, &VAR_9);
   if ((VAR_10 = FUNC_3 (VAR_9.name))) {
    FUNC_1 (VAR_8, VAR_10);
   }
  }
 }
 FUNC_4 (VAR_5);
 return VAR_8;
}
