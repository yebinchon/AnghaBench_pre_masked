
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (struct ahash_request*,struct scatterlist*,int *,int ) ;
 int FUNC_1 (struct ahash_request*) ;

__attribute__((used)) static int
FUNC_2(struct scatterlist *VAR_0, void *VAR_1)
{
 struct ahash_request *VAR_2 = VAR_1;

 FUNC_0(VAR_2, VAR_0, ((void*)0), VAR_0->length);

 return FUNC_1(VAR_2);
}
