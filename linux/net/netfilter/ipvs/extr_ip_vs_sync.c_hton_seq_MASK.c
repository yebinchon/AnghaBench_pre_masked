
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_seq {int previous_delta; int delta; int init_seq; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct ip_vs_seq *VAR_0, struct ip_vs_seq *VAR_1)
{
 FUNC_0(VAR_0->init_seq, &VAR_1->init_seq);
 FUNC_0(VAR_0->delta, &VAR_1->delta);
 FUNC_0(VAR_0->previous_delta, &VAR_1->previous_delta);
}
