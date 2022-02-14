
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union bpf_attr {int dummy; } bpf_attr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,union bpf_attr*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(union bpf_attr *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 do {
  VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_4);
 } while (VAR_5 < 0 && VAR_2 == VAR_1);

 return VAR_5;
}
