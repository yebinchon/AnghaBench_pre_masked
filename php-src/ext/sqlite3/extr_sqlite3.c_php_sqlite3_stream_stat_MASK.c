
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int st_size; } ;
struct TYPE_8__ {TYPE_1__ sb; } ;
typedef TYPE_2__ php_stream_statbuf ;
struct TYPE_9__ {int size; } ;
typedef TYPE_3__ php_stream_sqlite3_data ;
struct TYPE_10__ {scalar_t__ abstract; } ;
typedef TYPE_4__ php_stream ;



__attribute__((used)) static int FUNC_0(php_stream *VAR_0, php_stream_statbuf *VAR_1)
{
 php_stream_sqlite3_data *VAR_2 = (php_stream_sqlite3_data *) VAR_0->abstract;
 VAR_1->sb.st_size = VAR_2->size;
 return 0;
}
