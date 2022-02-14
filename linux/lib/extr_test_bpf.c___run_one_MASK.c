
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct bpf_prog {int dummy; } ;


 int FUNC_0 (struct bpf_prog const*,void const*) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(const struct bpf_prog *VAR_0, const void *VAR_1,
       int VAR_2, u64 *VAR_3)
{
 u64 VAR_4, VAR_5;
 int VAR_6 = 0, VAR_7;

 FUNC_3();
 VAR_4 = FUNC_2();

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  VAR_6 = FUNC_0(VAR_0, VAR_1);

 VAR_5 = FUNC_2();
 FUNC_4();

 *VAR_3 = VAR_5 - VAR_4;
 FUNC_1(*VAR_3, VAR_2);

 return VAR_6;
}
