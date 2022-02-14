
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int dummy; } ;
struct bpf_object_open_attr {char* file; int prog_type; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bpf_map*) ;
 int FUNC_4 (struct bpf_map*,int ) ;
 struct bpf_map* FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct bpf_object_open_attr*) ;
 int FUNC_8 (struct bpf_program*) ;
 struct bpf_program* FUNC_9 (int *,int ) ;
 int FUNC_10 (struct bpf_program*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_11(void)
{
 struct bpf_program *VAR_8;
 struct bpf_map *VAR_9;
 int VAR_10;
 struct bpf_object_open_attr VAR_11 = {
  .file = "test_select_reuseport_kern.o",
  .prog_type = VAR_0,
 };

 VAR_3 = FUNC_7(&VAR_11);
 FUNC_0(FUNC_1(VAR_3), "open test_select_reuseport_kern.o",
       "obj:%p PTR_ERR(obj):%ld\n", VAR_3, FUNC_2(VAR_3));

 VAR_8 = FUNC_9(((void*)0), VAR_3);
 FUNC_0(!VAR_8, "get first bpf_program", "!prog\n");
 FUNC_10(VAR_8, VAR_11.prog_type);

 VAR_9 = FUNC_5(VAR_3, "outer_map");
 FUNC_0(!VAR_9, "find outer_map", "!map\n");
 VAR_10 = FUNC_4(VAR_9, VAR_4);
 FUNC_0(VAR_10, "reuse outer_map", "err:%d\n", VAR_10);

 VAR_10 = FUNC_6(VAR_3);
 FUNC_0(VAR_10, "load bpf_object", "err:%d\n", VAR_10);

 VAR_6 = FUNC_8(VAR_8);
 FUNC_0(VAR_6 == -1, "get prog fd",
       "select_by_skb_data_prog:%d\n", VAR_6);

 VAR_9 = FUNC_5(VAR_3, "result_map");
 FUNC_0(!VAR_9, "find result_map", "!map\n");
 VAR_5 = FUNC_3(VAR_9);
 FUNC_0(VAR_5 == -1, "get result_map fd",
       "result_map:%d\n", VAR_5);

 VAR_9 = FUNC_5(VAR_3, "tmp_index_ovr_map");
 FUNC_0(!VAR_9, "find tmp_index_ovr_map", "!map\n");
 VAR_7 = FUNC_3(VAR_9);
 FUNC_0(VAR_7 == -1, "get tmp_index_ovr_map fd",
       "tmp_index_ovr_map:%d\n", VAR_7);

 VAR_9 = FUNC_5(VAR_3, "linum_map");
 FUNC_0(!VAR_9, "find linum_map", "!map\n");
 VAR_2 = FUNC_3(VAR_9);
 FUNC_0(VAR_2 == -1, "get linum_map fd",
       "linum_map:%d\n", VAR_2);

 VAR_9 = FUNC_5(VAR_3, "data_check_map");
 FUNC_0(!VAR_9, "find data_check_map", "!map\n");
 VAR_1 = FUNC_3(VAR_9);
 FUNC_0(VAR_1 == -1, "get data_check_map fd",
       "data_check_map:%d\n", VAR_1);
}
