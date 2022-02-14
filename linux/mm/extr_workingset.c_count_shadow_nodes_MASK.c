
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrinker {int dummy; } ;
struct shrink_control {int nid; scalar_t__ memcg; } ;
struct lruvec {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_1 (int *,struct shrink_control*) ;
 scalar_t__ FUNC_2 (struct lruvec*,scalar_t__) ;
 struct lruvec* FUNC_3 (int ,scalar_t__) ;
 unsigned long FUNC_4 (int ) ;
 int VAR_6 ;

__attribute__((used)) static unsigned long FUNC_5(struct shrinker *VAR_7,
     struct shrink_control *VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;

 VAR_10 = FUNC_1(&VAR_6, VAR_8);
  VAR_11 = FUNC_4(VAR_8->nid);

 VAR_9 = VAR_11 >> (VAR_5 - 3);

 if (!VAR_10)
  return VAR_4;

 if (VAR_10 <= VAR_9)
  return 0;
 return VAR_10 - VAR_9;
}
