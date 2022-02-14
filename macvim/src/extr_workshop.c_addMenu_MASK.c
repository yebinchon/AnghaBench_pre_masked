
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int cbuf ;
struct TYPE_5__ {int * verb; int * accel; int * name; } ;
typedef TYPE_1__ MenuMap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_4(
 char *VAR_7,
 char *VAR_8,
 char *VAR_9)
{
    MenuMap *VAR_10;
    char VAR_11[VAR_0];

    if (VAR_5 >= VAR_4)
    {
 VAR_10 = FUNC_1(VAR_3,
  sizeof(MenuMap) * (VAR_4 + VAR_1));
 if (VAR_10 != ((void*)0))
 {
     VAR_3 = VAR_10;
     VAR_4 += VAR_1;
 }
    }
    if (VAR_5 < VAR_4)
    {
 VAR_3[VAR_5].name = FUNC_2(VAR_7);
 VAR_3[VAR_5].accel = VAR_8 && *VAR_8 ? FUNC_2(VAR_8) : ((void*)0);
 VAR_3[VAR_5++].verb = FUNC_2(VAR_9);
 if (VAR_8 && VAR_6)
 {
     FUNC_3(VAR_11, sizeof(VAR_11),
     "map %s :wsverb %s<CR>", VAR_8, VAR_9);
     FUNC_0(VAR_11, VAR_2);
 }
    }
}
