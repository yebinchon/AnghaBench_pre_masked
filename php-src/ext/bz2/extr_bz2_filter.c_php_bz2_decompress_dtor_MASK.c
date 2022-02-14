
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int abstract; } ;
typedef TYPE_1__ php_stream_filter ;
struct TYPE_7__ {scalar_t__ status; int persistent; struct TYPE_7__* outbuf; struct TYPE_7__* inbuf; int strm; } ;
typedef TYPE_2__ php_bz2_filter_data ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_3(php_stream_filter *VAR_1)
{
 if (VAR_1 && FUNC_1(VAR_1->abstract)) {
  php_bz2_filter_data *VAR_2 = FUNC_1(VAR_1->abstract);
  if (VAR_2->status == VAR_0) {
   FUNC_0(&(VAR_2->strm));
  }
  FUNC_2(VAR_2->inbuf, VAR_2->persistent);
  FUNC_2(VAR_2->outbuf, VAR_2->persistent);
  FUNC_2(VAR_2, VAR_2->persistent);
 }
}
