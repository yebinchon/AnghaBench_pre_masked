
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t st_size; } ;
struct TYPE_9__ {TYPE_2__ sb; } ;
typedef TYPE_3__ php_stream_statbuf ;
struct TYPE_7__ {scalar_t__ head; } ;
struct TYPE_10__ {TYPE_1__ readfilters; } ;
typedef TYPE_4__ php_stream ;


 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_0)
{
 php_stream *VAR_1 = VAR_0;
 php_stream_statbuf VAR_2;



 if (VAR_1->readfilters.head) {
  return 0;
 }

 if (FUNC_0(VAR_1, &VAR_2) == 0) {
  return VAR_2.sb.st_size;
 }
 return 0;
}
