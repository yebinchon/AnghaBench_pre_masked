
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int insn_cnt; int log_level; size_t log_size; scalar_t__ func_info_rec_size; scalar_t__ line_info_rec_size; void* log_buf; void* line_info; scalar_t__ line_info_cnt; void* func_info; scalar_t__ func_info_cnt; int prog_flags; int prog_name; int prog_btf_fd; int prog_ifindex; int kern_version; void* license; void* insns; int expected_attach_type; int prog_type; } ;
struct bpf_load_program_attr {int log_level; char* insns; char* license; scalar_t__ func_info_rec_size; char* func_info; scalar_t__ line_info_rec_size; char* line_info; scalar_t__ line_info_cnt; scalar_t__ func_info_cnt; int prog_flags; int name; int prog_btf_fd; int prog_ifindex; int kern_version; scalar_t__ insns_cnt; int expected_attach_type; int prog_type; } ;
typedef int attr ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (union bpf_attr*,int ,int) ;
 int FUNC_4 (int ,scalar_t__) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (union bpf_attr*,int) ;

int FUNC_8(const struct bpf_load_program_attr *VAR_4,
      char *VAR_5, size_t VAR_6)
{
 void *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 union bpf_attr VAR_9;
 __u32 VAR_10;
 int VAR_11;

 if (!VAR_4 || !VAR_5 != !VAR_6)
  return -VAR_2;

 VAR_10 = VAR_4->log_level;
 if (VAR_10 > (4 | 2 | 1) || (VAR_10 && !VAR_5))
  return -VAR_2;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.prog_type = VAR_4->prog_type;
 VAR_9.expected_attach_type = VAR_4->expected_attach_type;
 VAR_9.insn_cnt = (__u32)VAR_4->insns_cnt;
 VAR_9.insns = FUNC_5(VAR_4->insns);
 VAR_9.license = FUNC_5(VAR_4->license);

 VAR_9.log_level = VAR_10;
 if (VAR_10) {
  VAR_9.log_buf = FUNC_5(VAR_5);
  VAR_9.log_size = VAR_6;
 } else {
  VAR_9.log_buf = FUNC_5(((void*)0));
  VAR_9.log_size = 0;
 }

 VAR_9.kern_version = VAR_4->kern_version;
 VAR_9.prog_ifindex = VAR_4->prog_ifindex;
 VAR_9.prog_btf_fd = VAR_4->prog_btf_fd;
 VAR_9.func_info_rec_size = VAR_4->func_info_rec_size;
 VAR_9.func_info_cnt = VAR_4->func_info_cnt;
 VAR_9.func_info = FUNC_5(VAR_4->func_info);
 VAR_9.line_info_rec_size = VAR_4->line_info_rec_size;
 VAR_9.line_info_cnt = VAR_4->line_info_cnt;
 VAR_9.line_info = FUNC_5(VAR_4->line_info);
 if (VAR_4->name)
  FUNC_2(VAR_9.prog_name, VAR_4->name,
         FUNC_4(FUNC_6(VAR_4->name), VAR_0 - 1));
 VAR_9.prog_flags = VAR_4->prog_flags;

 VAR_11 = FUNC_7(&VAR_9, sizeof(VAR_9));
 if (VAR_11 >= 0)
  return VAR_11;





 while (VAR_3 == VAR_1 && (!VAR_7 || !VAR_8)) {
  if (!VAR_7 && VAR_9.func_info_cnt &&
      VAR_9.func_info_rec_size < VAR_4->func_info_rec_size) {

   VAR_7 = FUNC_0(VAR_4->func_info,
       VAR_4->func_info_cnt,
       VAR_4->func_info_rec_size,
       VAR_9.func_info_rec_size);
   if (!VAR_7)
    goto done;

   VAR_9.func_info = FUNC_5(VAR_7);
   VAR_9.func_info_rec_size = VAR_4->func_info_rec_size;
  } else if (!VAR_8 && VAR_9.line_info_cnt &&
      VAR_9.line_info_rec_size <
      VAR_4->line_info_rec_size) {
   VAR_8 = FUNC_0(VAR_4->line_info,
       VAR_4->line_info_cnt,
       VAR_4->line_info_rec_size,
       VAR_9.line_info_rec_size);
   if (!VAR_8)
    goto done;

   VAR_9.line_info = FUNC_5(VAR_8);
   VAR_9.line_info_rec_size = VAR_4->line_info_rec_size;
  } else {
   break;
  }

  VAR_11 = FUNC_7(&VAR_9, sizeof(VAR_9));

  if (VAR_11 >= 0)
   goto done;
 }

 if (VAR_10 || !VAR_5)
  goto done;


 VAR_9.log_buf = FUNC_5(VAR_5);
 VAR_9.log_size = VAR_6;
 VAR_9.log_level = 1;
 VAR_5[0] = 0;
 VAR_11 = FUNC_7(&VAR_9, sizeof(VAR_9));
done:
 FUNC_1(VAR_7);
 FUNC_1(VAR_8);
 return VAR_11;
}
