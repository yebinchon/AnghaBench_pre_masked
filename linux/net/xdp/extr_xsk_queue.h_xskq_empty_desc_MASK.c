
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_queue {scalar_t__ nentries; int prod_tail; } ;


 scalar_t__ FUNC_0 (struct xsk_queue*,int ,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct xsk_queue *VAR_0)
{
 return FUNC_0(VAR_0, VAR_0->prod_tail, VAR_0->nentries) == VAR_0->nentries;
}
