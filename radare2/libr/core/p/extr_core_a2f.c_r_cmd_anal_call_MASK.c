
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const char *VAR_1) {
 RCore *VAR_2 = (RCore *) VAR_0;
 if (!FUNC_2 (VAR_1, "a2", 2)) {
  switch (VAR_1[2]) {
  case 'f':
   if (!FUNC_0 (VAR_2, VAR_2->offset)) {
    FUNC_1 ("a2f: Failed to analyze function.\n");
   }
   break;
  default:
   FUNC_1 ("Usage: a2f\n");
   FUNC_1 ("a2f is the new (experimental) analysis engine\n");
   FUNC_1 ("Use with caution.\n");
   break;
  }
  return 1;
 }
 return 0;
}
