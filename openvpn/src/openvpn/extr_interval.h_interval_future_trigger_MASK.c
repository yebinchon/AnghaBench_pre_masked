
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interval {scalar_t__ future_trigger; } ;
typedef scalar_t__ interval_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void
FUNC_1(struct interval *VAR_2, interval_t VAR_3)
{
    if (VAR_3)
    {



        VAR_2->future_trigger = VAR_1 + VAR_3;
    }
}
