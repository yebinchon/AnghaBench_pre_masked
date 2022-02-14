
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vars {int err; } ;
struct subre {char op; int min; size_t max; int id; TYPE_2__* left; } ;
struct dfa {int dummy; } ;
typedef int chr ;
struct TYPE_5__ {scalar_t__ nstates; } ;
struct TYPE_6__ {int flags; TYPE_1__ cnfa; } ;


 size_t VAR_0 ;
 int FUNC_0 (int **) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct vars*,TYPE_2__*,int *,int *) ;
 struct dfa* FUNC_7 (struct vars*,TYPE_2__*) ;
 int * FUNC_8 (struct vars*,struct dfa*,int *,int *,int *,int **,int*) ;
 int FUNC_9 (struct vars*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_10(struct vars *VAR_5,
    struct subre *VAR_6,
    chr *VAR_7,
    chr *VAR_8)
{
 struct dfa *VAR_9;
 chr **VAR_10;
 chr *VAR_11;
 int VAR_12;
 size_t VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_5(VAR_6->op == '*');
 FUNC_5(VAR_6->left != ((void*)0) && VAR_6->left->cnfa.nstates > 0);
 FUNC_5(VAR_6->left->flags & VAR_4);
 FUNC_5(VAR_7 <= VAR_8);






 VAR_12 = VAR_6->min;
 if (VAR_12 <= 0)
 {
  if (VAR_7 == VAR_8)
   return VAR_3;
  VAR_12 = 1;
 }
 VAR_13 = VAR_8 - VAR_7;
 if (VAR_13 > VAR_6->max && VAR_6->max != VAR_0)
  VAR_13 = VAR_6->max;
 if (VAR_13 < VAR_12)
  VAR_13 = VAR_12;
 VAR_10 = (chr **) FUNC_3((VAR_13 + 1) * sizeof(chr *));
 if (VAR_10 == ((void*)0))
  return VAR_1;
 VAR_10[0] = VAR_7;

 VAR_9 = FUNC_7(VAR_5, VAR_6->left);
 if (FUNC_1())
 {
  FUNC_0(VAR_10);
  return VAR_5->err;
 }
 FUNC_4(("creviter %d\n", VAR_6->id));
 VAR_14 = 0;
 VAR_15 = 1;
 VAR_11 = VAR_7;


 while (VAR_15 > 0)
 {

  if (VAR_11 == VAR_10[VAR_15 - 1] &&
   VAR_11 != VAR_8 &&
   (VAR_15 >= VAR_12 || VAR_12 - VAR_15 < VAR_8 - VAR_11))
   VAR_11++;


  if (VAR_15 >= VAR_13)
   VAR_11 = VAR_8;


  VAR_10[VAR_15] = FUNC_8(VAR_5, VAR_9, VAR_10[VAR_15 - 1], VAR_11, VAR_8,
        (chr **) ((void*)0), (int *) ((void*)0));
  if (FUNC_1())
  {
   FUNC_0(VAR_10);
   return VAR_5->err;
  }
  if (VAR_10[VAR_15] == ((void*)0))
  {

   VAR_15--;
   goto backtrack;
  }
  FUNC_4(("%d: working endpoint %d: %ld\n",
    VAR_6->id, VAR_15, FUNC_2(VAR_10[VAR_15])));


  if (VAR_14 >= VAR_15)
   VAR_14 = VAR_15 - 1;

  if (VAR_10[VAR_15] != VAR_8)
  {

   if (VAR_15 >= VAR_13)
   {

    VAR_15--;
    goto backtrack;
   }

   VAR_15++;
   VAR_11 = VAR_10[VAR_15 - 1];
   continue;
  }







  if (VAR_15 < VAR_12)
   goto backtrack;

  FUNC_4(("%d: verifying %d..%d\n", VAR_6->id, VAR_14 + 1, VAR_15));

  for (VAR_16 = VAR_14 + 1; VAR_16 <= VAR_15; VAR_16++)
  {
   FUNC_9(VAR_5, VAR_6->left);
   VAR_17 = FUNC_6(VAR_5, VAR_6->left, VAR_10[VAR_16 - 1], VAR_10[VAR_16]);
   if (VAR_17 == VAR_3)
   {
    VAR_14 = VAR_16;
    continue;
   }
   if (VAR_17 == VAR_2)
    break;

   FUNC_0(VAR_10);
   return VAR_17;
  }

  if (VAR_16 > VAR_15)
  {

   FUNC_4(("%d successful\n", VAR_6->id));
   FUNC_0(VAR_10);
   return VAR_3;
  }



backtrack:




  while (VAR_15 > 0)
  {
   if (VAR_10[VAR_15] < VAR_8)
   {
    VAR_11 = VAR_10[VAR_15] + 1;

    break;
   }

   VAR_15--;
  }
 }


 FUNC_4(("%d failed\n", VAR_6->id));
 FUNC_0(VAR_10);
 return VAR_2;
}
