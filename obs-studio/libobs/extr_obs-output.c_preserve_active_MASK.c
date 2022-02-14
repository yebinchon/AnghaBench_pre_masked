
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {int delay_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct obs_output *VAR_1)
{
 return (VAR_1->delay_flags & VAR_0) != 0;
}
