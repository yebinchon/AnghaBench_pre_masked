
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; char* realname; } ;
typedef TYPE_1__ RFlagItem ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(RFlagItem *VAR_0, char *VAR_1) {
 FUNC_0 (VAR_0);
 VAR_0->name = VAR_1;
 FUNC_1 (VAR_0);
 VAR_0->realname = VAR_0->name;
}
