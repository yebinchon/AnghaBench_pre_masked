
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int strm_value ;
struct TYPE_4__ {scalar_t__ mode; } ;
typedef TYPE_1__ strm_stream ;
typedef int strm_callback ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(strm_stream* VAR_2, strm_callback VAR_3, strm_value VAR_4)
{
  if (VAR_2->mode == VAR_1 || VAR_2->mode == VAR_0)
    return;
  FUNC_0(VAR_2, FUNC_1(VAR_3, VAR_4));
}
