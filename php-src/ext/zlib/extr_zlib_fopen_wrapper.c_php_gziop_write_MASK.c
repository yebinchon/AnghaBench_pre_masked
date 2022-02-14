
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct php_gz_stream_data_t {int gz_file; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;


 int FUNC_0 (int ,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(php_stream *VAR_0, const char *VAR_1, size_t VAR_2)
{
 struct php_gz_stream_data_t *VAR_3 = (struct php_gz_stream_data_t *) VAR_0->abstract;


 return FUNC_0(VAR_3->gz_file, (char *) VAR_1, VAR_2);
}
