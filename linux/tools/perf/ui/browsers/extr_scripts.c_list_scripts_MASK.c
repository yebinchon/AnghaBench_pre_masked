
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct script_config {char const** names; char** paths; char const* perf; int index; int extra_format; } ;
struct TYPE_2__ {int attr; } ;
struct evsel {TYPE_1__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,struct script_config*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char**,char**,int,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int ,struct script_config*) ;
 char* FUNC_6 (char*,int) ;
 int VAR_4 ;
 int FUNC_7 (char*,char*,char const*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int,char* const*) ;
 int FUNC_10 (char*,char*,char*,char*,int ) ;
 int FUNC_11 (char**) ;

__attribute__((used)) static int FUNC_12(char *VAR_5, bool *VAR_6,
   struct evsel *VAR_7)
{
 char *VAR_8, *VAR_9[VAR_2], *VAR_10[VAR_2];
 int VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;
 int VAR_15, VAR_16;
 char VAR_17[256];
 const char *VAR_18 = FUNC_6(VAR_17, sizeof VAR_17);
 struct script_config VAR_19 = {
  .names = (const char **)VAR_10,
  .paths = VAR_9,
  .perf = VAR_18
 };

 VAR_5[0] = 0;


 VAR_8 = FUNC_4(VAR_2 * (VAR_3 + VAR_1));
 if (!VAR_8)
  return -1;

 if (VAR_7)
  FUNC_1(VAR_19.extra_format, &VAR_7->core.attr);
 FUNC_0("Show individual samples", "", &VAR_19);
 FUNC_0("Show individual samples with assembler", "-F +insn --xed",
     &VAR_19);
 FUNC_0("Show individual samples with source", "-F +srcline,+srccode",
     &VAR_19);
 FUNC_5(VAR_4, &VAR_19);
 VAR_16 = VAR_19.index;
 FUNC_0("Show samples with custom perf script arguments", "", &VAR_19);
 VAR_11 = VAR_19.index;
 VAR_15 = VAR_11;

 for (; VAR_11 < VAR_2; VAR_11++) {
  VAR_10[VAR_11] = VAR_8 + (VAR_11 - VAR_15) * (VAR_3 + VAR_1);
  VAR_9[VAR_11] = VAR_10[VAR_11] + VAR_3;
 }

 VAR_12 = FUNC_2(VAR_10 + VAR_15, VAR_9 + VAR_15, VAR_2 - VAR_15,
   VAR_1);
 if (VAR_12 < 0)
  VAR_12 = 0;
 VAR_13 = FUNC_9(VAR_12 + VAR_15, (char * const *)VAR_10);
 if (VAR_13 < 0) {
  VAR_14 = -1;
  goto out;
 }
 if (VAR_13 == VAR_16) {
  char VAR_20[50];
  int VAR_21 = FUNC_10("perf script command",
    "Enter perf script command line (without perf script prefix)",
    VAR_20, "", 0);
  if (VAR_21 != VAR_0) {
   VAR_14 = -1;
   goto out;
  }
  FUNC_7(VAR_5, "%s script %s", VAR_18, VAR_20);
 } else if (VAR_13 < VAR_12 + VAR_15) {
  FUNC_8(VAR_5, VAR_9[VAR_13]);
 }
 *VAR_6 = VAR_13 >= VAR_15;

out:
 FUNC_3(VAR_8);
 for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11++)
  FUNC_11(&VAR_9[VAR_11]);
 return VAR_14;
}
