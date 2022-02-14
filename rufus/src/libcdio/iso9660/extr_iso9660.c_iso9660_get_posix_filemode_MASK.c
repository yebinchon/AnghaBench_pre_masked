
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_5__ {int attributes; } ;
struct TYPE_7__ {scalar_t__ b3_rock; } ;
struct TYPE_6__ {TYPE_1__ xa; scalar_t__ b_xa; TYPE_3__ rr; } ;
typedef TYPE_2__ iso9660_stat_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

mode_t
FUNC_2(const iso9660_stat_t *VAR_1)
{
  mode_t VAR_2 = 0;






  if (VAR_1->b_xa) {
    return FUNC_1(VAR_1->xa.attributes);
  }
  return VAR_2;
}
