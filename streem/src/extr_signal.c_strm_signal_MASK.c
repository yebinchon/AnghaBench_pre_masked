
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_sighandler_t ;
typedef scalar_t__ sighandler_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,void*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;

int
FUNC_2(int VAR_6, strm_sighandler_t VAR_7, void* VAR_8)
{
  sighandler_t VAR_9 = FUNC_1(VAR_6, VAR_1);

  if (VAR_9 == VAR_0) return VAR_2;
  if (VAR_9 && VAR_9 != VAR_4) {
    if (FUNC_0(VAR_6, VAR_5, (void*)VAR_9) == VAR_2)
      return VAR_2;
  }
  if (FUNC_0(VAR_6, VAR_7, VAR_8) == VAR_2)
    return VAR_2;
  VAR_9 = FUNC_1(VAR_6, VAR_4);
  if (VAR_9 == VAR_0) return VAR_2;
  return VAR_3;
}
