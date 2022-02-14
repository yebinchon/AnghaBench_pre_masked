
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int db_name; } ;
struct TYPE_7__ {int ndbs; TYPE_2__* dbs; } ;
typedef int FileNameMap ;
typedef TYPE_1__ DbInfoArr ;
typedef TYPE_2__ DbInfo ;


 int * FUNC_0 (TYPE_2__*,TYPE_2__*,int*,char*,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int,char*) ;

void
FUNC_6(DbInfoArr *VAR_0, DbInfoArr *VAR_1,
      char *VAR_2, char *VAR_3, char *VAR_4)
{
 int VAR_5,
    VAR_6;


 for (VAR_5 = VAR_6 = 0;
   VAR_5 < VAR_0->ndbs;
   VAR_5++, VAR_6++)
 {
  DbInfo *VAR_7 = &VAR_0->dbs[VAR_5],
       *VAR_8 = ((void*)0);
  FileNameMap *VAR_9;
  int VAR_10;






  for (; VAR_6 < VAR_1->ndbs; VAR_6++)
  {
   VAR_8 = &VAR_1->dbs[VAR_6];
   if (FUNC_4(VAR_7->db_name, VAR_8->db_name) == 0)
    break;
  }

  if (VAR_6 >= VAR_1->ndbs)
   FUNC_1("old database \"%s\" not found in the new cluster\n",
      VAR_7->db_name);

  VAR_9 = FUNC_0(VAR_7, VAR_8, &VAR_10, VAR_2,
         VAR_3);
  if (VAR_10)
  {
   FUNC_3(VAR_9, VAR_10, VAR_8->db_name);

   FUNC_5(VAR_9, VAR_10, VAR_4);
  }

  FUNC_2(VAR_9);
 }

 return;
}
