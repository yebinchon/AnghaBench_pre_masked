
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dsm_segment ;
struct TYPE_3__ {scalar_t__ refcnt; int mutex; } ;
typedef TYPE_1__ SharedFileSet ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(dsm_segment *VAR_0, Datum VAR_1)
{
 bool VAR_2 = 0;
 SharedFileSet *VAR_3 = (SharedFileSet *) FUNC_1(VAR_1);

 FUNC_3(&VAR_3->mutex);
 FUNC_0(VAR_3->refcnt > 0);
 if (--VAR_3->refcnt == 0)
  VAR_2 = 1;
 FUNC_4(&VAR_3->mutex);






 if (VAR_2)
  FUNC_2(VAR_3);
}
