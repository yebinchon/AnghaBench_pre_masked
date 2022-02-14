
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int track_t ;
struct TYPE_4__ {int (* get_first_track_num ) (int ) ;} ;
struct TYPE_5__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

track_t
FUNC_2(const CdIo_t *VAR_1)
{
  if (((void*)0) == VAR_1) {
    FUNC_0("Null CdIo object passed\n");
    return VAR_0;
  }


  if (VAR_1->op.get_first_track_num) {
    return VAR_1->op.get_first_track_num (VAR_1->env);
  } else {
    return VAR_0;
  }
}
