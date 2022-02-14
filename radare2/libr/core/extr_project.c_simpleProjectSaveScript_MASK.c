
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* highlight; int fdout; TYPE_1__* context; } ;
struct TYPE_7__ {int anal; int config; } ;
struct TYPE_6__ {int is_interactive; } ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 TYPE_5__* FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,char*,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (char const*,int,int) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (int,char*) ;
 char* FUNC_11 (char*) ;

__attribute__((used)) static bool FUNC_12(RCore *VAR_10, const char *VAR_11, int VAR_12) {
 char *VAR_13, *VAR_14, *VAR_15 = ((void*)0);
 int VAR_16, VAR_17;

 if (!VAR_11 || * VAR_11 == '\0') {
  return 0;
 }

 VAR_13 = FUNC_9 (VAR_11);
 VAR_16 = FUNC_8 (VAR_11, VAR_0 | VAR_2 | VAR_1 | VAR_3, 0644);
 if (VAR_16 == -1) {
  FUNC_1 (VAR_13);
  return 0;
 }

 VAR_14 = FUNC_5 ()->highlight;
 if (VAR_14) {
  VAR_15 = FUNC_11 (VAR_14);
  FUNC_4 (((void*)0));
 }

 VAR_17 = FUNC_5 ()->fdout;
 FUNC_5 ()->fdout = VAR_16;
 FUNC_5 ()->context->is_interactive = 0;

 FUNC_10 (VAR_16, "# r2 rdb project file\n");

 if (VAR_12 & VAR_4) {
  FUNC_10 (VAR_16, "# eval\n");
  FUNC_2 (VAR_10->config, ((void*)0), 1);
  FUNC_3 ();
 }

 if (VAR_12 & VAR_5) {
  FUNC_10 (VAR_16, "# functions\n");
  FUNC_6 (VAR_10, "afl*", 0);
  FUNC_3 ();
 }

 if (VAR_12 & VAR_6) {
  FUNC_10 (VAR_16, "# flags\n");
  FUNC_6 (VAR_10, "f.**", 0);
  FUNC_3 ();
 }
 if (VAR_12 & VAR_7) {
  FUNC_10 (VAR_16, "# meta\n");
  FUNC_7 (VAR_10->anal, VAR_9, 1);
  FUNC_3 ();
  FUNC_6 (VAR_10, "fV*", 0);
  FUNC_3 ();
 }
 if (VAR_12 & VAR_8) {
  FUNC_10 (VAR_16, "# xrefs\n");
  FUNC_6 (VAR_10, "ax*", 0);
  FUNC_3 ();
 }


 FUNC_5 ()->fdout = VAR_17;
 FUNC_5 ()->context->is_interactive = 1;

 if (VAR_15) {
  FUNC_4 (VAR_15);
  FUNC_1 (VAR_15);
 }

 FUNC_0 (VAR_16);
 FUNC_1 (VAR_13);

 return 1;
}
