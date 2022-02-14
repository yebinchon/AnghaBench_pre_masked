
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* String_prototype; } ;
typedef TYPE_3__ js_State ;
struct TYPE_10__ {char* string; scalar_t__ length; } ;
struct TYPE_11__ {TYPE_1__ s; } ;
struct TYPE_13__ {TYPE_2__ u; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (TYPE_3__*,char*,int ,int) ;
 int FUNC_1 (TYPE_3__*,char*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ,char*,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_5__*) ;

void FUNC_4(js_State *VAR_21)
{
 VAR_21->String_prototype->u.s.string = "";
 VAR_21->String_prototype->u.s.length = 0;

 FUNC_3(VAR_21, VAR_21->String_prototype);
 {
  FUNC_0(VAR_21, "String.prototype.toString", VAR_15, 0);
  FUNC_0(VAR_21, "String.prototype.valueOf", VAR_18, 0);
  FUNC_0(VAR_21, "String.prototype.charAt", VAR_2, 1);
  FUNC_0(VAR_21, "String.prototype.charCodeAt", VAR_3, 1);
  FUNC_0(VAR_21, "String.prototype.concat", VAR_4, 0);
  FUNC_0(VAR_21, "String.prototype.indexOf", VAR_5, 1);
  FUNC_0(VAR_21, "String.prototype.lastIndexOf", VAR_6, 1);
  FUNC_0(VAR_21, "String.prototype.localeCompare", VAR_7, 1);
  FUNC_0(VAR_21, "String.prototype.match", VAR_8, 1);
  FUNC_0(VAR_21, "String.prototype.replace", VAR_9, 2);
  FUNC_0(VAR_21, "String.prototype.search", VAR_10, 1);
  FUNC_0(VAR_21, "String.prototype.slice", VAR_11, 2);
  FUNC_0(VAR_21, "String.prototype.split", VAR_12, 2);
  FUNC_0(VAR_21, "String.prototype.substring", VAR_13, 2);
  FUNC_0(VAR_21, "String.prototype.toLowerCase", VAR_14, 0);
  FUNC_0(VAR_21, "String.prototype.toLocaleLowerCase", VAR_14, 0);
  FUNC_0(VAR_21, "String.prototype.toUpperCase", VAR_16, 0);
  FUNC_0(VAR_21, "String.prototype.toLocaleUpperCase", VAR_16, 0);


  FUNC_0(VAR_21, "String.prototype.trim", VAR_17, 0);
 }
 FUNC_2(VAR_21, VAR_19, VAR_20, "String", 0);
 {
  FUNC_0(VAR_21, "String.fromCharCode", VAR_1, 0);
 }
 FUNC_1(VAR_21, "String", VAR_0);
}
