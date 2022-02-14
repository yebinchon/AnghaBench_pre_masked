
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int* PUCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int VAR_3 ;

BOOLEAN FUNC_5(void)
{
PUCHAR VAR_4;
BOOLEAN VAR_5=VAR_2;

    FUNC_1();
 FUNC_0((0,"IsCallInstrAtEIP()\n"));

 VAR_4=(PUCHAR)FUNC_2(VAR_0,VAR_1);
 if(FUNC_3((ULONG)VAR_4,2))
 {
  if(*VAR_4== 0xE8 ||
     (*VAR_4== 0xFF && ( ((*(VAR_4+1)>>3)&0x7)==0x2 || ((*(VAR_4+1)>>3)&0x7)==0x3) ) ||
     *VAR_4== 0x9A ||
     *VAR_4== 0xF2 ||
     *VAR_4== 0xF3)
   VAR_5=VAR_3;
 }

    FUNC_4();

 return VAR_5;
}
