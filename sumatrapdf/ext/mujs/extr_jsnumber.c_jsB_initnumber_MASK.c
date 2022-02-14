
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* Number_prototype; } ;
typedef TYPE_2__ js_State ;
struct TYPE_10__ {scalar_t__ number; } ;
struct TYPE_12__ {TYPE_1__ u; } ;


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
 int FUNC_0 (TYPE_2__*,char*,int ,int) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,char*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;

void FUNC_5(js_State *VAR_10)
{
 VAR_10->Number_prototype->u.number = 0;

 FUNC_4(VAR_10, VAR_10->Number_prototype);
 {
  FUNC_0(VAR_10, "Number.prototype.valueOf", VAR_7, 0);
  FUNC_0(VAR_10, "Number.prototype.toString", VAR_6, 1);
  FUNC_0(VAR_10, "Number.prototype.toLocaleString", VAR_6, 0);
  FUNC_0(VAR_10, "Number.prototype.toFixed", VAR_4, 1);
  FUNC_0(VAR_10, "Number.prototype.toExponential", VAR_3, 1);
  FUNC_0(VAR_10, "Number.prototype.toPrecision", VAR_5, 1);
 }
 FUNC_3(VAR_10, VAR_8, VAR_9, "Number", 0);
 {
  FUNC_1(VAR_10, "MAX_VALUE", 1.7976931348623157e+308);
  FUNC_1(VAR_10, "MIN_VALUE", 5e-324);
  FUNC_1(VAR_10, "NaN", VAR_2);
  FUNC_1(VAR_10, "NEGATIVE_INFINITY", -VAR_0);
  FUNC_1(VAR_10, "POSITIVE_INFINITY", VAR_0);
 }
 FUNC_2(VAR_10, "Number", VAR_1);
}
