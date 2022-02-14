
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct recorder {TYPE_1__* ctx; } ;
struct TYPE_4__ {int time_base; } ;
struct TYPE_3__ {TYPE_2__** streams; } ;
typedef TYPE_2__ AVStream ;
typedef int AVPacket ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct recorder *VAR_1, AVPacket *VAR_2) {
    AVStream *VAR_3 = VAR_1->ctx->streams[0];
    FUNC_0(VAR_2, VAR_0, VAR_3->time_base);
}
