
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ visibility; TYPE_1__* drawarea; } ;
struct TYPE_9__ {int height; int width; int y; int x; } ;
struct TYPE_10__ {int count; TYPE_2__ area; } ;
struct TYPE_11__ {TYPE_3__ expose; } ;
struct TYPE_8__ {int window; } ;
typedef TYPE_4__ GdkEvent ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ) ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
    GdkEvent *VAR_2;
    int VAR_3;

    if (VAR_1.visibility != VAR_0)
 return;





    FUNC_3();

    do
    {

 VAR_2 = FUNC_1(VAR_1.drawarea->window);

 if (VAR_2 == ((void*)0))
     break;

 FUNC_4(VAR_2->expose.area.x, VAR_2->expose.area.y,
     VAR_2->expose.area.width, VAR_2->expose.area.height);

 VAR_3 = VAR_2->expose.count;
 FUNC_0(VAR_2);
    }
    while (VAR_3 > 0);

    FUNC_2();
}
