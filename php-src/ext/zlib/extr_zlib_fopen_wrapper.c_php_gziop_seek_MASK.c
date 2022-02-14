
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_off_t ;
struct php_gz_stream_data_t {int gz_file; } ;
struct TYPE_3__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_3(php_stream *VAR_2, zend_off_t VAR_3, int VAR_4, zend_off_t *VAR_5)
{
 struct php_gz_stream_data_t *VAR_6 = (struct php_gz_stream_data_t *) VAR_2->abstract;

 FUNC_0(VAR_6 != ((void*)0));

 if (VAR_4 == VAR_1) {
  FUNC_2(((void*)0), VAR_0, "SEEK_END is not supported");
  return -1;
 }
 *VAR_5 = FUNC_1(VAR_6->gz_file, VAR_3, VAR_4);

 return (*VAR_5 < 0) ? -1 : 0;
}
