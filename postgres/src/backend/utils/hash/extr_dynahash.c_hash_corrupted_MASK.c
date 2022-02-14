
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tabname; scalar_t__ isshared; } ;
typedef TYPE_1__ HTAB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_1(HTAB *VAR_2)
{




 if (VAR_2->isshared)
  FUNC_0(VAR_1, "hash table \"%s\" corrupted", VAR_2->tabname);
 else
  FUNC_0(VAR_0, "hash table \"%s\" corrupted", VAR_2->tabname);
}
