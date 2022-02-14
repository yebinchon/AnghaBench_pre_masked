
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int report_location; int callback_name; TYPE_3__* ctx; } ;
struct TYPE_7__ {TYPE_2__* slot; } ;
struct TYPE_5__ {int plugin; int name; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_4__ LogicalErrorCallbackState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ,...) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 LogicalErrorCallbackState *VAR_2 = (LogicalErrorCallbackState *) VAR_1;


 if (VAR_2->report_location != VAR_0)
  FUNC_1("slot \"%s\", output plugin \"%s\", in the %s callback, associated LSN %X/%X",
       FUNC_0(VAR_2->ctx->slot->data.name),
       FUNC_0(VAR_2->ctx->slot->data.plugin),
       VAR_2->callback_name,
       (uint32) (VAR_2->report_location >> 32),
       (uint32) VAR_2->report_location);
 else
  FUNC_1("slot \"%s\", output plugin \"%s\", in the %s callback",
       FUNC_0(VAR_2->ctx->slot->data.name),
       FUNC_0(VAR_2->ctx->slot->data.plugin),
       VAR_2->callback_name);
}
