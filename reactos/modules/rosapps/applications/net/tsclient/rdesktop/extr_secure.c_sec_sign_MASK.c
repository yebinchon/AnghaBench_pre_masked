
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int SHA_CTX ;
typedef int MD5_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int * VAR_0 ;
 int * VAR_1 ;

void
FUNC_8(uint8 * VAR_2, int VAR_3, uint8 * VAR_4, int VAR_5, uint8 * VAR_6, int VAR_7)
{
 uint8 VAR_8[20];
 uint8 VAR_9[16];
 uint8 VAR_10[4];
 SHA_CTX VAR_11;
 MD5_CTX VAR_12;

 FUNC_6(VAR_10, VAR_7);

 FUNC_4(&VAR_11);
 FUNC_5(&VAR_11, VAR_4, VAR_5);
 FUNC_5(&VAR_11, VAR_0, 40);
 FUNC_5(&VAR_11, VAR_10, 4);
 FUNC_5(&VAR_11, VAR_6, VAR_7);
 FUNC_3(VAR_8, &VAR_11);

 FUNC_1(&VAR_12);
 FUNC_2(&VAR_12, VAR_4, VAR_5);
 FUNC_2(&VAR_12, VAR_1, 48);
 FUNC_2(&VAR_12, VAR_8, 20);
 FUNC_0(VAR_9, &VAR_12);

 FUNC_7(VAR_2, VAR_9, VAR_3);
}
