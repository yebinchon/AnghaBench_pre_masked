
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;

int FUNC_4(struct bpf_map *VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_2 == ((void*)0)) {
  FUNC_2("invalid map pointer\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 != 0)
  return -VAR_1;
 FUNC_1("unpinned map '%s'\n", VAR_3);

 return 0;
}
