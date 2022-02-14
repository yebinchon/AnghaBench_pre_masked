
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int demanglercmd; int cur; } ;
struct TYPE_5__ {TYPE_2__* bin; } ;
typedef TYPE_1__ RCore ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,char const*,int ) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_2__*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (int *,char const*) ;
 char* FUNC_6 (TYPE_2__*,char*,char const*) ;
 char* FUNC_7 (char const*,int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static bool FUNC_10(RCore *VAR_0, const char *VAR_1, const char *VAR_2) {
 char *VAR_3 = ((void*)0);
 int VAR_4 = FUNC_8 (VAR_1);
 switch (VAR_4) {
 case 133: VAR_3 = FUNC_1 (VAR_0->bin->cur, VAR_2, 0); break;
 case 131: VAR_3 = FUNC_2 (VAR_2); break;
 case 129: VAR_3 = FUNC_5 (((void*)0), VAR_2); break;
 case 128: VAR_3 = FUNC_7 (VAR_2, VAR_0->bin->demanglercmd); break;
 case 132: VAR_3 = FUNC_6 (VAR_0->bin, "dlang", VAR_2); break;
 case 130: VAR_3 = FUNC_4 (VAR_2); break;
 default:
  FUNC_3 (VAR_0->bin);
  return 1;
 }
 if (VAR_3) {
  if (*VAR_3) {
   FUNC_9 ("%s\n", VAR_3);
  }
  FUNC_0 (VAR_3);
  return 0;
 }
 return 1;
}
