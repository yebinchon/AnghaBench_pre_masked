
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* open ) (int ) ;} ;
struct TYPE_5__ {int is_open; scalar_t__ position; int user_data; TYPE_1__ op; } ;
typedef TYPE_2__ CdioDataSource_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(CdioDataSource_t *VAR_0)
{
  if (!VAR_0) return 0;

  if (!VAR_0->is_open) {
    if (VAR_0->op.open(VAR_0->user_data)) {
      FUNC_1 ("could not open input stream...");
      return 0;
    } else {
      FUNC_0 ("opened source...");
      VAR_0->is_open = 1;
      VAR_0->position = 0;
    }
  }
  return 1;
}
