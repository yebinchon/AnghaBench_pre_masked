
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;
typedef int SHA_CTX ;
typedef int MD5_CTX ;


 int FUNC_0 (scalar_t__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__*,int) ;
 int FUNC_6 (scalar_t__*,scalar_t__,int) ;

void
FUNC_7(uint8 * VAR_0, uint8 * VAR_1, uint8 * VAR_2, uint8 * VAR_3, uint8 VAR_4)
{
 uint8 VAR_5[20];
 uint8 VAR_6[4];
 SHA_CTX VAR_7;
 MD5_CTX VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
 {
  FUNC_6(VAR_6, VAR_4 + VAR_9, VAR_9 + 1);

  FUNC_4(&VAR_7);
  FUNC_5(&VAR_7, VAR_6, VAR_9 + 1);
  FUNC_5(&VAR_7, VAR_1, 48);
  FUNC_5(&VAR_7, VAR_2, 32);
  FUNC_5(&VAR_7, VAR_3, 32);
  FUNC_3(VAR_5, &VAR_7);

  FUNC_1(&VAR_8);
  FUNC_2(&VAR_8, VAR_1, 48);
  FUNC_2(&VAR_8, VAR_5, 20);
  FUNC_0(&VAR_0[VAR_9 * 16], &VAR_8);
 }
}
