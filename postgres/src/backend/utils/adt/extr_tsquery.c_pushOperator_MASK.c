
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int8 ;
typedef int int16 ;
struct TYPE_6__ {int distance; scalar_t__ oper; int type; } ;
struct TYPE_5__ {int polstr; } ;
typedef TYPE_1__* TSQueryParserState ;
typedef TYPE_2__ QueryOperator ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3(TSQueryParserState VAR_5, int8 VAR_6, int16 VAR_7)
{
 QueryOperator *VAR_8;

 FUNC_0(VAR_6 == VAR_1 || VAR_6 == VAR_0 || VAR_6 == VAR_2 || VAR_6 == VAR_3);

 VAR_8 = (QueryOperator *) FUNC_2(sizeof(QueryOperator));
 VAR_8->type = VAR_4;
 VAR_8->oper = VAR_6;
 VAR_8->distance = (VAR_6 == VAR_3) ? VAR_7 : 0;


 VAR_5->polstr = FUNC_1(VAR_8, VAR_5->polstr);
}
