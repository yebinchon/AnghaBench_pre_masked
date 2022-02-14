
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int nents; int orig_nents; int sgl; } ;
struct scatterlist {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sg_table*,int,int ,struct scatterlist*,unsigned int,int ,int ) ;
 int FUNC_2 (struct sg_table*,unsigned int) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct sg_table *VAR_3, int VAR_4,
  struct scatterlist *VAR_5, unsigned VAR_6)
{
 int VAR_7;

 FUNC_0(!VAR_4);

 if (VAR_5 && VAR_6) {
  if (VAR_4 <= VAR_6) {
   VAR_3->nents = VAR_3->orig_nents = VAR_4;
   FUNC_3(VAR_3->sgl, VAR_4);
   return 0;
  }
 }


 if (VAR_6 <= 1) {
  VAR_5 = ((void*)0);
  VAR_6 = 0;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_1,
          VAR_5, VAR_6,
          VAR_0, VAR_2);
 if (FUNC_4(VAR_7))
  FUNC_2(VAR_3, VAR_6);
 return VAR_7;
}
