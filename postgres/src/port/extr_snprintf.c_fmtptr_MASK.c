
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int failed; } ;
typedef TYPE_1__ PrintfTarget ;


 int FUNC_0 (char*,int,TYPE_1__*) ;
 int FUNC_1 (char*,char*,void*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, PrintfTarget *VAR_1)
{
 int VAR_2;
 char VAR_3[64];


 VAR_2 = FUNC_1(VAR_3, "%p", VAR_0);
 if (VAR_2 < 0)
  VAR_1->failed = 1;
 else
  FUNC_0(VAR_3, VAR_2, VAR_1);
}
