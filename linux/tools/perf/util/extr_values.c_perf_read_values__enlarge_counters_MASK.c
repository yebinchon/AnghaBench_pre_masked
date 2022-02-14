
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u64 ;
struct perf_read_values {int counters_max; char** counterrawid; char** countername; int threads; char*** value; } ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*) ;
 char** FUNC_2 (char**,int) ;

__attribute__((used)) static int FUNC_3(struct perf_read_values *VAR_1)
{
 char **VAR_2;
 int VAR_3, VAR_4 = VAR_1->counters_max * 2;
 u64 *VAR_5 = FUNC_2(VAR_1->counterrawid, VAR_4 * sizeof(*VAR_1->counterrawid));

 if (!VAR_5) {
  FUNC_1("failed to enlarge read_values rawid array");
  goto out_enomem;
 }

 VAR_2 = FUNC_2(VAR_1->countername, VAR_4 * sizeof(*VAR_1->countername));
 if (!VAR_2) {
  FUNC_1("failed to enlarge read_values rawid array");
  goto out_free_rawid;
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->threads; VAR_3++) {
  u64 *VAR_6 = FUNC_2(VAR_1->value[VAR_3], VAR_4 * sizeof(**VAR_1->value));
  int VAR_7;

  if (!VAR_6) {
   FUNC_1("failed to enlarge read_values ->values array");
   goto out_free_name;
  }

  for (VAR_7 = VAR_1->counters_max; VAR_7 < VAR_4; VAR_7++)
   VAR_6[VAR_7] = 0;

  VAR_1->value[VAR_3] = VAR_6;
 }

 VAR_1->counters_max = VAR_4;
 VAR_1->counterrawid = VAR_5;
 VAR_1->countername = VAR_2;

 return 0;
out_free_name:
 FUNC_0(VAR_2);
out_free_rawid:
 FUNC_0(VAR_5);
out_enomem:
 return -VAR_0;
}
