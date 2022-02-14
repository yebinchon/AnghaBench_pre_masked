
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int prog; int name; } ;
struct seg6_local_lwt {TYPE_2__ bpf; TYPE_1__* desc; int srh; } ;
struct lwtunnel_state {int dummy; } ;
struct TYPE_3__ {int attrs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct seg6_local_lwt* FUNC_2 (struct lwtunnel_state*) ;

__attribute__((used)) static void FUNC_3(struct lwtunnel_state *VAR_1)
{
 struct seg6_local_lwt *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->srh);

 if (VAR_2->desc->attrs & (1 << VAR_0)) {
  FUNC_1(VAR_2->bpf.name);
  FUNC_0(VAR_2->bpf.prog);
 }

 return;
}
