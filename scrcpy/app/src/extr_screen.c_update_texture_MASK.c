
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct screen {int texture; } ;
struct TYPE_3__ {int * linesize; int * data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ,int *,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct screen *VAR_0, const AVFrame *VAR_1) {
    FUNC_0(VAR_0->texture, ((void*)0),
            VAR_1->data[0], VAR_1->linesize[0],
            VAR_1->data[1], VAR_1->linesize[1],
            VAR_1->data[2], VAR_1->linesize[2]);
}
