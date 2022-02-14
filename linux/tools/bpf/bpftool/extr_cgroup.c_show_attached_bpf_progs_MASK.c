
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;
typedef int buf ;
typedef scalar_t__ __u32 ;


 scalar_t__ FUNC_0 (scalar_t__*) ;


 int * VAR_0 ;
 int FUNC_1 (int,int,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int ,char const*,int) ;
 int FUNC_3 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(int VAR_2, enum bpf_attach_type VAR_3,
       int VAR_4)
{
 const char *VAR_5;
 __u32 VAR_6[1024] = {0};
 __u32 VAR_7, VAR_8;
 __u32 VAR_9;
 char VAR_10[32];
 int VAR_11;

 VAR_7 = FUNC_0(VAR_6);
 VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_1, &VAR_9,
        VAR_6, &VAR_7);
 if (VAR_11)
  return VAR_11;

 if (VAR_7 == 0)
  return 0;

 switch (VAR_9) {
 case 129:
  VAR_5 = "multi";
  break;
 case 128:
  VAR_5 = "override";
  break;
 case 0:
  VAR_5 = "";
  break;
 default:
  FUNC_3(VAR_10, sizeof(VAR_10), "unknown(%x)", VAR_9);
  VAR_5 = VAR_10;
 }

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_2(VAR_6[VAR_8], VAR_0[VAR_3],
         VAR_5, VAR_4);

 return 0;
}
