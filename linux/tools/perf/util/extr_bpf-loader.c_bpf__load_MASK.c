
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;
typedef int bf ;


 int FUNC_0 (struct bpf_object*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*,int,char*) ;

int FUNC_3(struct bpf_object *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  char VAR_2[128];
  FUNC_1(VAR_1, VAR_2, sizeof(VAR_2));
  FUNC_2("bpf: load objects failed: err=%d: (%s)\n", VAR_1, VAR_2);
  return VAR_1;
 }
 return 0;
}
