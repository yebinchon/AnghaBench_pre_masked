
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int uint8_t ;
typedef int php_stream_filter_ops ;
typedef int php_stream_filter ;
struct TYPE_4__ {int offset; scalar_t__ consumed; int persistent; } ;
typedef TYPE_1__ php_consumed_filter_data ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int,int ) ;
 int * FUNC_1 (int const*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static php_stream_filter *FUNC_3(const char *VAR_1, zval *VAR_2, uint8_t VAR_3)
{
 const php_stream_filter_ops *VAR_4 = ((void*)0);
 php_consumed_filter_data *VAR_5;

 if (FUNC_2(VAR_1, "consumed")) {
  return ((void*)0);
 }


 VAR_5 = FUNC_0(1, sizeof(php_consumed_filter_data), VAR_3);
 VAR_5->persistent = VAR_3;
 VAR_5->consumed = 0;
 VAR_5->offset = ~0;
 VAR_4 = &VAR_0;

 return FUNC_1(VAR_4, VAR_5, VAR_3);
}
