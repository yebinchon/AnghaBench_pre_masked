
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct colormap {TYPE_1__* cd; } ;
struct cnfa {int pre; scalar_t__* bos; scalar_t__* eos; scalar_t__ ncolors; int post; struct carc** states; } ;
struct carc {scalar_t__ co; int to; } ;
typedef scalar_t__ color ;
typedef int chr ;
struct TYPE_2__ {int nschrs; scalar_t__ nuchrs; int firstchr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct colormap*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct cnfa *VAR_4,
     struct colormap *VAR_5,
     chr *VAR_6,
     size_t *VAR_7)
{
 int VAR_8;
 int VAR_9;
 color VAR_10;
 chr VAR_11;
 struct carc *VAR_12;






 VAR_8 = VAR_4->pre;
 VAR_9 = -1;
 for (VAR_12 = VAR_4->states[VAR_8]; VAR_12->co != VAR_0; VAR_12++)
 {
  if (VAR_12->co == VAR_4->bos[0] || VAR_12->co == VAR_4->bos[1])
  {
   if (VAR_9 == -1)
    VAR_9 = VAR_12->to;
   else if (VAR_9 != VAR_12->to)
    return VAR_2;
  }
  else
   return VAR_2;
 }
 if (VAR_9 == -1)
  return VAR_2;
 do
 {
  VAR_8 = VAR_9;
  VAR_9 = -1;
  VAR_10 = VAR_0;
  for (VAR_12 = VAR_4->states[VAR_8]; VAR_12->co != VAR_0; VAR_12++)
  {

   if (VAR_12->co == VAR_4->bos[0] || VAR_12->co == VAR_4->bos[1])
    continue;

   if (VAR_12->co == VAR_4->eos[0] || VAR_12->co == VAR_4->eos[1] ||
    VAR_12->co >= VAR_4->ncolors)
   {
    VAR_10 = VAR_0;
    break;
   }
   if (VAR_10 == VAR_0)
   {

    VAR_10 = VAR_12->co;
    VAR_9 = VAR_12->to;
   }
   else if (VAR_10 == VAR_12->co)
   {

    VAR_9 = -1;
   }
   else
   {

    VAR_10 = VAR_0;
    break;
   }
  }

  if (VAR_10 == VAR_0)
   break;

  if (VAR_5->cd[VAR_10].nschrs != 1)
   break;

  if (VAR_5->cd[VAR_10].nuchrs != 0)
   break;
  VAR_11 = VAR_5->cd[VAR_10].firstchr;
  if (FUNC_0(VAR_5, VAR_11) != VAR_10)
   break;

  VAR_6[(*VAR_7)++] = VAR_11;


 } while (VAR_9 != -1);






 VAR_9 = -1;
 for (VAR_12 = VAR_4->states[VAR_8]; VAR_12->co != VAR_0; VAR_12++)
 {
  if (VAR_12->co == VAR_4->eos[0] || VAR_12->co == VAR_4->eos[1])
  {
   if (VAR_9 == -1)
    VAR_9 = VAR_12->to;
   else if (VAR_9 != VAR_12->to)
   {
    VAR_9 = -1;
    break;
   }
  }
  else
  {
   VAR_9 = -1;
   break;
  }
 }
 if (VAR_9 == VAR_4->post)
  return VAR_1;






 if (*VAR_7 > 0)
  return VAR_3;

 return VAR_2;
}
