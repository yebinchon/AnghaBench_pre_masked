
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
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static BOOL
FUNC_6(RDPCLIENT * VAR_6, uint8 * VAR_7, uint8 * VAR_8, uint8 * VAR_9)
{
 uint32 VAR_10 = VAR_5;
 uint16 VAR_11 = 58;
 STREAM VAR_12;

 VAR_12 = FUNC_4(VAR_6, VAR_10, VAR_11 + 2);

 if(VAR_12 == ((void*)0))
  return VAR_0;

 FUNC_1(VAR_12, VAR_3);
 FUNC_1(VAR_12, 2);
 FUNC_0(VAR_12, VAR_11);

 FUNC_0(VAR_12, 1);
 FUNC_0(VAR_12, VAR_4);
 FUNC_2(VAR_12, VAR_7, VAR_4);

 FUNC_0(VAR_12, 1);
 FUNC_0(VAR_12, VAR_1);
 FUNC_2(VAR_12, VAR_8, VAR_1);

 FUNC_2(VAR_12, VAR_9, VAR_2);

 FUNC_3(VAR_12);
 return FUNC_5(VAR_6, VAR_12, VAR_10);
}
