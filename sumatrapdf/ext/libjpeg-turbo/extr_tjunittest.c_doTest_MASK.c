
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tjhandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_10 ;
 int FUNC_2 (int *,unsigned char**,unsigned long*,int,int,int,char*,int,int,int) ;
 int FUNC_3 (int *,unsigned char*,unsigned long,int,int,int,char*,int,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 (int,int,int) ;
 unsigned long FUNC_7 (int,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (unsigned char*) ;
 int * FUNC_10 () ;
 int * FUNC_11 () ;
 scalar_t__ VAR_11 ;

void FUNC_12(int VAR_12, int VAR_13, const int *VAR_14, int VAR_15, int VAR_16,
 char *VAR_17)
{
 tjhandle VAR_18=((void*)0), VAR_19=((void*)0);
 unsigned char *VAR_20=((void*)0);
 unsigned long VAR_21=0; int VAR_22, VAR_23, VAR_24;

 if(!VAR_10)
 {
  VAR_21=(VAR_11==VAR_9? FUNC_7(VAR_12, VAR_13, VAR_16)
   : FUNC_6(VAR_12, VAR_13, VAR_16));
  if((VAR_20=(unsigned char *)FUNC_5(VAR_21))==((void*)0))
   FUNC_0("Memory allocation failure.");
 }

 if((VAR_18=FUNC_10())==((void*)0) || (VAR_19=FUNC_11())==((void*)0))
  FUNC_1();

 for(VAR_22=0; VAR_22<VAR_15; VAR_22++)
 {
  for(VAR_24=0; VAR_24<2; VAR_24++)
  {
   int VAR_25=0;
   if(VAR_16==VAR_6 || VAR_16==VAR_5 || VAR_16==VAR_7)
    VAR_25|=VAR_1;
   if(VAR_24==1)
   {
    if(VAR_11==VAR_8) goto bailout;
    else VAR_25|=VAR_0;
   }
   VAR_23=VAR_14[VAR_22];
   FUNC_2(VAR_18, &VAR_20, &VAR_21, VAR_12, VAR_13, VAR_23, VAR_17, VAR_16, 100,
    VAR_25);
   FUNC_3(VAR_19, VAR_20, VAR_21, VAR_12, VAR_13, VAR_23, VAR_17, VAR_16,
    VAR_25);
   if(VAR_23>=VAR_3 && VAR_23<=VAR_4)
   {
    FUNC_4("\n");
    FUNC_3(VAR_19, VAR_20, VAR_21, VAR_12, VAR_13, VAR_23+(VAR_2-VAR_3),
     VAR_17, VAR_16, VAR_25);
   }
   FUNC_4("\n");
  }
 }
 FUNC_4("--------------------\n\n");

 bailout:
 if(VAR_18) FUNC_8(VAR_18);
 if(VAR_19) FUNC_8(VAR_19);

 if(VAR_20) FUNC_9(VAR_20);
}
