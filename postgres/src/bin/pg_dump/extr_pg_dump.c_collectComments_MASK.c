
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int objsubid; void* objoid; void* classoid; int descr; } ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_2__ CommentItem ;
typedef int Archive ;


 int * FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(Archive *VAR_1, CommentItem **VAR_2)
{
 PGresult *VAR_3;
 PQExpBuffer VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 CommentItem *VAR_11;

 VAR_4 = FUNC_7();

 FUNC_4(VAR_4, "SELECT description, classoid, objoid, objsubid "
       "FROM pg_catalog.pg_description "
       "ORDER BY classoid, objoid, objsubid");

 VAR_3 = FUNC_0(VAR_1, VAR_4->data, VAR_0);



 VAR_5 = FUNC_1(VAR_3, "description");
 VAR_6 = FUNC_1(VAR_3, "classoid");
 VAR_7 = FUNC_1(VAR_3, "objoid");
 VAR_8 = FUNC_1(VAR_3, "objsubid");

 VAR_9 = FUNC_3(VAR_3);

 VAR_11 = (CommentItem *) FUNC_9(VAR_9 * sizeof(CommentItem));

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
 {
  VAR_11[VAR_10].descr = FUNC_2(VAR_3, VAR_10, VAR_5);
  VAR_11[VAR_10].classoid = FUNC_6(FUNC_2(VAR_3, VAR_10, VAR_6));
  VAR_11[VAR_10].objoid = FUNC_6(FUNC_2(VAR_3, VAR_10, VAR_7));
  VAR_11[VAR_10].objsubid = FUNC_5(FUNC_2(VAR_3, VAR_10, VAR_8));
 }


 FUNC_8(VAR_4);

 *VAR_2 = VAR_11;
 return VAR_9;
}
