
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint16 ;
typedef int sint16 ;
struct TYPE_10__ {int* p; } ;
typedef TYPE_1__* STREAM ;
typedef int RDPCLIENT ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,scalar_t__,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void
FUNC_8(RDPCLIENT * VAR_2, STREAM VAR_3)
{



 uint16 VAR_4;
 uint16 VAR_5;
 uint8 VAR_6;
 uint8 *VAR_7;

 FUNC_0(VAR_3, VAR_4);
 FUNC_0(VAR_3, VAR_5);
 FUNC_1(VAR_3, VAR_6);

 VAR_7 = VAR_3->p + (sint16) VAR_4 + 7;

 switch (VAR_6)
 {
  case 129:
   FUNC_6(VAR_2, VAR_3);
   break;

  case 131:
   FUNC_4(VAR_2, VAR_3);
   break;

  case 133:
   FUNC_2(VAR_2, VAR_3);
   break;

  case 130:
   FUNC_5(VAR_2, VAR_3);
   break;

  case 128:
   FUNC_3(VAR_2, VAR_3, VAR_5, VAR_0);
   break;

  case 132:
   FUNC_3(VAR_2, VAR_3, VAR_5, VAR_1);
   break;

  default:
   FUNC_7("secondary order %d\n", VAR_6);
 }

 VAR_3->p = VAR_7;
}
