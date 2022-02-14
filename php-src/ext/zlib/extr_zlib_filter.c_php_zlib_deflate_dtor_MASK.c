
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int persistent; struct TYPE_6__* outbuf; struct TYPE_6__* inbuf; int strm; } ;
typedef TYPE_1__ php_zlib_filter_data ;
struct TYPE_7__ {int abstract; } ;
typedef TYPE_2__ php_stream_filter ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(php_stream_filter *VAR_0)
{
 if (VAR_0 && FUNC_0(VAR_0->abstract)) {
  php_zlib_filter_data *VAR_1 = FUNC_0(VAR_0->abstract);
  FUNC_1(&(VAR_1->strm));
  FUNC_2(VAR_1->inbuf, VAR_1->persistent);
  FUNC_2(VAR_1->outbuf, VAR_1->persistent);
  FUNC_2(VAR_1, VAR_1->persistent);
 }
}
