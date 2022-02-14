
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cached_fstat; int sb; int no_forced_fstat; } ;
typedef TYPE_1__ php_stdio_stream_data ;


 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static int FUNC_2(php_stdio_stream_data *VAR_0, int VAR_1)
{
 if (!VAR_0->cached_fstat || (VAR_1 && !VAR_0->no_forced_fstat)) {
  int VAR_2;
  int VAR_3;

  FUNC_0(VAR_2, VAR_0);
  VAR_3 = FUNC_1(VAR_2, &VAR_0->sb);
  VAR_0->cached_fstat = VAR_3 == 0;

  return VAR_3;
 }
 return 0;
}
