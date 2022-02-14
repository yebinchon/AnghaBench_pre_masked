
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int ,scalar_t__) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static void
FUNC_11(uint8 * VAR_2, uint8 * VAR_3, int VAR_4, uint32 VAR_5, uint8 * VAR_6,
  uint8 * VAR_7)
{
 BN_CTX *VAR_8;
 BIGNUM VAR_9, VAR_10, VAR_11, VAR_12;
 uint8 VAR_13[VAR_1];
 int VAR_14;

 FUNC_10(VAR_6, VAR_5);
 FUNC_10(VAR_7, VAR_0);
 FUNC_8(VAR_13, VAR_3, VAR_4);
 FUNC_10(VAR_13, VAR_4);

 VAR_8 = FUNC_1();
 FUNC_6(&VAR_9);
 FUNC_6(&VAR_10);
 FUNC_6(&VAR_11);
 FUNC_6(&VAR_12);

 FUNC_2(VAR_6, VAR_5, &VAR_9);
 FUNC_2(VAR_7, VAR_0, &VAR_10);
 FUNC_2(VAR_13, VAR_4, &VAR_11);
 FUNC_7(&VAR_12, &VAR_11, &VAR_10, &VAR_9, VAR_8);
 VAR_14 = FUNC_3(&VAR_12, VAR_2);
 FUNC_10(VAR_2, VAR_14);
 if ((uint32)VAR_14 < VAR_5)
  FUNC_9(VAR_2 + VAR_14, 0, VAR_5 - VAR_14);

 FUNC_5(&VAR_12);
 FUNC_4(&VAR_11);
 FUNC_5(&VAR_10);
 FUNC_5(&VAR_9);
 FUNC_0(VAR_8);
}
