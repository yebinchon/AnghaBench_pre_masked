
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frozen; int tabname; scalar_t__ isshared; } ;
typedef TYPE_1__ HTAB ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

void
FUNC_2(HTAB *VAR_1)
{
 if (VAR_1->isshared)
  FUNC_0(VAR_0, "cannot freeze shared hashtable \"%s\"", VAR_1->tabname);
 if (!VAR_1->frozen && FUNC_1(VAR_1))
  FUNC_0(VAR_0, "cannot freeze hashtable \"%s\" because it has active scans",
    VAR_1->tabname);
 VAR_1->frozen = 1;
}
