
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_4__ {int mode; scalar_t__ fpos; scalar_t__ fsize; char* data; } ;
typedef TYPE_1__ php_stream_memory_data ;
struct TYPE_5__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(php_stream *VAR_2, const char *VAR_3, size_t VAR_4)
{
 php_stream_memory_data *VAR_5 = (php_stream_memory_data*)VAR_2->abstract;
 FUNC_0(VAR_5 != ((void*)0));

 if (VAR_5->mode & VAR_1) {
  return (ssize_t) -1;
 } else if (VAR_5->mode & VAR_0) {
  VAR_5->fpos = VAR_5->fsize;
 }
 if (VAR_5->fpos + VAR_4 > VAR_5->fsize) {
  char *VAR_6;
  if (!VAR_5->data) {
   VAR_6 = FUNC_1(VAR_5->fpos + VAR_4);
  } else {
   VAR_6 = FUNC_2(VAR_5->data, VAR_5->fpos + VAR_4);
  }
  VAR_5->data = VAR_6;
  VAR_5->fsize = VAR_5->fpos + VAR_4;
 }
 if (!VAR_5->data)
  VAR_4 = 0;
 if (VAR_4) {
  FUNC_0(VAR_3!= ((void*)0));
  FUNC_3(VAR_5->data+VAR_5->fpos, (char*)VAR_3, VAR_4);
  VAR_5->fpos += VAR_4;
 }
 return VAR_4;
}
