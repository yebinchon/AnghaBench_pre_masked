
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ len; int name; } ;
typedef TYPE_1__ ltree_level ;
struct TYPE_13__ {int numlevel; } ;
typedef TYPE_2__ ltree ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

ltree *
FUNC_8(ltree **VAR_2, int VAR_3)
{
 int VAR_4,
    VAR_5,
    VAR_6,
    VAR_7;
 ltree **VAR_8;
 ltree_level *VAR_9,
      *VAR_10;
 ltree *VAR_11;

 if (VAR_3 <= 0)
  return ((void*)0);
 if ((*VAR_2)->numlevel == 0)
  return ((void*)0);


 VAR_5 = (*VAR_2)->numlevel - 1;


 VAR_8 = VAR_2 + 1;
 while (VAR_8 - VAR_2 < VAR_3)
 {
  if ((*VAR_8)->numlevel == 0)
   return ((void*)0);
  else if ((*VAR_8)->numlevel == 1)
   VAR_5 = 0;
  else
  {
   VAR_9 = FUNC_1(*VAR_2);
   VAR_10 = FUNC_1(*VAR_8);
   VAR_4 = FUNC_3(VAR_5, (*VAR_8)->numlevel - 1);
   VAR_5 = 0;
   for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   {
    if (VAR_9->len == VAR_10->len &&
     FUNC_5(VAR_9->name, VAR_10->name, VAR_9->len) == 0)
     VAR_5 = VAR_6 + 1;
    else
     break;
    VAR_9 = FUNC_0(VAR_9);
    VAR_10 = FUNC_0(VAR_10);
   }
  }
  VAR_8++;
 }


 VAR_7 = VAR_1;
 VAR_9 = FUNC_1(*VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  VAR_7 += FUNC_2(VAR_9->len + VAR_0);
  VAR_9 = FUNC_0(VAR_9);
 }


 VAR_11 = (ltree *) FUNC_7(VAR_7);
 FUNC_4(VAR_11, VAR_7);
 VAR_11->numlevel = VAR_5;

 VAR_9 = FUNC_1(*VAR_2);
 VAR_10 = FUNC_1(VAR_11);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_6(VAR_10, VAR_9, FUNC_2(VAR_9->len + VAR_0));
  VAR_9 = FUNC_0(VAR_9);
  VAR_10 = FUNC_0(VAR_10);
 }

 return VAR_11;
}
