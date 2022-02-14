
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relpersistence; } ;
typedef TYPE_1__ RangeVar ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(RangeVar *VAR_2, Oid VAR_3)
{
 switch (VAR_2->relpersistence)
 {
  case 128:
   if (!FUNC_4(VAR_3))
   {
    if (FUNC_3(VAR_3))
     FUNC_0(VAR_1,
       (FUNC_1(VAR_0),
        FUNC_2("cannot create relations in temporary schemas of other sessions")));
    else
     FUNC_0(VAR_1,
       (FUNC_1(VAR_0),
        FUNC_2("cannot create temporary relation in non-temporary schema")));
   }
   break;
  case 129:
   if (FUNC_4(VAR_3))
    VAR_2->relpersistence = 128;
   else if (FUNC_3(VAR_3))
    FUNC_0(VAR_1,
      (FUNC_1(VAR_0),
       FUNC_2("cannot create relations in temporary schemas of other sessions")));
   break;
  default:
   if (FUNC_3(VAR_3))
    FUNC_0(VAR_1,
      (FUNC_1(VAR_0),
       FUNC_2("only temporary relations may be created in temporary schemas")));
 }
}
