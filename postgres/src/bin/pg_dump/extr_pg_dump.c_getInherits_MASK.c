
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void* inhparent; void* inhrelid; } ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_2__ InhInfo ;
typedef int Archive ;


 int * FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 void* FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int) ;

InhInfo *
FUNC_10(Archive *VAR_1, int *VAR_2)
{
 PGresult *VAR_3;
 int VAR_4;
 int VAR_5;
 PQExpBuffer VAR_6 = FUNC_7();
 InhInfo *VAR_7;

 int VAR_8;
 int VAR_9;





 FUNC_5(VAR_6, "SELECT inhrelid, inhparent FROM pg_inherits");

 VAR_3 = FUNC_0(VAR_1, VAR_6->data, VAR_0);

 VAR_4 = FUNC_4(VAR_3);

 *VAR_2 = VAR_4;

 VAR_7 = (InhInfo *) FUNC_9(VAR_4 * sizeof(InhInfo));

 VAR_8 = FUNC_2(VAR_3, "inhrelid");
 VAR_9 = FUNC_2(VAR_3, "inhparent");

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  VAR_7[VAR_5].inhrelid = FUNC_6(FUNC_3(VAR_3, VAR_5, VAR_8));
  VAR_7[VAR_5].inhparent = FUNC_6(FUNC_3(VAR_3, VAR_5, VAR_9));
 }

 FUNC_1(VAR_3);

 FUNC_8(VAR_6);

 return VAR_7;
}
