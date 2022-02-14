
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef int PULONG ;
typedef int LPSTR ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,size_t) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,int ,int ) ;
 size_t FUNC_3 (int ,char*) ;
 int VAR_2 ;

BOOLEAN FUNC_4(LPSTR VAR_3,PULONG VAR_4)
{
    char VAR_5[256];
    ULONG VAR_6;

 FUNC_0((0,"ConvertTokenToKeyword()\n"));
 VAR_6=FUNC_3(VAR_3," ");
 FUNC_1(VAR_5,VAR_3,VAR_6);
 VAR_5[VAR_6]=0;
 if(FUNC_2(VAR_5,VAR_4,VAR_1))
 {
  FUNC_0((0,"ConvertTokenToKeyword(): success\n"));
  return VAR_2;
 }
 return VAR_0;
}
