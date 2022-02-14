
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pa_stream ;
struct TYPE_3__ {int tlength; } ;
struct TYPE_4__ {int playback_mutex; TYPE_1__ attr; int stream; int source; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(pa_stream *VAR_1, void *VAR_2)
{
 FUNC_1(VAR_1);
 FUNC_0(VAR_2);

 FUNC_4(&VAR_0->playback_mutex);
 if (FUNC_2(VAR_0->source))
  VAR_0->attr.tlength = (VAR_0->attr.tlength * 3) / 2;

 FUNC_3(VAR_0->stream, &VAR_0->attr, ((void*)0), ((void*)0));
 FUNC_5(&VAR_0->playback_mutex);

 FUNC_6(0);
}
