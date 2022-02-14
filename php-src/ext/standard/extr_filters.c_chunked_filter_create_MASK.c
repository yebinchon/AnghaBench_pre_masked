
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int uint8_t ;
typedef int php_stream_filter_ops ;
typedef int php_stream_filter ;
struct TYPE_3__ {int persistent; scalar_t__ chunk_size; int state; } ;
typedef TYPE_1__ php_chunked_filter_data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 int * FUNC_1 (int const*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static php_stream_filter *FUNC_3(const char *VAR_2, zval *VAR_3, uint8_t VAR_4)
{
 const php_stream_filter_ops *VAR_5 = ((void*)0);
 php_chunked_filter_data *VAR_6;

 if (FUNC_2(VAR_2, "dechunk")) {
  return ((void*)0);
 }


 VAR_6 = (php_chunked_filter_data *)FUNC_0(1, sizeof(php_chunked_filter_data), VAR_4);
 VAR_6->state = VAR_0;
 VAR_6->chunk_size = 0;
 VAR_6->persistent = VAR_4;
 VAR_5 = &VAR_1;

 return FUNC_1(VAR_5, VAR_6, VAR_4);
}
