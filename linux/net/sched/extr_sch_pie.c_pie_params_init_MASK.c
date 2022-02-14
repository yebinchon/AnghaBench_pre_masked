
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pie_params {int alpha; int beta; int limit; int ecn; int bytemode; int target; int tupdate; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct pie_params *VAR_2)
{
 VAR_2->alpha = 2;
 VAR_2->beta = 20;
 VAR_2->tupdate = FUNC_1(15 * VAR_1);
 VAR_2->limit = 1000;
 VAR_2->target = FUNC_0(15 * VAR_0);
 VAR_2->ecn = 0;
 VAR_2->bytemode = 0;
}
