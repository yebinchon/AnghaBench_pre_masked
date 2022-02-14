
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demuxer {int fully_read; } ;
struct MPContext {TYPE_1__* opts; } ;
struct TYPE_2__ {scalar_t__ demuxer_thread; } ;


 int FUNC_0 (struct demuxer*,int ,struct MPContext*) ;
 int FUNC_1 (struct demuxer*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct MPContext *VAR_1, struct demuxer *VAR_2)
{
    if (VAR_1->opts->demuxer_thread && !VAR_2->fully_read) {
        FUNC_0(VAR_2, VAR_0, VAR_1);
        FUNC_1(VAR_2);
    }
}
