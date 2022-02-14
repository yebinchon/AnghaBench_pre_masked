
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lwt_prog {int name; scalar_t__ prog; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct bpf_lwt_prog *VAR_0)
{
 if (VAR_0->prog)
  FUNC_0(VAR_0->prog);

 FUNC_1(VAR_0->name);
}
