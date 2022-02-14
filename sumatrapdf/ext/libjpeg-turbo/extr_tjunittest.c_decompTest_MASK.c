
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; } ;
typedef TYPE_1__ tjscalingfactor ;
typedef int tjhandle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*,unsigned long,int,int,int,char*,int,int,TYPE_1__) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int*) ;
 int VAR_2 ;

void FUNC_3(tjhandle VAR_3, unsigned char *VAR_4,
 unsigned long VAR_5, int VAR_6, int VAR_7, int VAR_8, char *VAR_9, int VAR_10,
 int VAR_11)
{
 int VAR_12, VAR_13=0;
 tjscalingfactor *VAR_14=FUNC_2(&VAR_13), VAR_15={1, 1};
 if(!VAR_14 || !VAR_13) FUNC_1();

 if((VAR_10==VAR_0 || VAR_10==VAR_1) && !VAR_2)
 {
  for(VAR_12=0; VAR_12<VAR_13; VAR_12++)
   FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
    VAR_11, VAR_14[VAR_12]);
 }
 else
  FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
   VAR_15);

 bailout:
 return;
}
