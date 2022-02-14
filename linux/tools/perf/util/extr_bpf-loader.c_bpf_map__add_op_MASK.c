
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_priv {int ops_list; } ;
struct bpf_map_op {int list; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct bpf_map_priv*) ;
 int FUNC_2 (struct bpf_map_priv*) ;
 char* FUNC_3 (struct bpf_map*) ;
 struct bpf_map_priv* FUNC_4 (struct bpf_map*) ;
 scalar_t__ FUNC_5 (struct bpf_map*,struct bpf_map_priv*,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct bpf_map_priv*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,...) ;
 struct bpf_map_priv* FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct bpf_map *VAR_3, struct bpf_map_op *VAR_4)
{
 const char *VAR_5 = FUNC_3(VAR_3);
 struct bpf_map_priv *VAR_6 = FUNC_4(VAR_3);

 if (FUNC_1(VAR_6)) {
  FUNC_8("Failed to get private from map %s\n", VAR_5);
  return FUNC_2(VAR_6);
 }

 if (!VAR_6) {
  VAR_6 = FUNC_9(sizeof(*VAR_6));
  if (!VAR_6) {
   FUNC_8("Not enough memory to alloc map private\n");
   return -VAR_1;
  }
  FUNC_0(&VAR_6->ops_list);

  if (FUNC_5(VAR_3, VAR_6, VAR_2)) {
   FUNC_6(VAR_6);
   return -VAR_0;
  }
 }

 FUNC_7(&VAR_4->list, &VAR_6->ops_list);
 return 0;
}
