
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nstime_t ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool
FUNC_4(nstime_t *VAR_0) {
 nstime_t VAR_1;

 FUNC_1(&VAR_1, VAR_0);
 FUNC_2(VAR_0);


 if (FUNC_3(FUNC_0(&VAR_1, VAR_0) > 0)) {
  FUNC_1(VAR_0, &VAR_1);
  return 1;
 }

 return 0;
}
