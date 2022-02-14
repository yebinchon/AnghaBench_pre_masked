
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HBITMAP ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int* VAR_2 ;

void FUNC_1(HBITMAP VAR_3){
 int VAR_4,VAR_5;
 static unsigned int VAR_6=0;

 for(VAR_4=0;VAR_4<VAR_1;VAR_4++){
  for(VAR_5=0;VAR_5<=VAR_0-1;VAR_5++)
   VAR_2[VAR_5*320+VAR_4] = VAR_6 % 256;

  if (VAR_6 > 512)
   VAR_6 = 0;
  else
   VAR_6++;
 }

 FUNC_0(VAR_3);
}
