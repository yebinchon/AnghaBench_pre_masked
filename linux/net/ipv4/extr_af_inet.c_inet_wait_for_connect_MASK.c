
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_pending; int sk_state; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sock*) ;
 int VAR_4 ;
 long FUNC_7 (int *,int ,long) ;
 int VAR_5 ;

__attribute__((used)) static long FUNC_8(struct sock *VAR_6, long VAR_7, int VAR_8)
{
 FUNC_0(VAR_4, VAR_5);

 FUNC_1(FUNC_6(VAR_6), &VAR_4);
 VAR_6->sk_write_pending += VAR_8;






 while ((1 << VAR_6->sk_state) & (VAR_2 | VAR_1)) {
  FUNC_3(VAR_6);
  VAR_7 = FUNC_7(&VAR_4, VAR_0, VAR_7);
  FUNC_2(VAR_6);
  if (FUNC_5(VAR_3) || !VAR_7)
   break;
 }
 FUNC_4(FUNC_6(VAR_6), &VAR_4);
 VAR_6->sk_write_pending -= VAR_8;
 return VAR_7;
}
