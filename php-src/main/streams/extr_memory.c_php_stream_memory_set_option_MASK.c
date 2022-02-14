
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; size_t fsize; size_t fpos; size_t data; } ;
typedef TYPE_1__ php_stream_memory_data ;
struct TYPE_5__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (size_t,int ,int ) ;

__attribute__((used)) static int FUNC_2(php_stream *VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{
 php_stream_memory_data *VAR_8 = (php_stream_memory_data*)VAR_4->abstract;
 size_t VAR_9;

 switch(VAR_5) {
  case 130:
   switch (VAR_6) {
    case 128:
     return VAR_2;

    case 129:
     if (VAR_8->mode & VAR_3) {
      return VAR_0;
     }
     VAR_9 = *(size_t*)VAR_7;
     if (VAR_9 <= VAR_8->fsize) {
      if (VAR_9 < VAR_8->fpos) {
       VAR_8->fpos = VAR_9;
      }
     } else {
      VAR_8->data = FUNC_0(VAR_8->data, VAR_9);
      FUNC_1(VAR_8->data+VAR_8->fsize, 0, VAR_9 - VAR_8->fsize);
      VAR_8->fsize = VAR_9;
     }
     VAR_8->fsize = VAR_9;
     return VAR_2;
   }
  default:
   return VAR_1;
 }
}
