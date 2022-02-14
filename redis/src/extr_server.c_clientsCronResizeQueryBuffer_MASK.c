
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {int lastinteraction; int querybuf_peak; int flags; void* pending_querybuf; void* querybuf; } ;
typedef TYPE_1__ client ;
struct TYPE_5__ {int unixtime; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 size_t FUNC_3 (void*) ;
 TYPE_2__ VAR_3 ;

int FUNC_4(client *VAR_4) {
    size_t VAR_5 = FUNC_0(VAR_4->querybuf);
    time_t VAR_6 = VAR_3.unixtime - VAR_4->lastinteraction;




    if (VAR_5 > VAR_2 &&
         ((VAR_5/(VAR_4->querybuf_peak+1)) > 2 ||
          VAR_6 > 2))
    {


        if (FUNC_2(VAR_4->querybuf) > 1024*4) {
            VAR_4->querybuf = FUNC_1(VAR_4->querybuf);
        }
    }


    VAR_4->querybuf_peak = 0;






    if (VAR_4->flags & VAR_0) {



        size_t VAR_7 = FUNC_0(VAR_4->pending_querybuf);
        if(VAR_7 > VAR_1 &&
           FUNC_3(VAR_4->pending_querybuf) < (VAR_7/2))
        {
            VAR_4->pending_querybuf = FUNC_1(VAR_4->pending_querybuf);
        }
    }
    return 0;
}
