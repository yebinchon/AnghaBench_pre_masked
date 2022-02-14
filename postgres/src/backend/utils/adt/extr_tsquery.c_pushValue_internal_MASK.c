
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ pg_crc32 ;
typedef scalar_t__ int32 ;
struct TYPE_6__ {int weight; int prefix; int length; int distance; scalar_t__ valcrc; int type; } ;
struct TYPE_5__ {int polstr; int buffer; } ;
typedef TYPE_1__* TSQueryParserState ;
typedef TYPE_2__ QueryOperand ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(TSQueryParserState VAR_5, pg_crc32 VAR_6, int VAR_7, int VAR_8, int VAR_9, bool VAR_10)
{
 QueryOperand *VAR_11;

 if (VAR_7 >= VAR_3)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("value is too big in tsquery: \"%s\"",
      VAR_5->buffer)));
 if (VAR_8 >= VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("operand is too long in tsquery: \"%s\"",
      VAR_5->buffer)));

 VAR_11 = (QueryOperand *) FUNC_4(sizeof(QueryOperand));
 VAR_11->type = VAR_4;
 VAR_11->weight = VAR_9;
 VAR_11->prefix = VAR_10;
 VAR_11->valcrc = (int32) VAR_6;
 VAR_11->length = VAR_8;
 VAR_11->distance = VAR_7;

 VAR_5->polstr = FUNC_3(VAR_11, VAR_5->polstr);
}
