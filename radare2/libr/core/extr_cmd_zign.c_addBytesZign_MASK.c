
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char const ut8 ;
struct TYPE_3__ {int anal; } ;
typedef TYPE_1__ RCore ;




 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char const*,char const*,int) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,char const*,char const*) ;
 int FUNC_7 (int ,char const*,int,char const*,int ) ;
 int FUNC_8 (int ,char const*,int,char const*,char const*) ;
 char* FUNC_9 (char const*,int ) ;
 scalar_t__ FUNC_10 (char const*,char) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static bool FUNC_12(RCore *VAR_0, const char *VAR_1, int VAR_2, const char *VAR_3, int VAR_4) {
 const char *VAR_5 = ((void*)0);
 ut8 *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9 = 0, VAR_10 = 0;
 bool VAR_11 = 1;

 if (VAR_4 != 1) {
  FUNC_1 ("error: invalid syntax\n");
  VAR_11 = 0;
  goto out;
 }

 VAR_5 = FUNC_9 (VAR_3, 0);
 if ((VAR_8 = (ut8*) FUNC_10 (VAR_5, ':'))) {
  VAR_10 = VAR_8 - (ut8*) VAR_5;
  if (!VAR_10 || (VAR_10 & 1) || FUNC_11 ((char*) ++VAR_8) != VAR_10) {
   FUNC_1 ("error: cannot parse hexpairs\n");
   VAR_11 = 0;
   goto out;
  }
  VAR_7 = FUNC_0 (1, VAR_10 + 1);
  VAR_6 = FUNC_0 (1, VAR_10 + 1);
  FUNC_4 (VAR_7, VAR_5, VAR_10);
  FUNC_4 (VAR_6, VAR_8, VAR_10);
  VAR_9 = FUNC_5 ((char*) VAR_7, VAR_7);
  if (VAR_9 != VAR_10 / 2 || FUNC_5 ((char*) VAR_6, VAR_6) != VAR_9) {
   FUNC_1 ("error: cannot parse hexpairs\n");
   VAR_11 = 0;
   goto out;
  }
 } else {
  VAR_10 = FUNC_11 (VAR_5) + 4;
  VAR_7 = FUNC_3 (VAR_10);
  VAR_6 = FUNC_3 (VAR_10);

  VAR_9 = FUNC_6 (VAR_5, VAR_7, VAR_6);
  if (VAR_9 <= 0) {
   FUNC_1 ("error: cannot parse hexpairs\n");
   VAR_11 = 0;
   goto out;
  }
 }

 switch (VAR_2) {
 case 128:
  VAR_11 = FUNC_8 (VAR_0->anal, VAR_1, VAR_9, VAR_7, VAR_6);
  break;
 case 129:
  VAR_11 = FUNC_7 (VAR_0->anal, VAR_1, VAR_9, VAR_7, 0);
  break;
 }

out:
 FUNC_2 (VAR_7);
 FUNC_2 (VAR_6);

 return VAR_11;
}
