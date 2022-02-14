
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vars {size_t nmatch; TYPE_2__* g; TYPE_1__* pmatch; int * start; } ;
struct subre {int subno; int min; int max; char op; int id; } ;
typedef int chr ;
struct TYPE_4__ {scalar_t__ (* compare ) (int *,int *,size_t) ;} ;
struct TYPE_3__ {int rm_so; size_t rm_eo; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *,size_t) ;

__attribute__((used)) static int
FUNC_3(struct vars *VAR_3,
     struct subre *VAR_4,
     chr *VAR_5,
     chr *VAR_6)
{
 int VAR_7 = VAR_4->subno;
 size_t VAR_8;
 size_t VAR_9;
 size_t VAR_10;
 chr *VAR_11;
 chr *VAR_12;
 int VAR_13 = VAR_4->min;
 int VAR_14 = VAR_4->max;

 FUNC_1(VAR_4 != ((void*)0));
 FUNC_1(VAR_4->op == 'b');
 FUNC_1(VAR_7 >= 0);
 FUNC_1((size_t) VAR_7 < VAR_3->nmatch);

 FUNC_0(("cbackref n%d %d{%d-%d}\n", VAR_4->id, VAR_7, VAR_13, VAR_14));


 if (VAR_3->pmatch[VAR_7].rm_so == -1)
  return VAR_1;
 VAR_11 = VAR_3->start + VAR_3->pmatch[VAR_7].rm_so;
 VAR_10 = VAR_3->pmatch[VAR_7].rm_eo - VAR_3->pmatch[VAR_7].rm_so;


 if (VAR_10 == 0)
 {




  if (VAR_5 == VAR_6 && VAR_13 <= VAR_14)
  {
   FUNC_0(("cbackref matched trivially\n"));
   return VAR_2;
  }
  return VAR_1;
 }
 if (VAR_5 == VAR_6)
 {

  if (VAR_13 == 0)
  {
   FUNC_0(("cbackref matched trivially\n"));
   return VAR_2;
  }
  return VAR_1;
 }





 FUNC_1(VAR_6 > VAR_5);
 VAR_9 = VAR_6 - VAR_5;
 if (VAR_9 % VAR_10 != 0)
  return VAR_1;
 VAR_8 = VAR_9 / VAR_10;
 if (VAR_8 < VAR_13 || (VAR_8 > VAR_14 && VAR_14 != VAR_0))
  return VAR_1;


 VAR_12 = VAR_5;
 while (VAR_8-- > 0)
 {
  if ((*VAR_3->g->compare) (VAR_11, VAR_12, VAR_10) != 0)
   return VAR_1;
  VAR_12 += VAR_10;
 }

 FUNC_0(("cbackref matched\n"));
 return VAR_2;
}
