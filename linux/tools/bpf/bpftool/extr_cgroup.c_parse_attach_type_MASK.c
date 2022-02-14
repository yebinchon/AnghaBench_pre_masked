
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_0 (char const*,scalar_t__) ;

__attribute__((used)) static enum bpf_attach_type FUNC_1(const char *VAR_2)
{
 enum bpf_attach_type VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3] &&
      FUNC_0(VAR_2, VAR_1[VAR_3]))
   return VAR_3;
 }

 return VAR_0;
}
