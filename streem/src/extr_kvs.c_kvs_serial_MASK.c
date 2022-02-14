
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int lock; int serial; } ;
typedef TYPE_1__ strm_kvs ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static uint64_t
FUNC_2(strm_kvs* VAR_0)
{
  uint64_t VAR_1;

  FUNC_0(&VAR_0->lock);
  VAR_1 = VAR_0->serial;
  FUNC_1(&VAR_0->lock);
  return VAR_1;
}
