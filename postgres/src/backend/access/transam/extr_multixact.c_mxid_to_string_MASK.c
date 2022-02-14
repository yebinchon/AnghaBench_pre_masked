
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int status; int xid; } ;
struct TYPE_7__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ MultiXactMember ;
typedef int MultiXactId ;


 char* FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,int ,int,...) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

char *
FUNC_6(MultiXactId VAR_1, int VAR_2, MultiXactMember *VAR_3)
{
 static char *VAR_4 = ((void*)0);
 StringInfoData VAR_5;
 int VAR_6;

 if (VAR_4 != ((void*)0))
  FUNC_5(VAR_4);

 FUNC_3(&VAR_5);

 FUNC_1(&VAR_5, "%u %d[%u (%s)", VAR_1, VAR_2, VAR_3[0].xid,
      FUNC_4(VAR_3[0].status));

 for (VAR_6 = 1; VAR_6 < VAR_2; VAR_6++)
  FUNC_1(&VAR_5, ", %u (%s)", VAR_3[VAR_6].xid,
       FUNC_4(VAR_3[VAR_6].status));

 FUNC_2(&VAR_5, ']');
 VAR_4 = FUNC_0(VAR_0, VAR_5.data);
 FUNC_5(VAR_5.data);
 return VAR_4;
}
