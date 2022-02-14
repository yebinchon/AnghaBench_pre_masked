
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* rd_rel; } ;
struct TYPE_6__ {int relnamespace; } ;
typedef TYPE_2__* Relation ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (char*,int ) ;

__attribute__((used)) static char *
FUNC_5(Relation VAR_0)
{
 char *VAR_1;
 char *VAR_2;


 if (FUNC_2(FUNC_1(VAR_0)))
  VAR_1 = ((void*)0);
 else
  VAR_1 = FUNC_3(VAR_0->rd_rel->relnamespace);

 VAR_2 = FUNC_4(VAR_1, FUNC_0(VAR_0));

 return VAR_2;
}
