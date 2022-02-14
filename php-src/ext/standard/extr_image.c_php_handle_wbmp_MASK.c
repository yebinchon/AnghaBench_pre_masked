
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfxinfo {int dummy; } ;
typedef int php_stream ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct gfxinfo*) ;
 int FUNC_2 (int *,struct gfxinfo**,int ) ;

__attribute__((used)) static struct gfxinfo *FUNC_3(php_stream * VAR_0)
{
 struct gfxinfo *VAR_1 = (struct gfxinfo *) FUNC_0(1, sizeof(struct gfxinfo));

 if (!FUNC_2(VAR_0, &VAR_1, 0)) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
