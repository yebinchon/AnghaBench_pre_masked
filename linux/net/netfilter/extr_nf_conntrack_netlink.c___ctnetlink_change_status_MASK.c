
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn {int status; } ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static void
FUNC_2(struct nf_conn *VAR_2, unsigned long VAR_3,
     unsigned long VAR_4)
{
 unsigned int VAR_5;


 VAR_3 &= ~VAR_0;
 VAR_4 &= ~VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_3 & (1 << VAR_5))
   FUNC_1(VAR_5, &VAR_2->status);
  else if (VAR_4 & (1 << VAR_5))
   FUNC_0(VAR_5, &VAR_2->status);
 }
}
