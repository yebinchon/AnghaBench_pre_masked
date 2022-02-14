
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int custom_options; } ;
struct ff_demuxer {TYPE_1__ options; int input; int * input_format; } ;
struct TYPE_9__ {struct ff_demuxer* opaque; int callback; } ;
struct TYPE_10__ {TYPE_2__ interrupt_callback; } ;
typedef int AVInputFormat ;
typedef TYPE_2__ AVIOInterruptCB ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int *) ;
 TYPE_3__* FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_3__**,int ,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_5(struct ff_demuxer *VAR_2,
                       AVFormatContext **VAR_3)
{
 AVInputFormat *VAR_4 = ((void*)0);

 AVIOInterruptCB VAR_5;
 VAR_5.callback = VAR_1;
 VAR_5.opaque = VAR_2;

 *VAR_3 = FUNC_2();
 (*VAR_3)->interrupt_callback = VAR_5;

 if (VAR_2->input_format != ((void*)0)) {
  VAR_4 = FUNC_0(VAR_2->input_format);
  if (VAR_4 == ((void*)0))
   FUNC_1(((void*)0), VAR_0,
          "unable to find input "
          "format %s",
          VAR_2->input_format);
 }

 if (FUNC_4(VAR_3, VAR_2->input, VAR_4,
                         &VAR_2->options.custom_options) != 0)
  return 0;

 return FUNC_3(*VAR_3, ((void*)0)) >= 0;
}
