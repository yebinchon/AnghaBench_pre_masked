
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {int flags; scalar_t__ position; scalar_t__ size; int blob; } ;
typedef TYPE_1__ php_stream_sqlite3_data ;
struct TYPE_5__ {int eof; scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int ,char const*,size_t,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_2(php_stream *VAR_3, const char *VAR_4, size_t VAR_5)
{
 php_stream_sqlite3_data *VAR_6 = (php_stream_sqlite3_data *) VAR_3->abstract;

 if (VAR_6->flags & VAR_2) {
  FUNC_0(((void*)0), VAR_0, "Can't write to blob stream: is open as read only");
  return -1;
 }

 if (VAR_6->position + VAR_5 > VAR_6->size) {
  FUNC_0(((void*)0), VAR_0, "It is not possible to increase the size of a BLOB");
  return -1;
 }

 if (FUNC_1(VAR_6->blob, VAR_4, VAR_5, VAR_6->position) != VAR_1) {
  return -1;
 }

 if (VAR_6->position + VAR_5 >= VAR_6->size) {
  VAR_3->eof = 1;
  VAR_6->position = VAR_6->size;
 }
 else {
  VAR_6->position += VAR_5;
 }

 return VAR_5;
}
