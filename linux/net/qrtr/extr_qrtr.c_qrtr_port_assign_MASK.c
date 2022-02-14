
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qrtr_sock {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct qrtr_sock*,int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct qrtr_sock *VAR_10, int *VAR_11)
{
 int VAR_12;

 FUNC_2(&VAR_8);
 if (!*VAR_11) {
  VAR_12 = FUNC_1(&VAR_9, VAR_10,
          VAR_6, VAR_5 + 1,
          VAR_4);
  if (VAR_12 >= 0)
   *VAR_11 = VAR_12;
 } else if (*VAR_11 < VAR_6 && !FUNC_0(VAR_0)) {
  VAR_12 = -VAR_1;
 } else if (*VAR_11 == VAR_7) {
  VAR_12 = FUNC_1(&VAR_9, VAR_10, 0, 1, VAR_4);
 } else {
  VAR_12 = FUNC_1(&VAR_9, VAR_10, *VAR_11, *VAR_11 + 1, VAR_4);
  if (VAR_12 >= 0)
   *VAR_11 = VAR_12;
 }
 FUNC_3(&VAR_8);

 if (VAR_12 == -VAR_3)
  return -VAR_2;
 else if (VAR_12 < 0)
  return VAR_12;

 FUNC_4(&VAR_10->sk);

 return 0;
}
