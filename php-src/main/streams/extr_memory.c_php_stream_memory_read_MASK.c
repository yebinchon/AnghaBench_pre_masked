
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_4__ {scalar_t__ fpos; scalar_t__ fsize; int * data; } ;
typedef TYPE_1__ php_stream_memory_data ;
struct TYPE_5__ {int eof; scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(php_stream *VAR_0, char *VAR_1, size_t VAR_2)
{
 php_stream_memory_data *VAR_3 = (php_stream_memory_data*)VAR_0->abstract;
 FUNC_0(VAR_3 != ((void*)0));

 if (VAR_3->fpos == VAR_3->fsize) {
  VAR_0->eof = 1;
  VAR_2 = 0;
 } else {
  if (VAR_3->fpos + VAR_2 >= VAR_3->fsize) {
   VAR_2 = VAR_3->fsize - VAR_3->fpos;
  }
  if (VAR_2) {
   FUNC_0(VAR_3->data!= ((void*)0));
   FUNC_0(VAR_1!= ((void*)0));
   FUNC_1(VAR_1, VAR_3->data+VAR_3->fpos, VAR_2);
   VAR_3->fpos += VAR_2;
  }
 }
 return VAR_2;
}
