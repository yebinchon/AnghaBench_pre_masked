
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int*,char***) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*,char***) ;

__attribute__((used)) static int FUNC_6(int VAR_3, char **VAR_4, int *VAR_5,
        enum bpf_attach_type *VAR_6,
        int *VAR_7)
{
 if (!FUNC_1(3))
  return -VAR_1;

 *VAR_5 = FUNC_5(&VAR_3, &VAR_4);
 if (*VAR_5 < 0)
  return *VAR_5;

 *VAR_6 = FUNC_4(*VAR_4);
 if (*VAR_6 == VAR_2) {
  FUNC_3("invalid attach/detach type");
  return -VAR_1;
 }

 if (*VAR_6 == VAR_0) {
  *VAR_7 = -1;
  return 0;
 }

 FUNC_0();
 if (!FUNC_1(2))
  return -VAR_1;

 *VAR_7 = FUNC_2(&VAR_3, &VAR_4);
 if (*VAR_7 < 0)
  return *VAR_7;

 return 0;
}
