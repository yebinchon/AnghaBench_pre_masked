
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,int,int ,int ) ;

BOOL FUNC_2(HANDLE VAR_2, BOOL VAR_3)
{
 BOOL VAR_4;
 BYTE VAR_5;
 VAR_4 = FUNC_1(VAR_2, 0, 0, 0x40800800, VAR_0, 0);
 for(VAR_5 = 1; VAR_5 < 8; VAR_5++)
  FUNC_1(VAR_2, 0, VAR_5, 0x00000000, VAR_0, 0);
 if(VAR_4 && VAR_3)
  FUNC_0(VAR_2, VAR_1);
 return VAR_4;
}
