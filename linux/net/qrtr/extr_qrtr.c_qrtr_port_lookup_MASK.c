
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qrtr_sock {int sk; } ;


 int VAR_0 ;
 struct qrtr_sock* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct qrtr_sock *FUNC_4(int VAR_3)
{
 struct qrtr_sock *VAR_4;

 if (VAR_3 == VAR_0)
  VAR_3 = 0;

 FUNC_1(&VAR_1);
 VAR_4 = FUNC_0(&VAR_2, VAR_3);
 if (VAR_4)
  FUNC_3(&VAR_4->sk);
 FUNC_2(&VAR_1);

 return VAR_4;
}
