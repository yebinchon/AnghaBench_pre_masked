
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int tail; } ;
struct TYPE_7__ {TYPE_4__ towork; int curSub; } ;
struct TYPE_6__ {int type; char* lemm; int lenlemm; } ;
typedef TYPE_1__ ParsedLex ;
typedef TYPE_2__ LexizeData ;


 int FUNC_0 (TYPE_4__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(LexizeData *VAR_0, int VAR_1, char *VAR_2, int VAR_3)
{
 ParsedLex *VAR_4 = (ParsedLex *) FUNC_1(sizeof(ParsedLex));

 VAR_4->type = VAR_1;
 VAR_4->lemm = VAR_2;
 VAR_4->lenlemm = VAR_3;
 FUNC_0(&VAR_0->towork, VAR_4);
 VAR_0->curSub = VAR_0->towork.tail;
}
