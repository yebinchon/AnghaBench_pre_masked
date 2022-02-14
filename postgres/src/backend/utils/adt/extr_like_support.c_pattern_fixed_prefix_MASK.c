
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int constbyval; int constisnull; int constlen; int constvalue; int constcollid; int consttypmod; int consttype; } ;
typedef double Selectivity ;
typedef int Pattern_Type ;
typedef int Pattern_Prefix_Status ;
typedef int Oid ;
typedef TYPE_1__ Const ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,int,int ,TYPE_1__**,double*) ;
 TYPE_1__* FUNC_3 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int,int ,TYPE_1__**,double*) ;

__attribute__((used)) static Pattern_Prefix_Status
FUNC_5(Const *VAR_3, Pattern_Type VAR_4, Oid VAR_5,
      Const **VAR_6, Selectivity *VAR_7)
{
 Pattern_Prefix_Status VAR_8;

 switch (VAR_4)
 {
  case 132:
   VAR_8 = FUNC_2(VAR_3, 0, VAR_5,
            VAR_6, VAR_7);
   break;
  case 131:
   VAR_8 = FUNC_2(VAR_3, 1, VAR_5,
            VAR_6, VAR_7);
   break;
  case 129:
   VAR_8 = FUNC_4(VAR_3, 0, VAR_5,
          VAR_6, VAR_7);
   break;
  case 128:
   VAR_8 = FUNC_4(VAR_3, 1, VAR_5,
          VAR_6, VAR_7);
   break;
  case 130:

   VAR_8 = VAR_2;
   *VAR_7 = 1.0;
   *VAR_6 = FUNC_3(VAR_3->consttype,
        VAR_3->consttypmod,
        VAR_3->constcollid,
        VAR_3->constlen,
        FUNC_0(VAR_3->constvalue,
            VAR_3->constbyval,
            VAR_3->constlen),
        VAR_3->constisnull,
        VAR_3->constbyval);
   break;
  default:
   FUNC_1(VAR_0, "unrecognized ptype: %d", (int) VAR_4);
   VAR_8 = VAR_1;
   break;
 }
 return VAR_8;
}
