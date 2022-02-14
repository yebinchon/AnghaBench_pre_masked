
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog {int dummy; } ;
typedef int __u8 ;
struct TYPE_2__ {int aux; } ;




 int VAR_0 ;
 int FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct bpf_prog *VAR_2, int VAR_3)
{
 __u8 VAR_4 = VAR_1[VAR_3].aux & VAR_0;

 switch (VAR_4) {
 case 129:
  FUNC_0(VAR_2);
  break;
 case 128:
  FUNC_1(VAR_2);
  break;
 }
}
