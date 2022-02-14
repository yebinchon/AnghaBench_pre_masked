
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (struct tm*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(int VAR_0)
{
  static int VAR_1 = 1;

  if (VAR_0 || VAR_1 == 1) {
    time_t VAR_2;
    struct tm VAR_3;

    VAR_2 = FUNC_3(((void*)0));
    FUNC_1(&VAR_2, &VAR_3);
    VAR_1 = FUNC_0(VAR_2, FUNC_2(&VAR_3));
  }
  return VAR_1;
}
