
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int r; } ;
typedef TYPE_1__ php_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int *,char*,char*) ;
 int FUNC_2 (int ,int,int ,int ,char*,char*) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(char *VAR_11, int VAR_12)
{
 php_struct *VAR_13;
 int VAR_14 = VAR_4;

 VAR_13 = FUNC_0(VAR_10);

 switch (VAR_12) {

  case 132:
   VAR_14 = VAR_3;
   break;


  case 135:
   VAR_14 = VAR_0;
   break;

  case 134:
   VAR_14 = VAR_1;
   break;
  case 131:
   VAR_14 = VAR_4;
   break;
  case 128:
   VAR_14 = VAR_9;
   break;
  case 129:
   VAR_14 = VAR_7;
   break;

  case 130:
   VAR_14 = VAR_5;
   break;


  case 133:
   VAR_14 = VAR_2;
   break;

 }

 if (VAR_13 == ((void*)0)) {
  FUNC_1(VAR_6, VAR_4 | VAR_8, 0, ((void*)0), "%s", VAR_11);
 } else {
  FUNC_2(VAR_6, VAR_14, 0, VAR_13->r, "%s", VAR_11);
 }
}
