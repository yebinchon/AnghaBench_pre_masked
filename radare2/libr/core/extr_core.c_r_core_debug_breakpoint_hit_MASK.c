
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char const* data; } ;
struct TYPE_6__ {int config; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RBreakpointItem ;


 char* FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,char const*) ;

__attribute__((used)) static void FUNC_5(RCore *VAR_0, RBreakpointItem *VAR_1) {
 const char *VAR_2 = FUNC_0 (VAR_0->config, "cmd.bp");
 const bool VAR_3 = (VAR_2 && *VAR_2);
 const bool VAR_4 = (VAR_1->data && VAR_1->data[0]);
 const bool VAR_5 = (VAR_3 || VAR_4);
 if (VAR_5) {
  FUNC_3 ();
 }
 if (VAR_3) {
  FUNC_4 (VAR_0, VAR_2);
 }
 if (VAR_4) {
  FUNC_4 (VAR_0, VAR_1->data);
 }
 if (VAR_5) {
  FUNC_1 ();
  FUNC_2 ();
 }
}
