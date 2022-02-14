
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ltree_level ;
struct TYPE_6__ {int numlevel; } ;
typedef TYPE_1__ ltree ;
typedef int int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static ltree *
FUNC_8(ltree *VAR_3, int32 VAR_4, int32 VAR_5)
{
 char *VAR_6 = ((void*)0),
      *VAR_7 = ((void*)0);
 ltree_level *VAR_8 = FUNC_1(VAR_3);
 ltree *VAR_9;
 int VAR_10;

 if (VAR_4 < 0 || VAR_5 < 0 || VAR_4 >= VAR_3->numlevel || VAR_4 > VAR_5)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("invalid positions")));

 if (VAR_5 > VAR_3->numlevel)
  VAR_5 = VAR_3->numlevel;

 VAR_6 = VAR_7 = (char *) VAR_8;
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
 {
  if (VAR_10 == VAR_4)
   VAR_6 = (char *) VAR_8;
  if (VAR_10 == VAR_5 - 1)
  {
   VAR_7 = (char *) FUNC_0(VAR_8);
   break;
  }
  VAR_8 = FUNC_0(VAR_8);
 }

 VAR_9 = (ltree *) FUNC_7(VAR_2 + (VAR_7 - VAR_6));
 FUNC_2(VAR_9, VAR_2 + (VAR_7 - VAR_6));
 VAR_9->numlevel = VAR_5 - VAR_4;

 FUNC_6(FUNC_1(VAR_9), VAR_6, VAR_7 - VAR_6);

 return VAR_9;
}
