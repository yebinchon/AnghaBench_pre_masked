
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct php_gz_stream_data_t {int gz_file; } ;
struct TYPE_3__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(php_stream *VAR_1)
{
 struct php_gz_stream_data_t *VAR_2 = (struct php_gz_stream_data_t *) VAR_1->abstract;

 return FUNC_0(VAR_2->gz_file, VAR_0);
}
