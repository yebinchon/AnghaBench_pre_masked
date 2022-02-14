
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int varprefix; int prettyFlags; int indentLevel; int special_exprkind; int wrapColumn; void* windowTList; void* windowClause; int * namespaces; TYPE_2__* buf; } ;
typedef TYPE_1__ deparse_context ;
struct TYPE_6__ {char* data; } ;
typedef TYPE_2__ StringInfoData ;
typedef int Node ;
typedef int List ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static char *
FUNC_2(Node *VAR_3, List *VAR_4,
        bool VAR_5, bool VAR_6,
        int VAR_7, int VAR_8)
{
 StringInfoData VAR_9;
 deparse_context VAR_10;

 FUNC_1(&VAR_9);
 VAR_10.buf = &VAR_9;
 VAR_10.namespaces = VAR_4;
 VAR_10.windowClause = VAR_1;
 VAR_10.windowTList = VAR_1;
 VAR_10.varprefix = VAR_5;
 VAR_10.prettyFlags = VAR_7;
 VAR_10.wrapColumn = VAR_2;
 VAR_10.indentLevel = VAR_8;
 VAR_10.special_exprkind = VAR_0;

 FUNC_0(VAR_3, &VAR_10, VAR_6);

 return VAR_9.data;
}
