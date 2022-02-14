
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_map_type { ____Placeholder_bpf_map_type } bpf_map_type ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_2(enum bpf_map_type VAR_1)
{
 if (!FUNC_0(VAR_1, 0)) {
  FUNC_1("SKIP (unsupported map type %d)\n", VAR_1);
  VAR_0++;
  return 1;
 }
 return 0;
}
