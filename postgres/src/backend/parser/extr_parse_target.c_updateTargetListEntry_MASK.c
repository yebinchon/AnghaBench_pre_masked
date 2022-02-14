
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* resname; scalar_t__ resno; int expr; } ;
typedef TYPE_1__ TargetEntry ;
typedef int ParseState ;
typedef int List ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,char*,int,int *,int) ;

void
FUNC_1(ParseState *VAR_1,
       TargetEntry *VAR_2,
       char *VAR_3,
       int VAR_4,
       List *VAR_5,
       int VAR_6)
{

 VAR_2->expr = FUNC_0(VAR_1,
           VAR_2->expr,
           VAR_0,
           VAR_3,
           VAR_4,
           VAR_5,
           VAR_6);







 VAR_2->resno = (AttrNumber) VAR_4;
 VAR_2->resname = VAR_3;
}
