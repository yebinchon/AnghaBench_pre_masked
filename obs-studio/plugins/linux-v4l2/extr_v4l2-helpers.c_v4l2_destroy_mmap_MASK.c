
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint_fast32_t ;
struct v4l2_buffer_data {size_t count; TYPE_1__* info; } ;
typedef int int_fast32_t ;
struct TYPE_2__ {scalar_t__ start; int length; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ) ;

int_fast32_t FUNC_2(struct v4l2_buffer_data *VAR_1)
{
 for (uint_fast32_t VAR_2 = 0; VAR_2 < VAR_1->count; ++VAR_2) {
  if (VAR_1->info[VAR_2].start != VAR_0 && VAR_1->info[VAR_2].start != 0)
   FUNC_1(VAR_1->info[VAR_2].start, VAR_1->info[VAR_2].length);
 }

 if (VAR_1->count) {
  FUNC_0(VAR_1->info);
  VAR_1->count = 0;
 }

 return 0;
}
