
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int uint16 ;
typedef int * STREAM ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int *,int ) ;

__attribute__((used)) static BOOL
FUNC_9(RDPCLIENT * VAR_8, uint8 * VAR_9, uint8 * VAR_10,
  uint8 * VAR_11, int VAR_12, uint8 * VAR_13, uint8 * VAR_14)
{
 uint32 VAR_15 = VAR_4;
 uint16 VAR_16 =
  16 + VAR_7 + VAR_5 + VAR_6 +
  VAR_12 + VAR_1 + VAR_2;
 STREAM VAR_17;

 VAR_17 = FUNC_7(VAR_8, VAR_15, VAR_16 + 4);

 if(VAR_17 == ((void*)0))
  return VAR_0;

 FUNC_3(VAR_17, VAR_3);
 FUNC_3(VAR_17, 2);
 FUNC_1(VAR_17, VAR_16);

 FUNC_2(VAR_17, 1);
 FUNC_0(VAR_17, 0);
 FUNC_1(VAR_17, 0x0201);

 FUNC_4(VAR_17, VAR_9, VAR_7);
 FUNC_0(VAR_17, 0);
 FUNC_1(VAR_17, (VAR_5 + VAR_6));
 FUNC_4(VAR_17, VAR_10, VAR_5);
 FUNC_5(VAR_17, VAR_6);

 FUNC_1(VAR_17, 1);
 FUNC_1(VAR_17, VAR_12);
 FUNC_4(VAR_17, VAR_11, VAR_12);

 FUNC_1(VAR_17, 1);
 FUNC_1(VAR_17, VAR_1);
 FUNC_4(VAR_17, VAR_13, VAR_1);

 FUNC_4(VAR_17, VAR_14, VAR_2);

 FUNC_6(VAR_17);
 return FUNC_8(VAR_8, VAR_17, VAR_15);
}
