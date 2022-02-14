
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef scalar_t__ uint64 ;
typedef scalar_t__ tmsize_t ;
typedef int thandle_t ;
typedef int LPVOID ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int,int*,int *) ;

__attribute__((used)) static tmsize_t
FUNC_1(thandle_t VAR_0, void* VAR_1, tmsize_t VAR_2)
{



 uint8* VAR_3;
 uint64 VAR_4;
 DWORD VAR_5;
 DWORD VAR_6;
 tmsize_t VAR_7;
 VAR_3=(uint8*)VAR_1;
 VAR_4=VAR_2;
 VAR_7=0;
 while (VAR_4>0)
 {
  VAR_5=0x80000000UL;
  if ((uint64)VAR_5>VAR_4)
   VAR_5=(DWORD)VAR_4;
  if (!FUNC_0(VAR_0,(LPVOID)VAR_3,VAR_5,&VAR_6,((void*)0)))
   return(0);
  VAR_3+=VAR_6;
  VAR_4-=VAR_6;
  VAR_7+=VAR_6;
  if (VAR_6!=VAR_5)
   break;
 }
 return(VAR_7);
}
