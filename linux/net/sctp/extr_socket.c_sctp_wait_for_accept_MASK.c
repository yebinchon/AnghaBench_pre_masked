
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sctp_endpoint {int asocs; } ;
struct TYPE_2__ {struct sctp_endpoint* ep; } ;


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
 TYPE_1__* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (long) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_6, long VAR_7)
{
 struct sctp_endpoint *VAR_8;
 int VAR_9 = 0;
 FUNC_0(VAR_5);

 VAR_8 = FUNC_7(VAR_6)->ep;


 for (;;) {
  FUNC_4(FUNC_10(VAR_6), &VAR_5,
       VAR_3);

  if (FUNC_2(&VAR_8->asocs)) {
   FUNC_5(VAR_6);
   VAR_7 = FUNC_6(VAR_7);
   FUNC_3(VAR_6);
  }

  VAR_9 = -VAR_1;
  if (!FUNC_8(VAR_6, VAR_2))
   break;

  VAR_9 = 0;
  if (!FUNC_2(&VAR_8->asocs))
   break;

  VAR_9 = FUNC_11(VAR_7);
  if (FUNC_9(VAR_4))
   break;

  VAR_9 = -VAR_0;
  if (!VAR_7)
   break;
 }

 FUNC_1(FUNC_10(VAR_6), &VAR_5);

 return VAR_9;
}
