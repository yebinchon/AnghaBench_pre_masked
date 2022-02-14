
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int xmin; } ;
struct TYPE_4__ {int xmin; } ;
typedef TYPE_1__* Snapshot ;


 int * VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(void)
{
 Snapshot VAR_6;

 if (VAR_0 != ((void*)0))
  return;

 if (FUNC_3(&VAR_3))
 {
  VAR_2->xmin = VAR_1;
  return;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_5,
          FUNC_2(&VAR_3));

 if (FUNC_0(VAR_2->xmin, VAR_6->xmin))
  VAR_2->xmin = VAR_6->xmin;
}
