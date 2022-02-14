
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int abstract; } ;
typedef TYPE_1__ php_stream_filter ;
struct TYPE_6__ {int persistent; } ;
typedef TYPE_2__ php_chunked_filter_data ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(php_stream_filter *VAR_0)
{
 if (VAR_0 && FUNC_0(VAR_0->abstract)) {
  php_chunked_filter_data *VAR_1 = (php_chunked_filter_data *) FUNC_0(VAR_0->abstract);
  FUNC_1(VAR_1, VAR_1->persistent);
 }
}
