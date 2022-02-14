
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_logger {int dummy; } ;
struct TYPE_2__ {int * nf_loggers; } ;
struct net {TYPE_1__ nf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct nf_logger* FUNC_3 (int ) ;

void FUNC_4(struct net *VAR_2, const struct nf_logger *VAR_3)
{
 int VAR_4;
 const struct nf_logger *VAR_5;

 FUNC_1(&VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_3(VAR_2->nf.nf_loggers[VAR_4]);
  if (VAR_5 == VAR_3)
   FUNC_0(VAR_2->nf.nf_loggers[VAR_4], ((void*)0));
 }
 FUNC_2(&VAR_1);
}
