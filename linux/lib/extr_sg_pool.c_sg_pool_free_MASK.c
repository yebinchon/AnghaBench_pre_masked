
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_pool {int pool; } ;
struct scatterlist {int dummy; } ;


 int FUNC_0 (struct scatterlist*,int ) ;
 int FUNC_1 (unsigned int) ;
 struct sg_pool* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct scatterlist *VAR_1, unsigned int VAR_2)
{
 struct sg_pool *VAR_3;

 VAR_3 = VAR_0 + FUNC_1(VAR_2);
 FUNC_0(VAR_1, VAR_3->pool);
}
