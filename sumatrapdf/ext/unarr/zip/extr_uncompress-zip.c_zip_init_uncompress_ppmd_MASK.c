
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* In; } ;
struct TYPE_17__ {TYPE_2__ Stream; } ;
struct TYPE_12__ {int Read; } ;
struct TYPE_13__ {TYPE_3__ super; TYPE_7__* zip; int * input; } ;
struct TYPE_10__ {int Free; int Alloc; } ;
struct TYPE_14__ {TYPE_9__ ctx; TYPE_4__ bytein; TYPE_1__ alloc; } ;
struct TYPE_15__ {TYPE_5__ ppmd8; } ;
struct ar_archive_zip_uncomp {TYPE_6__ state; int input; } ;
struct TYPE_16__ {struct ar_archive_zip_uncomp uncomp; } ;
typedef TYPE_7__ ar_archive_zip ;


 int FUNC_0 (TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_1(ar_archive_zip *VAR_3)
{
    struct ar_archive_zip_uncomp *VAR_4 = &VAR_3->uncomp;
    VAR_4->state.ppmd8.alloc.Alloc = VAR_0;
    VAR_4->state.ppmd8.alloc.Free = VAR_2;
    VAR_4->state.ppmd8.bytein.super.Read = VAR_1;
    VAR_4->state.ppmd8.bytein.input = &VAR_4->input;
    VAR_4->state.ppmd8.bytein.zip = VAR_3;
    VAR_4->state.ppmd8.ctx.Stream.In = &VAR_4->state.ppmd8.bytein.super;
    FUNC_0(&VAR_4->state.ppmd8.ctx);
    return 1;
}
