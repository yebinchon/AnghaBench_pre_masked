
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao {TYPE_1__* driver; int stream_silence; } ;
struct TYPE_2__ {int (* resume ) (struct ao*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ao*,int ) ;
 int FUNC_1 (struct ao*) ;

__attribute__((used)) static void FUNC_2(struct ao *VAR_1)
{
    FUNC_0(VAR_1, VAR_0);
    if (!VAR_1->stream_silence)
        VAR_1->driver->resume(VAR_1);
}
