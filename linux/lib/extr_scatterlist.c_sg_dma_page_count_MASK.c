
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ offset; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_2(struct scatterlist *VAR_1)
{
 return FUNC_0(VAR_1->offset + FUNC_1(VAR_1)) >> VAR_0;
}
