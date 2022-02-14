
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int DefaultDacl; } ;
typedef TYPE_1__ TOKEN_USER ;
typedef TYPE_1__ TOKEN_PRIVILEGES ;
typedef TYPE_1__ TOKEN_PRIMARY_GROUP ;
typedef TYPE_1__ TOKEN_OWNER ;
typedef TYPE_1__ TOKEN_GROUPS ;
typedef TYPE_1__ TOKEN_DEFAULT_DACL ;
typedef TYPE_1__* PTOKEN_USER ;
typedef TYPE_1__* PTOKEN_PRIVILEGES ;
typedef TYPE_1__* PTOKEN_PRIMARY_GROUP ;
typedef TYPE_1__* PTOKEN_OWNER ;
typedef TYPE_1__* PTOKEN_GROUPS ;
typedef TYPE_1__* PTOKEN_DEFAULT_DACL ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(HANDLE VAR_6)
{
 TOKEN_USER* VAR_7 = (PTOKEN_USER) FUNC_2(VAR_6, VAR_5);
 TOKEN_GROUPS* VAR_8 = (PTOKEN_GROUPS) FUNC_2(VAR_6, VAR_1);
 TOKEN_OWNER* VAR_9 = (PTOKEN_OWNER) FUNC_2(VAR_6, VAR_2);
 TOKEN_PRIMARY_GROUP* VAR_10 = (PTOKEN_PRIMARY_GROUP) FUNC_2(VAR_6, VAR_3);
 TOKEN_PRIVILEGES* VAR_11 = (PTOKEN_PRIVILEGES) FUNC_2(VAR_6, VAR_4);
 TOKEN_DEFAULT_DACL* VAR_12 = (PTOKEN_DEFAULT_DACL) FUNC_2(VAR_6, VAR_0);

 FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10);

 FUNC_0(VAR_12->DefaultDacl);

 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
 FUNC_3(VAR_9);
 FUNC_3(VAR_10);
 FUNC_3(VAR_11);
 FUNC_3(VAR_12);
}
