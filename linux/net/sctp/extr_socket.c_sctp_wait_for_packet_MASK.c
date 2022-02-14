
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_shutdown; int sk_receive_queue; } ;
struct TYPE_4__ {TYPE_1__* ep; } ;
struct TYPE_3__ {int asocs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct sock*) ;
 long FUNC_6 (long) ;
 TYPE_2__* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (long) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_14(struct sock *VAR_6, int *VAR_7, long *VAR_8)
{
 int VAR_9;
 FUNC_0(VAR_5);

 FUNC_4(FUNC_10(VAR_6), &VAR_5, VAR_3);


 VAR_9 = FUNC_12(VAR_6);
 if (VAR_9)
  goto out;

 if (!FUNC_11(&VAR_6->sk_receive_queue))
  goto ready;


 if (VAR_6->sk_shutdown & VAR_2)
  goto out;




 VAR_9 = -VAR_0;


 if (FUNC_2(&FUNC_7(VAR_6)->ep->asocs) && !FUNC_8(VAR_6, VAR_1))
  goto out;


 if (FUNC_9(VAR_4))
  goto interrupted;






 FUNC_5(VAR_6);
 *VAR_8 = FUNC_6(*VAR_8);
 FUNC_3(VAR_6);

ready:
 FUNC_1(FUNC_10(VAR_6), &VAR_5);
 return 0;

interrupted:
 VAR_9 = FUNC_13(*VAR_8);

out:
 FUNC_1(FUNC_10(VAR_6), &VAR_5);
 *VAR_7 = VAR_9;
 return VAR_9;
}
