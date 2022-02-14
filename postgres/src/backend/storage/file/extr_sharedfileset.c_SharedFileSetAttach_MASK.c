
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dsm_segment ;
struct TYPE_4__ {scalar_t__ refcnt; int mutex; } ;
typedef TYPE_1__ SharedFileSet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int ) ;

void
FUNC_7(SharedFileSet *VAR_3, dsm_segment *VAR_4)
{
 bool VAR_5;

 FUNC_1(&VAR_3->mutex);
 if (VAR_3->refcnt == 0)
  VAR_5 = 0;
 else
 {
  ++VAR_3->refcnt;
  VAR_5 = 1;
 }
 FUNC_2(&VAR_3->mutex);

 if (!VAR_5)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("could not attach to a SharedFileSet that is already destroyed")));


 FUNC_6(VAR_4, VAR_2, FUNC_0(VAR_3));
}
