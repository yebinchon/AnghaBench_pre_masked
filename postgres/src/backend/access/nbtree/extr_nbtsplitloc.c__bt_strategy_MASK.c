
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int minfirstrightsz; scalar_t__ newitem; int rel; int page; scalar_t__ is_rightmost; int is_leaf; } ;
typedef int SplitPoint ;
typedef int ItemId ;
typedef scalar_t__ IndexTuple ;
typedef int FindSplitStrat ;
typedef TYPE_1__ FindSplitData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int **,int **) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_7(FindSplitData *VAR_4, SplitPoint *VAR_5,
    SplitPoint *VAR_6, FindSplitStrat *VAR_7)
{
 IndexTuple VAR_8,
    VAR_9;
 SplitPoint *VAR_10,
      *VAR_11;
 int VAR_12;
 int VAR_13 = FUNC_0(VAR_4->rel);


 *VAR_7 = VAR_1;







 if (!VAR_4->is_leaf)
  return VAR_4->minfirstrightsz;





 FUNC_3(VAR_4, &VAR_10, &VAR_11);
 VAR_8 = FUNC_6(VAR_4, VAR_10);
 VAR_9 = FUNC_5(VAR_4, VAR_11);






 VAR_12 = FUNC_4(VAR_4->rel, VAR_8, VAR_9);
 if (VAR_12 <= VAR_13)
  return VAR_12;
 VAR_8 = FUNC_6(VAR_4, VAR_5);
 VAR_9 = FUNC_5(VAR_4, VAR_6);







 VAR_12 = FUNC_4(VAR_4->rel, VAR_8, VAR_9);
 if (VAR_12 <= VAR_13)
 {
  *VAR_7 = VAR_2;
  return VAR_13;
 }
 else if (VAR_4->is_rightmost)
  *VAR_7 = VAR_3;
 else
 {
  ItemId VAR_14;
  IndexTuple VAR_15;

  VAR_14 = FUNC_2(VAR_4->page, VAR_0);
  VAR_15 = (IndexTuple) FUNC_1(VAR_4->page, VAR_14);
  VAR_12 = FUNC_4(VAR_4->rel, VAR_15,
            VAR_4->newitem);
  if (VAR_12 <= VAR_13)
   *VAR_7 = VAR_3;
  else
  {





  }
 }

 return VAR_12;
}
