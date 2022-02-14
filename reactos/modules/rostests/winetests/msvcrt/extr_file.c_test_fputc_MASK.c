
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*,int,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7( void )
{
  char* VAR_1;
  FILE *VAR_2;
  int VAR_3;

  VAR_1=FUNC_0(".","wne");
  VAR_2 = FUNC_2(VAR_1,"wb");
  VAR_3 = FUNC_3(0,VAR_2);
  FUNC_5(0 == VAR_3, "fputc(0,tempfh) expected %x got %x\n", 0, VAR_3);
  VAR_3 = FUNC_3(0xff,VAR_2);
  FUNC_5(0xff == VAR_3, "fputc(0xff,tempfh) expected %x got %x\n", 0xff, VAR_3);
  VAR_3 = FUNC_3(0xffffffff,VAR_2);
  FUNC_5(0xff == VAR_3, "fputc(0xffffffff,tempfh) expected %x got %x\n", 0xff, VAR_3);
  FUNC_1(VAR_2);

  VAR_2 = FUNC_2(VAR_1,"rb");
  VAR_3 = FUNC_3(0,VAR_2);
  FUNC_5(VAR_0 == VAR_3, "fputc(0,tempfh) on r/o file expected %x got %x\n", VAR_0, VAR_3);
  FUNC_1(VAR_2);

  FUNC_6(VAR_1);
  FUNC_4(VAR_1);
}
