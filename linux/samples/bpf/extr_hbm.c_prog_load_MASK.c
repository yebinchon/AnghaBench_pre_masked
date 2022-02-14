
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_load_attr {char* file; int expected_attach_type; int prog_type; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 char* VAR_3 ;
 int FUNC_1 (struct bpf_map*) ;
 struct bpf_map* FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct bpf_prog_load_attr*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*,char*,...) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(char *VAR_7)
{
 struct bpf_prog_load_attr VAR_8 = {
  .prog_type = VAR_1,
  .file = VAR_7,
  .expected_attach_type = VAR_0,
 };
 int VAR_9;
 struct bpf_map *VAR_10;

 int VAR_11 = 0;

 if (FUNC_0(VAR_7, VAR_2) < 0) {
  FUNC_4("Error accessing file %s: %s\n", VAR_7, FUNC_5(VAR_5));
  return 1;
 }
 if (FUNC_3(&VAR_8, &VAR_6, &VAR_4))
  VAR_11 = 1;
 if (!VAR_11) {
  VAR_10 = FUNC_2(VAR_6, "queue_stats");
  VAR_9 = FUNC_1(VAR_10);
  if (VAR_9 < 0) {
   FUNC_4("Map not found: %s\n", FUNC_5(VAR_9));
   VAR_11 = 1;
  }
 }

 if (VAR_11) {
  FUNC_4("ERROR: load_bpf_file failed for: %s\n", VAR_7);
  FUNC_4("  Output from verifier:\n%s\n------\n", VAR_3);
  VAR_11 = -1;
 } else {
  VAR_11 = VAR_9;
 }

 return VAR_11;
}
