
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int offset; scalar_t__ length; } ;
struct scatter_walk {int offset; struct scatterlist* sg; } ;


 int FUNC_0 (struct scatterlist*,int ,int) ;
 int FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*,int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct scatterlist *VAR_0, struct scatter_walk *VAR_1)
{
 struct scatterlist *VAR_2 = VAR_1->sg;
 int VAR_3 = VAR_1->offset - VAR_2->offset;

 FUNC_3(VAR_0, FUNC_2(VAR_2),
      VAR_2->length - VAR_3, VAR_1->offset);

 FUNC_0(VAR_0, FUNC_1(VAR_2), 2);
}
