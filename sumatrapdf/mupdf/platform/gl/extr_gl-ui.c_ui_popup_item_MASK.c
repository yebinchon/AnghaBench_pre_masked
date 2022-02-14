
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y0; scalar_t__ x0; int y1; int x1; } ;
typedef TYPE_1__ fz_irect ;
struct TYPE_6__ {char const* hot; int down; int lineheight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 TYPE_4__ VAR_3 ;
 int FUNC_2 (scalar_t__,int ,char const*) ;
 scalar_t__ FUNC_3 (TYPE_1__) ;
 TYPE_1__ FUNC_4 (int ,int ) ;

int FUNC_5(const char *VAR_4)
{
 fz_irect VAR_5 = FUNC_4(0, VAR_3.lineheight);

 if (FUNC_3(VAR_5))
 {
  VAR_3.hot = VAR_4;
  FUNC_0(VAR_1);
  FUNC_1(VAR_5.x0, VAR_5.y0, VAR_5.x1, VAR_5.y1);
  FUNC_0(VAR_2);
  FUNC_2(VAR_5.x0 + 4, VAR_5.y0, VAR_4);
 }
 else
 {
  FUNC_0(VAR_0);
  FUNC_2(VAR_5.x0 + 4, VAR_5.y0, VAR_4);
 }

 return VAR_3.hot == VAR_4 && !VAR_3.down;
}
