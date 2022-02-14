
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 float VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,char*,scalar_t__,float) ;
 scalar_t__ FUNC_3 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int VAR_7 ;

void
FUNC_10 (char * VAR_8, int VAR_9)
{
  pthread_t VAR_10;




  FUNC_1(FUNC_6(&VAR_5, &VAR_4) == 0);
  FUNC_1(FUNC_7(&VAR_5) == 0);
  FUNC_1(FUNC_3(&VAR_10, ((void*)0), VAR_7, 0) == 0);
  FUNC_1(FUNC_4(VAR_10, ((void*)0)) == 0);
  FUNC_1(FUNC_8(&VAR_5) == 0);
  FUNC_1(FUNC_5(&VAR_5) == 0);

  VAR_3 = FUNC_0(VAR_1, VAR_2) - VAR_6;

  FUNC_2( "%-45s %15ld %15.3f\n",
     VAR_8,
          VAR_3,
          (float) VAR_3 * 1E3 / VAR_0);
}
