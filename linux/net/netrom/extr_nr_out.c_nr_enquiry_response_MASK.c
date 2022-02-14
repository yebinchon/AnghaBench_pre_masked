
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct nr_sock {int condition; int vr; int vl; int reseq_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nr_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int) ;
 int * FUNC_2 (int *) ;

void FUNC_3(struct sock *VAR_5)
{
 struct nr_sock *VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = VAR_3;

 if (VAR_6->condition & VAR_2) {
  VAR_7 |= VAR_0;
 } else {
  if (FUNC_2(&VAR_6->reseq_queue) != ((void*)0))
   VAR_7 |= VAR_4;
 }

 FUNC_1(VAR_5, VAR_7);

 VAR_6->vl = VAR_6->vr;
 VAR_6->condition &= ~VAR_1;
}
