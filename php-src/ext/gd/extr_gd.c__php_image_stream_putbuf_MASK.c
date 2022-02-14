
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdIOCtx {scalar_t__ data; } ;
typedef int php_stream ;


 int FUNC_0 (int *,void*,int) ;

__attribute__((used)) static int FUNC_1(struct gdIOCtx *VAR_0, const void* VAR_1, int VAR_2)
{
 php_stream * VAR_3 = (php_stream *)VAR_0->data;
 return FUNC_0(VAR_3, (void *)VAR_1, VAR_2);
}
