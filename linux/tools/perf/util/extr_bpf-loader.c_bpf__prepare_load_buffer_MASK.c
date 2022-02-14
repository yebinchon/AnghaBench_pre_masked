
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;


 int VAR_0 ;
 struct bpf_object* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bpf_object*) ;
 struct bpf_object* FUNC_2 (void*,size_t,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

struct bpf_object *
FUNC_5(void *VAR_3, size_t VAR_4, const char *VAR_5)
{
 struct bpf_object *VAR_6;

 if (!VAR_1) {
  FUNC_3(VAR_2);
  VAR_1 = 1;
 }

 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (FUNC_1(VAR_6)) {
  FUNC_4("bpf: failed to load buffer\n");
  return FUNC_0(-VAR_0);
 }

 return VAR_6;
}
