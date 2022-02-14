
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numFiles; struct TYPE_6__* files; } ;
typedef TYPE_1__ BufFile ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(BufFile *VAR_0)
{
 int VAR_1;


 FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->numFiles; VAR_1++)
  FUNC_1(VAR_0->files[VAR_1]);

 FUNC_2(VAR_0->files);
 FUNC_2(VAR_0);
}
