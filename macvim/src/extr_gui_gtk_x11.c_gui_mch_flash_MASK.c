
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int norm_pixel; int back_pixel; scalar_t__ visibility; scalar_t__ border_offset; TYPE_3__* drawarea; } ;
struct TYPE_8__ {int pixel; } ;
struct TYPE_7__ {int pixel; } ;
struct TYPE_10__ {int function; TYPE_2__ background; TYPE_1__ foreground; } ;
struct TYPE_9__ {int * window; } ;
typedef TYPE_4__ GdkGCValues ;
typedef int GdkGC ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int *,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,TYPE_4__*,int) ;
 int FUNC_5 (int *,int) ;
 TYPE_5__ VAR_8 ;
 int FUNC_6 () ;
 int FUNC_7 (long,int ) ;

void
FUNC_8(int VAR_9)
{
    GdkGCValues VAR_10;
    GdkGC *VAR_11;

    if (VAR_8.drawarea->window == ((void*)0))
 return;

    VAR_10.foreground.pixel = VAR_8.norm_pixel ^ VAR_8.back_pixel;
    VAR_10.background.pixel = VAR_8.norm_pixel ^ VAR_8.back_pixel;
    VAR_10.function = VAR_5;
    VAR_11 = FUNC_4(VAR_8.drawarea->window,
           &VAR_10,
           VAR_2 |
           VAR_1 |
           VAR_3);
    FUNC_5(VAR_11,
    VAR_8.visibility != VAR_4);







    FUNC_2(VAR_8.drawarea->window, VAR_11,
         VAR_7,
         0, 0,
         FUNC_0((int)VAR_0) + VAR_8.border_offset,
         FUNC_1((int)VAR_6) + VAR_8.border_offset);

    FUNC_6();
    FUNC_7((long)VAR_9, VAR_7);

    FUNC_2(VAR_8.drawarea->window, VAR_11,
         VAR_7,
         0, 0,
         FUNC_0((int)VAR_0) + VAR_8.border_offset,
         FUNC_1((int)VAR_6) + VAR_8.border_offset);

    FUNC_3(VAR_11);
}
