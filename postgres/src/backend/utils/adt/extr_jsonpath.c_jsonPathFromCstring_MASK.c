
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int header; } ;
struct TYPE_12__ {scalar_t__ lax; int expr; } ;
struct TYPE_11__ {int len; scalar_t__ data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ JsonPathParseResult ;
typedef TYPE_3__ JsonPath ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_2__* FUNC_9 (char*,int) ;

__attribute__((used)) static Datum
FUNC_10(char *VAR_5, int VAR_6)
{
 JsonPathParseResult *VAR_7 = FUNC_9(VAR_5, VAR_6);
 JsonPath *VAR_8;
 StringInfoData VAR_9;

 FUNC_8(&VAR_9);
 FUNC_3(&VAR_9, 4 * VAR_6 );

 FUNC_2(&VAR_9, VAR_2);

 if (!VAR_7)
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("invalid input syntax for type %s: \"%s\"", "jsonpath",
      VAR_5)));

 FUNC_7(&VAR_9, VAR_7->expr, 0, 0);

 VAR_8 = (JsonPath *) VAR_9.data;
 FUNC_1(VAR_8, VAR_9.len);
 VAR_8->header = VAR_4;
 if (VAR_7->lax)
  VAR_8->header |= VAR_3;

 FUNC_0(VAR_8);
}
