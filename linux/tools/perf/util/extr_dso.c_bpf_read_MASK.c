
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct TYPE_6__ {int status; } ;
struct TYPE_5__ {int id; int env; } ;
struct dso {TYPE_2__ data; TYPE_1__ bpf_prog; } ;
struct bpf_prog_info_node {TYPE_4__* info_linear; } ;
typedef int ssize_t ;
struct TYPE_7__ {scalar_t__ jited_prog_len; scalar_t__ jited_prog_insns; } ;
struct TYPE_8__ {TYPE_3__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 struct bpf_prog_info_node* FUNC_2 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct dso *VAR_2, u64 VAR_3, char *VAR_4)
{
 struct bpf_prog_info_node *VAR_5;
 ssize_t VAR_6 = VAR_1;
 u64 VAR_7;
 u8 *VAR_8;

 VAR_5 = FUNC_2(VAR_2->bpf_prog.env, VAR_2->bpf_prog.id);
 if (!VAR_5 || !VAR_5->info_linear) {
  VAR_2->data.status = VAR_0;
  return -1;
 }

 VAR_7 = VAR_5->info_linear->info.jited_prog_len;
 VAR_8 = (u8 *)(uintptr_t)VAR_5->info_linear->info.jited_prog_insns;

 if (VAR_3 >= VAR_7)
  return -1;

 VAR_6 = (ssize_t)FUNC_1(VAR_7 - VAR_3, (u64)VAR_6);
 FUNC_0(VAR_4, VAR_8 + VAR_3, VAR_6);
 return VAR_6;
}
