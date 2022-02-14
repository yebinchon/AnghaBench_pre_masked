
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_offload {int timeout; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct flow_offload *VAR_0)
{
 return FUNC_0(VAR_0->timeout) <= 0;
}
