
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_redirect_info {struct bpf_map* map_to_flush; } ;
struct bpf_map {int map_type; } ;






 int FUNC_0 (struct bpf_map*) ;
 int FUNC_1 (struct bpf_map*) ;
 int FUNC_2 (struct bpf_map*) ;
 int VAR_0 ;
 struct bpf_redirect_info* FUNC_3 (int *) ;

void FUNC_4(void)
{
 struct bpf_redirect_info *VAR_1 = FUNC_3(&VAR_0);
 struct bpf_map *VAR_2 = VAR_1->map_to_flush;

 VAR_1->map_to_flush = ((void*)0);
 if (VAR_2) {
  switch (VAR_2->map_type) {
  case 130:
  case 129:
   FUNC_1(VAR_2);
   break;
  case 131:
   FUNC_0(VAR_2);
   break;
  case 128:
   FUNC_2(VAR_2);
   break;
  default:
   break;
  }
 }
}
