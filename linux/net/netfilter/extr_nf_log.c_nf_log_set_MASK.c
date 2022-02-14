
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct nf_logger {int dummy; } ;
struct TYPE_2__ {int * nf_loggers; } ;
struct net {TYPE_1__ nf; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 struct nf_logger* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct nf_logger const*) ;

int FUNC_5(struct net *VAR_3, u_int8_t VAR_4, const struct nf_logger *VAR_5)
{
 const struct nf_logger *VAR_6;

 if (VAR_4 == VAR_1 || VAR_4 >= FUNC_0(VAR_3->nf.nf_loggers))
  return -VAR_0;

 FUNC_1(&VAR_2);
 VAR_6 = FUNC_3(VAR_3->nf.nf_loggers[VAR_4]);
 if (VAR_6 == ((void*)0))
  FUNC_4(VAR_3->nf.nf_loggers[VAR_4], VAR_5);

 FUNC_2(&VAR_2);

 return 0;
}
