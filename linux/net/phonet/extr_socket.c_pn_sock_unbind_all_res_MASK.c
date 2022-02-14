
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {struct sock** sk; } ;


 int FUNC_0 (struct sock*,int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

void FUNC_4(struct sock *VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;

 FUNC_2(&VAR_1);
 for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
  if (VAR_0.sk[VAR_3] == VAR_2) {
   FUNC_0(VAR_0.sk[VAR_3], ((void*)0));
   VAR_4++;
  }
 }
 FUNC_3(&VAR_1);

 while (VAR_4 > 0) {
  FUNC_1(VAR_2);
  VAR_4--;
 }

}
