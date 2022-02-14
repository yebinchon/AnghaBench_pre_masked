
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int x0; int x1; scalar_t__ y0; } ;
typedef TYPE_1__ fz_irect ;
struct TYPE_7__ {char const* hot; char const* active; scalar_t__ down; int gridsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_5__ VAR_2 ;
 int FUNC_1 (TYPE_1__,int ,int) ;
 int FUNC_2 (int,scalar_t__,char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (TYPE_1__) ;
 TYPE_1__ FUNC_5 (int,int ) ;

int FUNC_6(const char *VAR_3)
{
 int VAR_4 = FUNC_3(VAR_3);
 fz_irect VAR_5 = FUNC_5(VAR_4 + 20, VAR_2.gridsize);
 int VAR_6 = VAR_5.x0 + ((VAR_5.x1 - VAR_5.x0) - VAR_4) / 2;
 int VAR_7;

 if (FUNC_4(VAR_5))
 {
  VAR_2.hot = VAR_3;
  if (!VAR_2.active && VAR_2.down)
   VAR_2.active = VAR_3;
 }

 VAR_7 = (VAR_2.hot == VAR_3 && VAR_2.active == VAR_3 && VAR_2.down);
 FUNC_1(VAR_5, VAR_0, VAR_7);
 FUNC_0(VAR_1);
 FUNC_2(VAR_6 + VAR_7, VAR_5.y0+3 + VAR_7, VAR_3);

 return VAR_2.hot == VAR_3 && VAR_2.active == VAR_3 && !VAR_2.down;
}
