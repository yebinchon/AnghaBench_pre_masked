
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* flag; char* desc; } ;
struct TYPE_5__ {char* name; } ;
struct TYPE_4__ {char* name; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,...) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_3) {
 int VAR_4;
 char VAR_5[128] = "";
 for( VAR_4 = 0; VAR_2[VAR_4]; ++VAR_4 ) {
  if (VAR_4) FUNC_2 (VAR_5, ",");
  FUNC_2 (VAR_5, VAR_2[VAR_4]->name);
 }
 FUNC_1("Usage: %s [-othesv] [file] [...]\n", VAR_3);
 FUNC_1( "  -o [file]     set output file (stdout)\n"
  "  -t [type]     define processor type (%s)\n"
  "  -e [str]      evaluate this string with the selected proc\n"
  "  -s [str]      show this string before anything\n"
  "  -l            list all built-in preprocessors\n"
  "  -L            list keywords registered by the processor\n"
  "  -n            do not read from stdin\n"
  "  -v            show version information\n", VAR_5);
 if (VAR_1) {
  FUNC_1 ("%s specific flags:\n", VAR_1->name);
  for(VAR_4 = 0; VAR_0[VAR_4].flag; VAR_4++) {
   FUNC_1 (" %s   %s\n", VAR_0[VAR_4].flag, VAR_0[VAR_4].desc);
  }
 }
 FUNC_0(0);
}
