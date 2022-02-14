
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;
typedef int UInt32 ;
typedef int SRes ;
typedef int ISzAlloc ;
typedef int ILookInStream ;
typedef int CSzData ;
typedef int CSzAr ;
typedef int CBuf ;
typedef int Byte ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int ,int *,int **,int **,int **,int *) ;

__attribute__((used)) static SRes FUNC_4(
    ILookInStream *VAR_0,
    CSzData *VAR_1,
    CBuf *VAR_2,
    UInt64 VAR_3,
    ISzAlloc *VAR_4)
{
  CSzAr VAR_5;
  UInt64 *VAR_6 = 0;
  Byte *VAR_7 = 0;
  UInt32 *VAR_8 = 0;
  SRes VAR_9;
  FUNC_2(&VAR_5);
  VAR_9 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3,
    &VAR_5, &VAR_6, &VAR_7, &VAR_8,
    VAR_4);
  FUNC_1(&VAR_5, VAR_4);
  FUNC_0(VAR_4, VAR_6);
  FUNC_0(VAR_4, VAR_7);
  FUNC_0(VAR_4, VAR_8);
  return VAR_9;
}
