
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* close ) (int ) ;} ;
struct TYPE_5__ {scalar_t__ position; scalar_t__ is_open; int user_data; TYPE_1__ op; } ;
typedef TYPE_2__ CdioDataSource_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(CdioDataSource_t *VAR_0)
{
  if (!VAR_0) return;

  if (VAR_0->is_open) {
    FUNC_0 ("closed source...");
    VAR_0->op.close(VAR_0->user_data);
    VAR_0->is_open = 0;
    VAR_0->position = 0;
  }
}
