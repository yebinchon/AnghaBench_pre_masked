
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int uint16 ;
typedef int * STREAM ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;

BOOL
FUNC_6(RDPCLIENT * VAR_2, uint32 VAR_3, uint16 VAR_4, uint16 VAR_5, uint16 VAR_6, uint16 VAR_7)
{
 STREAM VAR_8;

 VAR_8 = FUNC_3(VAR_2, 16);

 if(VAR_8 == ((void*)0))
  return VAR_0;

 FUNC_1(VAR_8, 1);
 FUNC_0(VAR_8, 0);

 FUNC_2(VAR_8, VAR_3);
 FUNC_1(VAR_8, VAR_4);
 FUNC_1(VAR_8, VAR_5);
 FUNC_1(VAR_8, VAR_6);
 FUNC_1(VAR_8, VAR_7);

 FUNC_5(VAR_8);
 return FUNC_4(VAR_2, VAR_8, VAR_1);
}
