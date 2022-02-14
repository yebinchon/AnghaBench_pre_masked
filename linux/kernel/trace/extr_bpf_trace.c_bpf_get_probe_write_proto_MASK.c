
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_func_proto {int dummy; } ;
struct TYPE_3__ {int comm; } ;


 struct bpf_func_proto const VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static const struct bpf_func_proto *FUNC_2(void)
{
 FUNC_0("%s[%d] is installing a program with bpf_probe_write_user helper that may corrupt user memory!",
       VAR_1->comm, FUNC_1(VAR_1));

 return &VAR_0;
}
