
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int open_active; int open_done; scalar_t__ open_format; scalar_t__ open_url; scalar_t__ open_cancel; int * open_res_demuxer; int open_thread; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct MPContext *VAR_0)
{
    if (VAR_0->open_cancel)
        FUNC_3(VAR_0->open_cancel);

    if (VAR_0->open_active)
        FUNC_4(VAR_0->open_thread, ((void*)0));
    VAR_0->open_active = 0;

    if (VAR_0->open_res_demuxer)
        FUNC_2(VAR_0->open_res_demuxer);
    VAR_0->open_res_demuxer = ((void*)0);

    FUNC_0(&VAR_0->open_cancel);
    FUNC_0(&VAR_0->open_url);
    FUNC_0(&VAR_0->open_format);

    FUNC_1(&VAR_0->open_done, 0);
}
