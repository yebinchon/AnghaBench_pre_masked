
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (unsigned char*,unsigned long,int,int *) ;
 int FUNC_4 (char*,char*,char*) ;
 char* FUNC_5 (int ) ;

void FUNC_6(unsigned char *VAR_1, unsigned long VAR_2, char *VAR_3)
{
 FILE *VAR_4=FUNC_2(VAR_3, "wb");
 if(!VAR_4 || FUNC_3(VAR_1, VAR_2, 1, VAR_4)!=1)
 {
  FUNC_4("ERROR: Could not write to %s.\n%s\n", VAR_3, FUNC_5(VAR_0));
  FUNC_0();
 }

 bailout:
 if(VAR_4) FUNC_1(VAR_4);
}
