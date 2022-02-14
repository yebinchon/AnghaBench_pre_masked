
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdRectPtr ;
typedef int gdImagePtr ;
struct TYPE_3__ {int x; int width; int y; int height; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int*,int*,int*,int*) ;

__attribute__((used)) static void FUNC_2(gdImagePtr VAR_0, gdRectPtr VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6,VAR_7;

 FUNC_1(VAR_0, &VAR_2, &VAR_3, &VAR_4, &VAR_5);
 VAR_6 = VAR_1->x + VAR_1->width - 1;
 VAR_7 = VAR_1->y + VAR_1->height - 1;
 VAR_1->x = FUNC_0(VAR_1->x, VAR_2, VAR_4);
 VAR_1->y = FUNC_0(VAR_1->y, VAR_3, VAR_5);
 VAR_1->width = FUNC_0(VAR_6, VAR_2, VAR_4) - VAR_1->x + 1;
 VAR_1->height = FUNC_0(VAR_7, VAR_3, VAR_5) - VAR_1->y + 1;
}
