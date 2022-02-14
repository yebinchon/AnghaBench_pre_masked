
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zxdg_output_v1 {int dummy; } ;
struct swaynag_output {TYPE_2__* swaynag; int name; } ;
struct TYPE_4__ {int querying_outputs; struct swaynag_output* output; TYPE_1__* type; } ;
struct TYPE_3__ {char* output; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int FUNC_3 (struct zxdg_output_v1*) ;

__attribute__((used)) static void FUNC_4(void *VAR_1,
  struct zxdg_output_v1 *VAR_2, const char *VAR_3) {
 struct swaynag_output *VAR_4 = VAR_1;
 char *VAR_5 = VAR_4->swaynag->type->output;
 FUNC_2(VAR_0, "Checking against output %s for %s", VAR_3, VAR_5);
 if (!VAR_4->swaynag->output && VAR_5 && VAR_3
   && FUNC_0(VAR_5, VAR_3) == 0) {
  FUNC_2(VAR_0, "Using output %s", VAR_3);
  VAR_4->swaynag->output = VAR_4;
 }
 VAR_4->name = FUNC_1(VAR_3);
 FUNC_3(VAR_2);
 VAR_4->swaynag->querying_outputs--;
}
