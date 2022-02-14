
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vo {int x11; } ;
struct TYPE_3__ {long all_event_masks; long your_event_mask; } ;
typedef TYPE_1__ XWindowAttributes ;
typedef int Window ;
typedef int Display ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int ,char*) ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_1__*) ;
 int FUNC_2 (int *,int ,long) ;

__attribute__((used)) static void FUNC_3(struct vo *VAR_4,
                                       Display *VAR_5,
                                       Window VAR_6,
                                       long VAR_7)
{
    FUNC_2(VAR_5, VAR_6, VAR_2);



    FUNC_2(VAR_5, VAR_6, VAR_7);





    XWindowAttributes VAR_8;
    if (FUNC_1(VAR_5, VAR_6, &VAR_8)) {
        long VAR_9 = VAR_0 | VAR_1 | VAR_3;
        if ((VAR_7 & VAR_9) && (VAR_8.all_event_masks & VAR_9) &&
            ((VAR_8.your_event_mask & VAR_9) != (VAR_7 & VAR_9)))
        {
            FUNC_0(VAR_4->x11, "X11 error: error during XSelectInput "
                   "call, trying without mouse events\n");
            FUNC_2(VAR_5, VAR_6, VAR_7 & ~VAR_9);
        }
    }
}
