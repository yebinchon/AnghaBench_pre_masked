
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct nf_logger {int name; } ;
struct TYPE_2__ {int * nf_loggers; } ;
struct net {TYPE_1__ nf; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int ,struct nf_logger const*) ;

int FUNC_5(struct net *VAR_3, u_int8_t VAR_4,
     const struct nf_logger *VAR_5)
{
 if (VAR_4 >= FUNC_0(VAR_3->nf.nf_loggers))
  return -VAR_0;
 FUNC_2(&VAR_2);
 if (FUNC_1(VAR_4, VAR_5->name) == ((void*)0)) {
  FUNC_3(&VAR_2);
  return -VAR_1;
 }
 FUNC_4(VAR_3->nf.nf_loggers[VAR_4], VAR_5);
 FUNC_3(&VAR_2);
 return 0;
}
