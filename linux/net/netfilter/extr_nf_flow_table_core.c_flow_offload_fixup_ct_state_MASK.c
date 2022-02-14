
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tcp; } ;
struct nf_conn {TYPE_1__ proto; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nf_conn*) ;

__attribute__((used)) static void FUNC_2(struct nf_conn *VAR_1)
{
 if (FUNC_1(VAR_1) == VAR_0)
  FUNC_0(&VAR_1->proto.tcp);
}
