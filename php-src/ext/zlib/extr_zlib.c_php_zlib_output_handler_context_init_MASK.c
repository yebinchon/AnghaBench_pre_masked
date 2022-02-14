
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zfree; int zalloc; } ;
struct TYPE_5__ {TYPE_1__ Z; } ;
typedef TYPE_2__ php_zlib_context ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static php_zlib_context *FUNC_1(void)
{
 php_zlib_context *VAR_2 = (php_zlib_context *) FUNC_0(1, sizeof(php_zlib_context));
 VAR_2->Z.zalloc = VAR_0;
 VAR_2->Z.zfree = VAR_1;
 return VAR_2;
}
