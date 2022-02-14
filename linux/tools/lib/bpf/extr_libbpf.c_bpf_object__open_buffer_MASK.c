
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp_name ;
struct bpf_object {int dummy; } ;


 struct bpf_object* FUNC_0 (char const*,void*,size_t,int,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,int,char*,unsigned long,unsigned long) ;

struct bpf_object *FUNC_3(void *VAR_0,
        size_t VAR_1,
        const char *VAR_2)
{
 char VAR_3[64];


 if (!VAR_0 || VAR_1 <= 0)
  return ((void*)0);

 if (!VAR_2) {
  FUNC_2(VAR_3, sizeof(VAR_3), "%lx-%lx",
    (unsigned long)VAR_0,
    (unsigned long)VAR_1);
  VAR_2 = VAR_3;
 }
 FUNC_1("loading object '%s' from buffer\n", VAR_2);

 return FUNC_0(VAR_2, VAR_0, VAR_1, 1, 1);
}
