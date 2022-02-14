
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;
typedef scalar_t__ ut32 ;
struct zip_stat {int name; } ;
struct zip {int dummy; } ;


 scalar_t__ FUNC_0 (char const*) ;
 struct zip* FUNC_1 (char const*,scalar_t__,int,int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct zip*) ;
 scalar_t__ FUNC_4 (struct zip*) ;
 int FUNC_5 (struct zip*,scalar_t__,int ,struct zip_stat*) ;
 int FUNC_6 (struct zip_stat*) ;

char * FUNC_7(const char * VAR_0, const char *VAR_1, ut32 VAR_2, int VAR_3, int VAR_4) {
 char *VAR_5 = ((void*)0);
 ut64 VAR_6, VAR_7;
 ut32 VAR_8 = -1;
 struct zip_stat VAR_9;
 struct zip * VAR_10 = FUNC_1 (VAR_0, VAR_2, VAR_3, VAR_4);
 if (!VAR_1 || !VAR_10) {
  FUNC_3 (VAR_10);
  return VAR_5;
 }
 VAR_7 = FUNC_4 (VAR_10);
 VAR_8 = FUNC_0 (VAR_1);
 if ((VAR_8 == 0 && VAR_1[0] != '0') || (VAR_8 >= VAR_7)) {
  FUNC_3 (VAR_10);
  return VAR_5;
 }
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_6 (&VAR_9);
  FUNC_5 (VAR_10, VAR_6, 0, &VAR_9 );
  if (VAR_8 == VAR_6) {
   VAR_5 = FUNC_2 (VAR_9.name);
   break;
  }
 }
 FUNC_3 (VAR_10);
 return VAR_5;
}
