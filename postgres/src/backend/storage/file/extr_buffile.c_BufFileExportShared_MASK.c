
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int readOnly; int * fileset; } ;
typedef TYPE_1__ BufFile ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(BufFile *VAR_0)
{

 FUNC_0(VAR_0->fileset != ((void*)0));


 FUNC_0(!VAR_0->readOnly);

 FUNC_1(VAR_0);
 VAR_0->readOnly = 1;
}
