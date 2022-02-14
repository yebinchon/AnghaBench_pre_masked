
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;


 int FUNC_0 (struct bpf_object*,char const*) ;
 int FUNC_1 (struct bpf_object*,char const*) ;
 int FUNC_2 (struct bpf_object*,char const*) ;

int FUNC_3(struct bpf_object *VAR_0, const char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_0, VAR_1);
  return VAR_2;
 }

 return 0;
}
