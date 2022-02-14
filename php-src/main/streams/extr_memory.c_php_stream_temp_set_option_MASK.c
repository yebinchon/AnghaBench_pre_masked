
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {int innerstream; int meta; } ;
typedef TYPE_1__ php_stream_temp_data ;
struct TYPE_5__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,void*) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(php_stream *VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{
 php_stream_temp_data *VAR_8 = (php_stream_temp_data*)VAR_4->abstract;

 switch(VAR_5) {
  case 128:
   if (FUNC_2(VAR_8->meta) != VAR_0) {
    FUNC_4(FUNC_1((zval*)VAR_7), FUNC_0(VAR_8->meta), VAR_3);
   }
   return VAR_2;
  default:
   if (VAR_8->innerstream) {
    return FUNC_3(VAR_8->innerstream, VAR_5, VAR_6, VAR_7);
   }
   return VAR_1;
 }
}
