
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (char*,char*,char*) ;

void
FUNC_4(void)
{
 char VAR_3[VAR_1];

 FUNC_0(VAR_2 != ((void*)0));

 FUNC_3(VAR_3, "pg_replslot/%s", FUNC_1(VAR_2->data.name));
 FUNC_2(VAR_2, VAR_3, VAR_0);
}
