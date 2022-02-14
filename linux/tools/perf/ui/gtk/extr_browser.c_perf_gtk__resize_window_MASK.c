
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; } ;
struct TYPE_7__ {int window; } ;
typedef TYPE_1__ GtkWidget ;
typedef int GdkScreen ;
typedef TYPE_2__ GdkRectangle ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,TYPE_2__*) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int,int) ;

void FUNC_5(GtkWidget *VAR_0)
{
 GdkRectangle VAR_1;
 GdkScreen *VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_2 = FUNC_3(VAR_0);

 VAR_3 = FUNC_1(VAR_2, VAR_0->window);

 FUNC_2(VAR_2, VAR_3, &VAR_1);

 VAR_5 = VAR_1.width * 3 / 4;
 VAR_4 = VAR_1.height * 3 / 4;

 FUNC_4(FUNC_0(VAR_0), VAR_5, VAR_4);
}
