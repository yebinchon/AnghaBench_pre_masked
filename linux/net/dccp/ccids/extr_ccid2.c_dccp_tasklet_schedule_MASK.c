
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tasklet_struct {int state; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {struct tasklet_struct dccps_xmitlet; } ;


 int VAR_0 ;
 int FUNC_0 (struct tasklet_struct*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1)
{
 struct tasklet_struct *VAR_2 = &FUNC_1(VAR_1)->dccps_xmitlet;

 if (!FUNC_3(VAR_0, &VAR_2->state)) {
  FUNC_2(VAR_1);
  FUNC_0(VAR_2);
 }
}
