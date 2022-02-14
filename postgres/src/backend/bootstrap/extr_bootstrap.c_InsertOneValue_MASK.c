
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_4__ {int atttypid; } ;
struct TYPE_3__ {int rd_att; } ;
typedef int Oid ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int *,int*,char*,char*,int *,int *,int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int ,char*,int,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int * VAR_3 ;

void
FUNC_8(char *VAR_4, int VAR_5)
{
 Oid VAR_6;
 int16 VAR_7;
 bool VAR_8;
 char VAR_9;
 char VAR_10;
 Oid VAR_11;
 Oid VAR_12;
 Oid VAR_13;

 FUNC_0(VAR_5 >= 0 && VAR_5 < VAR_1);

 FUNC_5(VAR_0, "inserting column %d value \"%s\"", VAR_5, VAR_4);

 VAR_6 = FUNC_3(VAR_2->rd_att, VAR_5)->atttypid;

 FUNC_4(VAR_6,
        &VAR_7, &VAR_8, &VAR_9,
        &VAR_10, &VAR_11,
        &VAR_12, &VAR_13);

 VAR_3[VAR_5] = FUNC_1(VAR_12, VAR_4, VAR_11, -1);





 FUNC_6(VAR_0,
   (FUNC_7("inserted -> %s",
        FUNC_2(VAR_13, VAR_3[VAR_5]))));
}
