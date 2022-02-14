
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
struct TYPE_7__ {int objsubid; void* objoid; void* classoid; void* provider; void* label; } ;
typedef TYPE_1__ SecLabelItem ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGresult ;
typedef int Archive ;


 int * FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (void*) ;
 TYPE_2__* FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(Archive *VAR_1, SecLabelItem **VAR_2)
{
 PGresult *VAR_3;
 PQExpBuffer VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 SecLabelItem *VAR_12;

 VAR_4 = FUNC_7();

 FUNC_4(VAR_4,
       "SELECT label, provider, classoid, objoid, objsubid "
       "FROM pg_catalog.pg_seclabel "
       "ORDER BY classoid, objoid, objsubid");

 VAR_3 = FUNC_0(VAR_1, VAR_4->data, VAR_0);


 VAR_5 = FUNC_1(VAR_3, "label");
 VAR_6 = FUNC_1(VAR_3, "provider");
 VAR_7 = FUNC_1(VAR_3, "classoid");
 VAR_8 = FUNC_1(VAR_3, "objoid");
 VAR_9 = FUNC_1(VAR_3, "objsubid");

 VAR_10 = FUNC_3(VAR_3);

 VAR_12 = (SecLabelItem *) FUNC_9(VAR_10 * sizeof(SecLabelItem));

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
 {
  VAR_12[VAR_11].label = FUNC_2(VAR_3, VAR_11, VAR_5);
  VAR_12[VAR_11].provider = FUNC_2(VAR_3, VAR_11, VAR_6);
  VAR_12[VAR_11].classoid = FUNC_6(FUNC_2(VAR_3, VAR_11, VAR_7));
  VAR_12[VAR_11].objoid = FUNC_6(FUNC_2(VAR_3, VAR_11, VAR_8));
  VAR_12[VAR_11].objsubid = FUNC_5(FUNC_2(VAR_3, VAR_11, VAR_9));
 }


 FUNC_8(VAR_4);

 *VAR_2 = VAR_12;
 return VAR_10;
}
