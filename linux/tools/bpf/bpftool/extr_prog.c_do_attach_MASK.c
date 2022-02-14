
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char**,int*,int*,int*) ;

__attribute__((used)) static int FUNC_4(int VAR_3, char **VAR_4)
{
 enum bpf_attach_type VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_3, VAR_4,
           &VAR_7, &VAR_5, &VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_7, VAR_8, VAR_5, 0);
 if (VAR_6) {
  FUNC_2("failed prog attach to map");
  return -VAR_0;
 }

 if (VAR_1)
  FUNC_1(VAR_2);
 return 0;
}
