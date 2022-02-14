
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int file_size; int status; } ;
struct TYPE_5__ {int id; int env; } ;
struct dso {TYPE_2__ data; TYPE_1__ bpf_prog; } ;
struct bpf_prog_info_node {TYPE_3__* info_linear; } ;
struct TYPE_8__ {int jited_prog_len; } ;
struct TYPE_7__ {TYPE_4__ info; } ;


 int VAR_0 ;
 struct bpf_prog_info_node* FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct dso *VAR_1)
{
 struct bpf_prog_info_node *VAR_2;

 VAR_2 = FUNC_0(VAR_1->bpf_prog.env, VAR_1->bpf_prog.id);
 if (!VAR_2 || !VAR_2->info_linear) {
  VAR_1->data.status = VAR_0;
  return -1;
 }

 VAR_1->data.file_size = VAR_2->info_linear->info.jited_prog_len;
 return 0;
}
