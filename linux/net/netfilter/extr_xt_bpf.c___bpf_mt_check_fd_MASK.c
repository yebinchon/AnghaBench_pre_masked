
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_1, struct bpf_prog **VAR_2)
{
 struct bpf_prog *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 *VAR_2 = VAR_3;
 return 0;
}
