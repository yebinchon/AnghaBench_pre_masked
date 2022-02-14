
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array_cache {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct array_cache*,int,int) ;
 struct array_cache* FUNC_1 (size_t,int ,int) ;
 int FUNC_2 (struct array_cache*) ;

__attribute__((used)) static struct array_cache *FUNC_3(int VAR_0, int VAR_1,
         int VAR_2, gfp_t VAR_3)
{
 size_t VAR_4 = sizeof(void *) * VAR_1 + sizeof(struct array_cache);
 struct array_cache *VAR_5 = ((void*)0);

 VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_0);







 FUNC_2(VAR_5);
 FUNC_0(VAR_5, VAR_1, VAR_2);
 return VAR_5;
}
