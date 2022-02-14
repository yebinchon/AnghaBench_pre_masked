
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int license; int path; } ;


 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct bpf_object *VAR_0, void *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_0->license, VAR_1, FUNC_1(VAR_2, sizeof(VAR_0->license) - 1));
 FUNC_2("license of %s is %s\n", VAR_0->path, VAR_0->license);
 return 0;
}
