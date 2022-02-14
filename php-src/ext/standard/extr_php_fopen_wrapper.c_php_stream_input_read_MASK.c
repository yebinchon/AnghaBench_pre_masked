
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_9__ {scalar_t__ position; TYPE_4__* body; } ;
typedef TYPE_2__ php_stream_input_t ;
struct TYPE_10__ {int eof; TYPE_2__* abstract; } ;
typedef TYPE_3__ php_stream ;
typedef scalar_t__ int64_t ;
struct TYPE_8__ {int head; } ;
struct TYPE_11__ {TYPE_1__ readfilters; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (TYPE_4__*,char*,size_t) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_4__*,char*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_4 (char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_5(php_stream *VAR_4, char *VAR_5, size_t VAR_6)
{
 php_stream_input_t *VAR_7 = VAR_4->abstract;
 ssize_t VAR_8;

 if (!FUNC_0(VAR_2) && FUNC_0(VAR_3) < (int64_t)(VAR_7->position + VAR_6)) {

  size_t VAR_9 = FUNC_4(VAR_5, VAR_6);

  if (VAR_9 > 0) {
   FUNC_2(VAR_7->body, 0, VAR_0);
   FUNC_3(VAR_7->body, VAR_5, VAR_9);
  }
 }

 if (!VAR_7->body->readfilters.head) {


  FUNC_2(VAR_7->body, VAR_7->position, VAR_1);
 }
 VAR_8 = FUNC_1(VAR_7->body, VAR_5, VAR_6);

 if (!VAR_8 || VAR_8 == (size_t) -1) {
  VAR_4->eof = 1;
 } else {
  VAR_7->position += VAR_8;
 }

 return VAR_8;
}
