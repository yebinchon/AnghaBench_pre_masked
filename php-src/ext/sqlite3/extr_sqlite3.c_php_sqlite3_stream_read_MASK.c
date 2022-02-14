
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ position; scalar_t__ size; int blob; } ;
typedef TYPE_1__ php_stream_sqlite3_data ;
struct TYPE_5__ {int eof; scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,size_t,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(php_stream *VAR_1, char *VAR_2, size_t VAR_3)
{
 php_stream_sqlite3_data *VAR_4 = (php_stream_sqlite3_data *) VAR_1->abstract;

 if (VAR_4->position + VAR_3 >= VAR_4->size) {
  VAR_3 = VAR_4->size - VAR_4->position;
  VAR_1->eof = 1;
 }
 if (VAR_3) {
  if (FUNC_0(VAR_4->blob, VAR_2, VAR_3, VAR_4->position) != VAR_0) {
   return -1;
  }
  VAR_4->position += VAR_3;
 }
 return VAR_3;
}
