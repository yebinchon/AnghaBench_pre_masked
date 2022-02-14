
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bufstart; scalar_t__ is_tsquery; } ;
typedef TYPE_1__* TSVectorParseState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(TSVectorParseState VAR_2)
{
 FUNC_0(VAR_1,
   (FUNC_1(VAR_0),
    VAR_2->is_tsquery ?
    FUNC_2("syntax error in tsquery: \"%s\"", VAR_2->bufstart) :
    FUNC_2("syntax error in tsvector: \"%s\"", VAR_2->bufstart)));
}
