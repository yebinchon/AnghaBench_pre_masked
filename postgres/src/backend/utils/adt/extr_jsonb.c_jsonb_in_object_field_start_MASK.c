
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int parseState; int res; } ;
struct TYPE_6__ {char* val; int len; } ;
struct TYPE_7__ {TYPE_1__ string; } ;
struct TYPE_8__ {TYPE_2__ val; int type; } ;
typedef TYPE_3__ JsonbValue ;
typedef TYPE_4__ JsonbInState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,TYPE_3__*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, char *VAR_3, bool VAR_4)
{
 JsonbInState *VAR_5 = (JsonbInState *) VAR_2;
 JsonbValue VAR_6;

 FUNC_0(VAR_3 != ((void*)0));
 VAR_6.type = VAR_1;
 VAR_6.val.string.len = FUNC_1(FUNC_3(VAR_3));
 VAR_6.val.string.val = VAR_3;

 VAR_5->res = FUNC_2(&VAR_5->parseState, VAR_0, &VAR_6);
}
