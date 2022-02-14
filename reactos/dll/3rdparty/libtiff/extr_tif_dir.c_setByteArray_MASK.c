
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t tmsize_t ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (void*,void*,size_t) ;

__attribute__((used)) static void
FUNC_3(void** VAR_0, void* VAR_1, size_t VAR_2, size_t VAR_3)
{
 if (*VAR_0) {
  FUNC_0(*VAR_0);
  *VAR_0 = 0;
 }
 if (VAR_1) {
  tmsize_t VAR_4 = (tmsize_t)(VAR_2 * VAR_3);
  if (VAR_3 && VAR_4 / VAR_3 == VAR_2)
   *VAR_0 = (void*) FUNC_1(VAR_4);
  if (*VAR_0)
   FUNC_2(*VAR_0, VAR_1, VAR_4);
 }
}
