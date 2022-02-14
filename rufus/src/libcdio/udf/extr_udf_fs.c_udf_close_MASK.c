
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cdio; int stream; scalar_t__ b_stream; } ;
typedef TYPE_1__ udf_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

bool
FUNC_3 (udf_t *VAR_0)
{
  if (!VAR_0) return 1;
  if (VAR_0->b_stream) {
    FUNC_1(VAR_0->stream);
  } else {
    FUNC_0(VAR_0->cdio);
  }



  FUNC_2(VAR_0);
  return 1;
}
