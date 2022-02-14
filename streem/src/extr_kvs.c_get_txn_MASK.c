
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int strm_value ;
struct TYPE_3__ {int tv; } ;
typedef TYPE_1__ strm_txn ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static strm_txn*
FUNC_1(int VAR_1, strm_value* VAR_2)
{
  strm_txn* VAR_3;

  if (VAR_1 == 0) return ((void*)0);
  VAR_3 = (strm_txn*)FUNC_0(VAR_2[0], VAR_0);
  if (!VAR_3->tv) {
    return ((void*)0);
  }
  return VAR_3;
}
