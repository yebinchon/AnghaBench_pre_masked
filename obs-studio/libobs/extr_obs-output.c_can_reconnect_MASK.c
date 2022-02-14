
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ reconnect_retry_max; } ;
typedef TYPE_1__ obs_output_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static inline bool FUNC_1(const obs_output_t *VAR_2, int VAR_3)
{
 bool VAR_4 = VAR_2->reconnect_retry_max != 0;

 return (FUNC_0(VAR_2) && VAR_3 != VAR_1) ||
        (VAR_4 && VAR_3 == VAR_0);
}
