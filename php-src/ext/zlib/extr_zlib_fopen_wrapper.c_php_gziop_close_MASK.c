
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct php_gz_stream_data_t {int * stream; int * gz_file; } ;
struct TYPE_3__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;


 int VAR_0 ;
 int FUNC_0 (struct php_gz_stream_data_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(php_stream *VAR_1, int VAR_2)
{
 struct php_gz_stream_data_t *VAR_3 = (struct php_gz_stream_data_t *) VAR_1->abstract;
 int VAR_4 = VAR_0;

 if (VAR_2) {
  if (VAR_3->gz_file) {
   VAR_4 = FUNC_1(VAR_3->gz_file);
   VAR_3->gz_file = ((void*)0);
  }
  if (VAR_3->stream) {
   FUNC_2(VAR_3->stream);
   VAR_3->stream = ((void*)0);
  }
 }
 FUNC_0(VAR_3);

 return VAR_4;
}
