
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ p; scalar_t__ x; } ;
typedef TYPE_1__ pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ,void*) ;
 int FUNC_4 (TYPE_1__,TYPE_1__) ;
 scalar_t__ FUNC_5 (TYPE_1__,void**) ;
 int VAR_3 ;

int
FUNC_6()
{
  pthread_t VAR_4,
            VAR_5;
  pthread_attr_t VAR_6;
  void * VAR_7 = ((void*)0);
  int VAR_8;

  FUNC_0(FUNC_1(&VAR_6) == 0);;
  FUNC_0(FUNC_2(&VAR_6, VAR_1) == 0);

  VAR_3 = 0;
  FUNC_0(FUNC_3(&VAR_4, &VAR_6, VAR_2, ((void*)0)) == 0);
  FUNC_0(FUNC_5(VAR_4, &VAR_7) == 0);;
  FUNC_0((int)(size_t)VAR_7 == 0);
  FUNC_0(VAR_3 == 1);
  VAR_5 = VAR_4;

  for (VAR_8 = 1; VAR_8 < VAR_0; VAR_8++)
    {
      VAR_3 = 0;
      FUNC_0(FUNC_3(&VAR_4, &VAR_6, VAR_2, (void *)(size_t)VAR_8) == 0);
      FUNC_5(VAR_4, &VAR_7);
      FUNC_0((int)(size_t) VAR_7 == VAR_8);
      FUNC_0(VAR_3 == 1);

      FUNC_0(!FUNC_4(VAR_4, VAR_5));

      FUNC_0(VAR_4.p == VAR_5.p);

      FUNC_0(VAR_4.x == VAR_5.x+1);
      VAR_5 = VAR_4;
    }

  return 0;
}
