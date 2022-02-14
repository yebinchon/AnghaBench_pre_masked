
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* gdRectPtr ;
typedef TYPE_2__* gdImagePtr ;
struct TYPE_13__ {int alphaBlendingFlag; } ;
struct TYPE_12__ {int height; int width; int y; int x; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int ,int ,int ,int ,int ,int ) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

gdImagePtr FUNC_5(gdImagePtr VAR_1, const gdRectPtr VAR_2)
{
 gdImagePtr VAR_3;
 int VAR_4;

 if (FUNC_4(VAR_1)) {
  VAR_3 = FUNC_3(VAR_2->width, VAR_2->height);
 } else {
  VAR_3 = FUNC_2(VAR_2->width, VAR_2->height);
 }
 if (!VAR_3) return ((void*)0);
 VAR_4 = VAR_3->alphaBlendingFlag;
 FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_1, 0, 0, VAR_2->x, VAR_2->y, VAR_2->width, VAR_2->height);
 FUNC_0(VAR_3, VAR_4);

 return VAR_3;
}
