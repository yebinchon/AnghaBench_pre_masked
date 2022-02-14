
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nkeys; int * rinfos; int ** eclass; } ;
typedef int StringInfo ;
typedef TYPE_1__ ForeignKeyOptInfo ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_8(StringInfo VAR_9, const ForeignKeyOptInfo *VAR_10)
{
 int VAR_11;

 FUNC_2("FOREIGNKEYOPTINFO");

 FUNC_4(VAR_0);
 FUNC_4(VAR_8);
 FUNC_1(VAR_4);
 FUNC_0(VAR_2, VAR_10->nkeys);
 FUNC_0(VAR_1, VAR_10->nkeys);
 FUNC_3(VAR_3, VAR_10->nkeys);
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);

 FUNC_6(VAR_9, " :eclass");
 for (VAR_11 = 0; VAR_11 < VAR_10->nkeys; VAR_11++)
  FUNC_5(VAR_9, " %d", (VAR_10->eclass[VAR_11] != ((void*)0)));
 FUNC_6(VAR_9, " :rinfos");
 for (VAR_11 = 0; VAR_11 < VAR_10->nkeys; VAR_11++)
  FUNC_5(VAR_9, " %d", FUNC_7(VAR_10->rinfos[VAR_11]));
}
