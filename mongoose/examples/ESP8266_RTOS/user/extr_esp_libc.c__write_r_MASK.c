
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _reent {int dummy; } ;
typedef size_t _ssize_t ;


 int FUNC_0 (char) ;

_ssize_t FUNC_1(struct _reent *VAR_0, int VAR_1, void *VAR_2, size_t VAR_3) {
  if (VAR_1 == 1 || VAR_1 == 2) {
    size_t VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
      FUNC_0(((char *) VAR_2)[VAR_4]);
    }
    return VAR_3;
  }
  return -1;
}
