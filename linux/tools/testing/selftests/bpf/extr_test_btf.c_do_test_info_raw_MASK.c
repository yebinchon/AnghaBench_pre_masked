
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union bpf_attr {int prog_btf_fd; int log_level; unsigned int line_info_rec_size; unsigned int line_info_cnt; void* line_info; int log_size; void* log_buf; void* func_info; int func_info_cnt; int func_info_rec_size; void* license; int insn_cnt; void* insns; int prog_type; } ;
struct prog_info_raw_test {char* descr; char const* str_sec; void* insns; void* func_info; unsigned int line_info_rec_size; int expected_prog_load_failure; scalar_t__ dead_code_cnt; int err_str; int func_info_cnt; int func_info_rec_size; int prog_type; int str_sec_size; int line_info; int raw_types; } ;
typedef int attr ;
struct TYPE_2__ {scalar_t__ always_log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,int,...) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (void*,unsigned int,char*,int ,scalar_t__) ;
 char* VAR_4 ;
 void* FUNC_3 (int *,int ,char const*,int ,unsigned int*,char const**) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (void*) ;
 int VAR_6 ;
 struct prog_info_raw_test* VAR_7 ;
 void* FUNC_7 (int ,char const*,unsigned int,int ,unsigned int*) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (void*) ;
 int VAR_8 ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ,int ,union bpf_attr*,int) ;
 int FUNC_12 (struct prog_info_raw_test const*,int) ;
 int FUNC_13 (struct prog_info_raw_test const*,void*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_14(unsigned int VAR_9)
{
 const struct prog_info_raw_test *VAR_10 = &VAR_7[VAR_9 - 1];
 unsigned int VAR_11, VAR_12, VAR_13;
 int VAR_14 = -1, VAR_15 = -1, VAR_16 = 0;
 void *VAR_17, *VAR_18 = ((void*)0);
 const char *VAR_19;
 union bpf_attr VAR_20 = {};

 FUNC_5(VAR_8, "BTF prog info raw test[%u] (%s): ", VAR_9, VAR_10->descr);
 VAR_17 = FUNC_3(&VAR_6, VAR_10->raw_types,
     VAR_10->str_sec, VAR_10->str_sec_size,
     &VAR_11, &VAR_19);

 if (!VAR_17)
  return -1;

 *VAR_4 = '\0';
 VAR_14 = FUNC_2(VAR_17, VAR_11,
         VAR_4, VAR_1,
         VAR_3.always_log);
 FUNC_6(VAR_17);

 if (FUNC_0(VAR_14 == -1, "invalid btf_fd errno:%d", VAR_5)) {
  VAR_16 = -1;
  goto done;
 }

 if (*VAR_4 && VAR_3.always_log)
  FUNC_5(VAR_8, "\n%s", VAR_4);
 *VAR_4 = '\0';

 VAR_12 = VAR_19 - VAR_10->str_sec;
 VAR_18 = FUNC_7(VAR_10->line_info,
           VAR_10->str_sec, VAR_12,
           VAR_10->str_sec_size, &VAR_13);
 if (FUNC_1(VAR_18)) {
  FUNC_5(VAR_8, "error in creating raw bpf_line_info");
  VAR_16 = -1;
  goto done;
 }

 VAR_20.prog_type = VAR_10->prog_type;
 VAR_20.insns = FUNC_9(VAR_10->insns);
 VAR_20.insn_cnt = FUNC_8(VAR_10->insns);
 VAR_20.license = FUNC_9("GPL");
 VAR_20.prog_btf_fd = VAR_14;
 VAR_20.func_info_rec_size = VAR_10->func_info_rec_size;
 VAR_20.func_info_cnt = VAR_10->func_info_cnt;
 VAR_20.func_info = FUNC_9(VAR_10->func_info);
 VAR_20.log_buf = FUNC_9(VAR_4);
 VAR_20.log_size = VAR_1;
 VAR_20.log_level = 1;
 if (VAR_13) {
  VAR_20.line_info_rec_size = VAR_10->line_info_rec_size;
  VAR_20.line_info = FUNC_9(VAR_18);
  VAR_20.line_info_cnt = VAR_13 / VAR_20.line_info_rec_size;
 }

 VAR_15 = FUNC_11(VAR_2, VAR_0, &VAR_20, sizeof(VAR_20));
 VAR_16 = ((VAR_15 == -1) != VAR_10->expected_prog_load_failure);
 if (FUNC_0(VAR_16, "prog_fd:%d expected_prog_load_failure:%u errno:%d",
    VAR_15, VAR_10->expected_prog_load_failure, VAR_5) ||
     FUNC_0(VAR_10->err_str && !FUNC_10(VAR_4, VAR_10->err_str),
    "expected err_str:%s", VAR_10->err_str)) {
  VAR_16 = -1;
  goto done;
 }

 if (VAR_15 == -1)
  goto done;

 VAR_16 = FUNC_12(VAR_10, VAR_15);
 if (VAR_16)
  goto done;

 VAR_16 = FUNC_13(VAR_10, VAR_18,
        VAR_20.line_info_cnt - VAR_10->dead_code_cnt,
        VAR_15);
 if (VAR_16)
  goto done;

done:
 if (!VAR_16)
  FUNC_5(VAR_8, "OK");

 if (*VAR_4 && (VAR_16 || VAR_3.always_log))
  FUNC_5(VAR_8, "\n%s", VAR_4);

 if (VAR_14 != -1)
  FUNC_4(VAR_14);
 if (VAR_15 != -1)
  FUNC_4(VAR_15);

 if (!FUNC_1(VAR_18))
  FUNC_6(VAR_18);

 return VAR_16;
}
