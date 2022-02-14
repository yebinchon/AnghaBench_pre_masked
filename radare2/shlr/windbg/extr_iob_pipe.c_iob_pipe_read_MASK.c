
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,int *,int const,int ) ;
 int FUNC_4 (int,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, uint8_t *VAR_3, const uint64_t VAR_4, const int VAR_5) {
 int VAR_6;
 fd_set VAR_7;
 int VAR_8 = (int) (size_t) VAR_2;
 for (;;) {
  FUNC_2 (&VAR_7);
  FUNC_1 (VAR_8, &VAR_7);
  VAR_6 = FUNC_4 (VAR_8 + 1, &VAR_7, ((void*)0), ((void*)0), ((void*)0));
  if (VAR_6 < 1) {
   if (VAR_1 == VAR_0) continue;
   return -1;
  }
  if (FUNC_0 (VAR_8, &VAR_7)) {
   return FUNC_3 ((int) (size_t) VAR_2, VAR_3, VAR_4, 0);
  }
 }
 return VAR_0;
}
