
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct xt_bpf_info_v1* matchinfo; } ;
struct xt_bpf_info_v1 {scalar_t__ mode; int filter; int path; int fd; int bpf_program_num_elem; int bpf_program; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(const struct xt_mtchk_param *VAR_4)
{
 struct xt_bpf_info_v1 *VAR_5 = VAR_4->matchinfo;

 if (VAR_5->mode == VAR_1)
  return FUNC_0(VAR_5->bpf_program,
            VAR_5->bpf_program_num_elem,
            &VAR_5->filter);
 else if (VAR_5->mode == VAR_2)
  return FUNC_1(VAR_5->fd, &VAR_5->filter);
 else if (VAR_5->mode == VAR_3)
  return FUNC_2(VAR_5->path, &VAR_5->filter);
 else
  return -VAR_0;
}
