
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {size_t nsubs; struct subre** subs; struct subre** sub10; } ;
struct subre {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (struct subre**,size_t) ;
 int VAR_0 ;
 int FUNC_3 (struct subre**) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct vars *VAR_1,
   int VAR_2)
{
 struct subre **VAR_3;
 size_t VAR_4;

 FUNC_4(VAR_2 > 0 && (size_t) VAR_2 >= VAR_1->nsubs);
 VAR_4 = (size_t) VAR_2 * 3 / 2 + 1;

 if (VAR_1->subs == VAR_1->sub10)
 {
  VAR_3 = (struct subre **) FUNC_1(VAR_4 * sizeof(struct subre *));
  if (VAR_3 != ((void*)0))
   FUNC_5(FUNC_3(VAR_3), FUNC_3(VAR_1->subs),
       VAR_1->nsubs * sizeof(struct subre *));
 }
 else
  VAR_3 = (struct subre **) FUNC_2(VAR_1->subs, VAR_4 * sizeof(struct subre *));
 if (VAR_3 == ((void*)0))
 {
  FUNC_0(VAR_0);
  return;
 }
 VAR_1->subs = VAR_3;
 for (VAR_3 = &VAR_1->subs[VAR_1->nsubs]; VAR_1->nsubs < VAR_4; VAR_3++, VAR_1->nsubs++)
  *VAR_3 = ((void*)0);
 FUNC_4(VAR_1->nsubs == VAR_4);
 FUNC_4((size_t) VAR_2 < VAR_1->nsubs);
}
