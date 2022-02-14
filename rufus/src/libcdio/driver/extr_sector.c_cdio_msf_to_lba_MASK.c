
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int f; int s; int m; } ;
typedef TYPE_1__ msf_t ;
typedef scalar_t__ lba_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

lba_t
FUNC_2 (const msf_t *VAR_2)
{
  uint32_t VAR_3 = 0;

  FUNC_0 (VAR_2 != 0);

  VAR_3 = FUNC_1 (VAR_2->m);
  VAR_3 *= VAR_1;

  VAR_3 += FUNC_1 (VAR_2->s);
  VAR_3 *= VAR_0;

  VAR_3 += FUNC_1 (VAR_2->f);

  return VAR_3;
}
