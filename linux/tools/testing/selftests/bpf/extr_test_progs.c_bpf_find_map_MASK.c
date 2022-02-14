
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;
struct bpf_map {int dummy; } ;


 int FUNC_0 (struct bpf_map*) ;
 struct bpf_map* FUNC_1 (struct bpf_object*,char const*) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int FUNC_3 () ;

int FUNC_4(const char *VAR_0, struct bpf_object *VAR_1, const char *VAR_2)
{
 struct bpf_map *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_2("%s:FAIL:map '%s' not found\n", VAR_0, VAR_2);
  FUNC_3();
  return -1;
 }
 return FUNC_0(VAR_3);
}
