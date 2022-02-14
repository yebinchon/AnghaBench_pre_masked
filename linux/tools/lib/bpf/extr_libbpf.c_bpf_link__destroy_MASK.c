
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_link {int (* destroy ) (struct bpf_link*) ;} ;


 int FUNC_0 (struct bpf_link*) ;
 int FUNC_1 (struct bpf_link*) ;

int FUNC_2(struct bpf_link *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return 0;

 VAR_1 = VAR_0->destroy(VAR_0);
 FUNC_0(VAR_0);

 return VAR_1;
}
