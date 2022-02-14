
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* rd_rel; } ;
struct TYPE_8__ {char relreplident; } ;
typedef int StringInfo ;
typedef TYPE_2__* Relation ;


 int FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*) ;

void
FUNC_8(StringInfo VAR_0, Relation VAR_1)
{
 char *VAR_2;

 FUNC_5(VAR_0, 'R');


 FUNC_6(VAR_0, FUNC_2(VAR_1));


 FUNC_4(VAR_0, FUNC_0(VAR_1));
 VAR_2 = FUNC_1(VAR_1);
 FUNC_7(VAR_0, VAR_2);


 FUNC_5(VAR_0, VAR_1->rd_rel->relreplident);


 FUNC_3(VAR_0, VAR_1);
}
