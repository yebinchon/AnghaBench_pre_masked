
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_5__ {int (* seek ) (int ,scalar_t__,int) ;} ;
struct TYPE_6__ {scalar_t__ position; int user_data; TYPE_1__ op; } ;
typedef TYPE_2__ CdioDataSource_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;

int
FUNC_3(CdioDataSource_t* VAR_2, off_t VAR_3, int VAR_4)
{
  if (!VAR_2) return VAR_1;

  if (!FUNC_0(VAR_2))

    return VAR_0;

  if (VAR_3 < 0) return VAR_0;
  if (VAR_2->position < 0) return VAR_0;

  if (VAR_2->position != VAR_3) {



    VAR_2->position = VAR_3;
    return VAR_2->op.seek(VAR_2->user_data, VAR_3, VAR_4);
  }

  return 0;
}
