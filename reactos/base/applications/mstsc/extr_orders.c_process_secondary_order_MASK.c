
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint16 ;
typedef int sint16 ;
struct TYPE_11__ {int* p; } ;
typedef TYPE_1__* STREAM ;


 int VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void
FUNC_9(STREAM VAR_2)
{



 uint16 VAR_3;
 uint16 VAR_4;
 uint8 VAR_5;
 uint8 *VAR_6;

 FUNC_0(VAR_2, VAR_3);
 FUNC_0(VAR_2, VAR_4);
 FUNC_1(VAR_2, VAR_5);

 VAR_6 = VAR_2->p + (sint16) VAR_3 + 7;

 switch (VAR_5)
 {
  case 129:
   FUNC_7(VAR_2);
   break;

  case 131:
   FUNC_5(VAR_2);
   break;

  case 134:
   FUNC_2(VAR_2);
   break;

  case 130:
   FUNC_6(VAR_2);
   break;

  case 128:
   FUNC_3(VAR_2, VAR_4, VAR_0);
   break;

  case 133:
   FUNC_3(VAR_2, VAR_4, VAR_1);
   break;

  case 132:
   FUNC_4(VAR_2, VAR_4);
   break;

  default:
   FUNC_8("secondary order %d\n", VAR_5);
 }

 VAR_2->p = VAR_6;
}
