
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dim {scalar_t__ profile_ix; int tune_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dim*) ;

__attribute__((used)) static void FUNC_1(struct dim *VAR_2)
{
 VAR_2->tune_state = VAR_2->profile_ix ? VAR_0 : VAR_1;
 FUNC_0(VAR_2);
}
