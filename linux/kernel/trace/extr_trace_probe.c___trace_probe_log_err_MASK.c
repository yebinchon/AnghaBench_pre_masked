
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int argc; int index; int subsystem; int * argv; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int *,int ,char*,int ,int,int) ;

void FUNC_5(int VAR_3, int VAR_4)
{
 char *VAR_5, *VAR_6;
 int VAR_7, VAR_8 = 0, VAR_9 = 0;

 if (!VAR_2.argv)
  return;


 for (VAR_7 = 0; VAR_7 < VAR_2.argc; VAR_7++) {
  if (VAR_7 == VAR_2.index)
   VAR_9 = VAR_8;
  VAR_8 += FUNC_3(VAR_2.argv[VAR_7]) + 1;
 }
 VAR_5 = FUNC_1(VAR_8, VAR_0);
 if (!VAR_5)
  return;

 if (VAR_2.index >= VAR_2.argc) {





  VAR_9 = VAR_8;
  VAR_3 = 0;
 }


 VAR_6 = VAR_5;
 for (VAR_7 = 0; VAR_7 < VAR_2.argc; VAR_7++) {
  VAR_8 = FUNC_3(VAR_2.argv[VAR_7]);
  FUNC_2(VAR_6, VAR_2.argv[VAR_7]);
  VAR_6[VAR_8] = ' ';
  VAR_6 += VAR_8 + 1;
 }
 *(VAR_6 - 1) = '\0';

 FUNC_4(((void*)0), VAR_2.subsystem, VAR_5,
   VAR_1, VAR_4, VAR_9 + VAR_3);

 FUNC_0(VAR_5);
}
