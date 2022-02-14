
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum action { ____Placeholder_action } action ;
struct TYPE_2__ {scalar_t__ filtermode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;



 size_t VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 () ;
 int VAR_8 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int VAR_9 ;
 int FUNC_3 (char*) ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int *,char*,int ) ;
 int * VAR_12 ;

__attribute__((used)) static bool FUNC_9(enum action VAR_13, char *VAR_14, int *VAR_15)
{
 int VAR_16;

 FUNC_2();

 if (!FUNC_7()) {
  *VAR_15 = VAR_3;
  return VAR_0;
 }

 switch (VAR_13) {
 case 130:
  FUNC_4(VAR_9, VAR_8);
  break;
 case 128:
  FUNC_4(VAR_9, VAR_11);
  break;
 case 129:
  VAR_16 = FUNC_3("'c'p / 'm'v as?");
  if (VAR_16 != 'c' && VAR_16 != 'm') {
   if (VAR_7.filtermode)
    *VAR_15 = VAR_1;
   return VAR_0;
  }

  if (!FUNC_1(VAR_16, VAR_14)) {
   FUNC_5(VAR_10[VAR_4], VAR_15);
   return VAR_0;
  }
  break;
 default:
  FUNC_6(VAR_9);
  break;
 }

 if (VAR_13 != 129)
  FUNC_8(VAR_12[VAR_5], VAR_9, ((void*)0), VAR_14, VAR_2);


 if (VAR_13 != 130)
  FUNC_0();

 if (VAR_7.filtermode)
  *VAR_15 = VAR_1;

 return VAR_6;
}
