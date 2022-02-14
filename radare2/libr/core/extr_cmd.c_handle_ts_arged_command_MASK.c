
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_3__ {int rcmd; } ;
typedef int TSNode ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (char*,int,char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(RCore *VAR_0, const char *VAR_1, TSNode VAR_2) {
 TSNode VAR_3 = FUNC_6 (VAR_2, 0);
 ut32 VAR_4 = FUNC_7 (VAR_3);
 ut32 VAR_5 = FUNC_5 (VAR_3);
 FUNC_0 ("command: '%.*s'\n", VAR_5 - VAR_4, VAR_1 + VAR_4);

 ut32 VAR_6 = FUNC_4 (VAR_2);
 ut32 VAR_7 = VAR_5;
 int VAR_8;
 for (VAR_8 = 1; VAR_8 < VAR_6; ++VAR_8) {
  TSNode VAR_9 = FUNC_6 (VAR_2, VAR_8);
  ut32 VAR_10 = FUNC_7 (VAR_9);
  ut32 VAR_11 = FUNC_5 (VAR_9);
  if (VAR_7 < VAR_11) {
   VAR_7 = VAR_11;
  }
  FUNC_0 ("arg: '%.*s'\n", VAR_11 - VAR_10, VAR_1 + VAR_10);
 }
 char *VAR_12 = FUNC_3 ("%.*s", VAR_7 - VAR_4, VAR_1 + VAR_4);
 bool VAR_13 = FUNC_2 (VAR_0->rcmd, VAR_12) != -1;
 FUNC_1 (VAR_12);
 return VAR_13;
}
