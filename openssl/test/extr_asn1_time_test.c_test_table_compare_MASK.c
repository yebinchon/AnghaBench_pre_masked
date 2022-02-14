
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compare_testdata {int result; int t2; int t1; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;
 struct compare_testdata* VAR_0 ;

__attribute__((used)) static int FUNC_2(int VAR_1)
{
    struct compare_testdata *VAR_2 = &VAR_0[VAR_1];

    return FUNC_1(FUNC_0(&VAR_2->t1, &VAR_2->t2), VAR_2->result);
}
