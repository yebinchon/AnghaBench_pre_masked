
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int header; } ;
struct TYPE_11__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_1__* StringInfo ;
typedef int JsonPathItem ;
typedef TYPE_3__ JsonPath ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,int *,int,int) ;

__attribute__((used)) static char *
FUNC_5(StringInfo VAR_1, JsonPath *VAR_2, int VAR_3)
{
 StringInfoData VAR_4;
 JsonPathItem VAR_5;

 if (!VAR_1)
 {
  VAR_1 = &VAR_4;
  FUNC_2(VAR_1);
 }
 FUNC_1(VAR_1, VAR_3);

 if (!(VAR_2->header & VAR_0))
  FUNC_0(VAR_1, "strict ", 7);

 FUNC_3(&VAR_5, VAR_2);
 FUNC_4(VAR_1, &VAR_5, 0, 1);

 return VAR_1->data;
}
