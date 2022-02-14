
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conn {int nat_bysource; TYPE_1__* tuplehash; } ;
struct TYPE_2__ {int tuple; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 unsigned int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nf_conn*) ;
 int * VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct nf_conn *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(FUNC_2(VAR_3), &VAR_3->tuplehash[VAR_1].tuple);
 FUNC_3(&VAR_2[VAR_4 % VAR_0]);
 FUNC_1(&VAR_3->nat_bysource);
 FUNC_4(&VAR_2[VAR_4 % VAR_0]);
}
