
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int nud_state; struct neigh_parms* parms; } ;
struct neigh_parms {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct neigh_parms*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static __inline__ int FUNC_1(struct neighbour *VAR_5)
{
 struct neigh_parms *VAR_6 = VAR_5->parms;
 return FUNC_0(VAR_6, VAR_4) + FUNC_0(VAR_6, VAR_0) +
        (VAR_5->nud_state & VAR_3 ? FUNC_0(VAR_6, VAR_2) :
         FUNC_0(VAR_6, VAR_1));
}
