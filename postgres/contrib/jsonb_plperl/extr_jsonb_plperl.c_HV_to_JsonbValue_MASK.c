
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; int val; } ;
struct TYPE_8__ {TYPE_1__ string; } ;
struct TYPE_9__ {TYPE_2__ val; int type; } ;
typedef int SV ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonbParseState ;
typedef int I32 ;
typedef int HV ;


 int FUNC_0 (int *,int **,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char**,int *) ;
 int VAR_4 ;
 int FUNC_3 (char*,int ) ;
 TYPE_3__* FUNC_4 (int **,int ,TYPE_3__*) ;

__attribute__((used)) static JsonbValue *
FUNC_5(HV *VAR_5, JsonbParseState **VAR_6)
{
 VAR_3;
 JsonbValue VAR_7;
 SV *VAR_8;
 char *VAR_9;
 I32 VAR_10;

 VAR_7.type = VAR_4;

 FUNC_4(VAR_6, VAR_0, ((void*)0));

 (void) FUNC_1(VAR_5);

 while ((VAR_8 = FUNC_2(VAR_5, &VAR_9, &VAR_10)))
 {
  VAR_7.val.string.val = FUNC_3(VAR_9, VAR_10);
  VAR_7.val.string.len = VAR_10;
  FUNC_4(VAR_6, VAR_2, &VAR_7);
  (void) FUNC_0(VAR_8, VAR_6, 0);
 }

 return FUNC_4(VAR_6, VAR_1, ((void*)0));
}
