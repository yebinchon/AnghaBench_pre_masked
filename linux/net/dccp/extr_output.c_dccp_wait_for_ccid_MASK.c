
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_err; int sk_write_pending; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct sock*) ;
 long FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sock*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_3, unsigned long VAR_4)
{
 FUNC_0(VAR_2);
 long VAR_5;

 FUNC_3(FUNC_7(VAR_3), &VAR_2, VAR_0);
 VAR_3->sk_write_pending++;
 FUNC_4(VAR_3);

 VAR_5 = FUNC_5(VAR_4);

 FUNC_2(VAR_3);
 VAR_3->sk_write_pending--;
 FUNC_1(FUNC_7(VAR_3), &VAR_2);

 if (FUNC_6(VAR_1) || VAR_3->sk_err)
  return -1;
 return VAR_5;
}
