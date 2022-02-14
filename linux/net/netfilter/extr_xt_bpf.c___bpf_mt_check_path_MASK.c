
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_prog*) ;
 scalar_t__ VAR_2 ;
 struct bpf_prog* FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, struct bpf_prog **VAR_4)
{
 if (FUNC_2(VAR_3, VAR_2) == VAR_2)
  return -VAR_1;

 *VAR_4 = FUNC_1(VAR_3, VAR_0);
 return FUNC_0(*VAR_4);
}
