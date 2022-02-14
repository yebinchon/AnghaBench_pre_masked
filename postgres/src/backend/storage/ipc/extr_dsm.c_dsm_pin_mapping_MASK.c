
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * resowner; } ;
typedef TYPE_1__ dsm_segment ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(dsm_segment *VAR_0)
{
 if (VAR_0->resowner != ((void*)0))
 {
  FUNC_0(VAR_0->resowner, VAR_0);
  VAR_0->resowner = ((void*)0);
 }
}
