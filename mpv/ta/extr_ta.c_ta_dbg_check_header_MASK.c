
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ta_header {scalar_t__ canary; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ta_header *VAR_1)
{
    if (VAR_1)
        FUNC_0(VAR_1->canary == VAR_0);
}
