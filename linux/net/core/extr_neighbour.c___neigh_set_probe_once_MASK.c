
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int nud_state; int parms; int probes; scalar_t__ updated; scalar_t__ dead; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct neighbour*,scalar_t__) ;
 int FUNC_3 (struct neighbour*) ;

void FUNC_4(struct neighbour *VAR_4)
{
 if (VAR_4->dead)
  return;
 VAR_4->updated = VAR_3;
 if (!(VAR_4->nud_state & VAR_0))
  return;
 VAR_4->nud_state = VAR_1;
 FUNC_1(&VAR_4->probes, FUNC_3(VAR_4));
 FUNC_2(VAR_4,
   VAR_3 + FUNC_0(VAR_4->parms, VAR_2));
}
