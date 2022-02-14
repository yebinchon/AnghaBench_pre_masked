
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int flagBuffer ;
typedef int ULONG ;
typedef int * PDWORD ;
typedef int BerElement ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int) ;

void FUNC_2(BerElement * VAR_0, ULONG VAR_1)
{
 BYTE VAR_2[5] = {0};
 *(PDWORD) (VAR_2 + 1) = FUNC_0(VAR_1);
 FUNC_1(VAR_0, "X", VAR_2, sizeof(VAR_2));
}
