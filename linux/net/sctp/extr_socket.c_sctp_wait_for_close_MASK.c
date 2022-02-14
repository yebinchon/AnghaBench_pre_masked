
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ep; } ;
struct TYPE_3__ {int asocs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct sock*) ;
 long FUNC_6 (long) ;
 TYPE_2__* FUNC_7 (struct sock*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sock*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_3, long VAR_4)
{
 FUNC_0(VAR_2);

 do {
  FUNC_4(FUNC_9(VAR_3), &VAR_2, VAR_0);
  if (FUNC_2(&FUNC_7(VAR_3)->ep->asocs))
   break;
  FUNC_5(VAR_3);
  VAR_4 = FUNC_6(VAR_4);
  FUNC_3(VAR_3);
 } while (!FUNC_8(VAR_1) && VAR_4);

 FUNC_1(FUNC_9(VAR_3), &VAR_2);
}
