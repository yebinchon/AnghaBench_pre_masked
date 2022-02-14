
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* tmpdir; int meta; scalar_t__ innerstream; } ;
typedef TYPE_1__ php_stream_temp_data ;
struct TYPE_6__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(php_stream *VAR_2, int VAR_3)
{
 php_stream_temp_data *VAR_4 = (php_stream_temp_data*)VAR_2->abstract;
 int VAR_5;

 FUNC_0(VAR_4 != ((void*)0));

 if (VAR_4->innerstream) {
  VAR_5 = FUNC_2(VAR_4->innerstream, VAR_0 | (VAR_3 ? 0 : VAR_1));
 } else {
  VAR_5 = 0;
 }

 FUNC_3(&VAR_4->meta);

 if (VAR_4->tmpdir) {
  FUNC_1(VAR_4->tmpdir);
 }

 FUNC_1(VAR_4);

 return VAR_5;
}
