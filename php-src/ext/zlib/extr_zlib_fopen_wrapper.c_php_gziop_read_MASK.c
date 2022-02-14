
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct php_gz_stream_data_t {int gz_file; } ;
typedef int ssize_t ;
struct TYPE_3__ {int eof; scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(php_stream *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct php_gz_stream_data_t *VAR_3 = (struct php_gz_stream_data_t *) VAR_0->abstract;
 int VAR_4;


 VAR_4 = FUNC_1(VAR_3->gz_file, VAR_1, VAR_2);

 if (FUNC_0(VAR_3->gz_file)) {
  VAR_0->eof = 1;
 }

 return VAR_4;
}
