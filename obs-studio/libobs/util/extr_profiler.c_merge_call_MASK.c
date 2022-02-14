
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {scalar_t__ expected_time_between_calls; int overhead; int times; int times_between_calls; } ;
typedef TYPE_2__ profile_entry ;
struct TYPE_9__ {size_t num; TYPE_3__* array; } ;
struct TYPE_11__ {int overhead_end; int end_time; int start_time; int overhead_start; int name; TYPE_1__ children; } ;
typedef TYPE_3__ profile_call ;


 int FUNC_0 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(profile_entry *VAR_0, profile_call *VAR_1,
         profile_call *VAR_2)
{
 const size_t VAR_3 = VAR_1->children.num;
 for (size_t VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  profile_call *VAR_5 = &VAR_1->children.array[VAR_4];
  FUNC_4(FUNC_2(VAR_0, VAR_5->name), VAR_5, ((void*)0));
 }

 if (VAR_0->expected_time_between_calls != 0 && VAR_2) {
  FUNC_3(&VAR_0->times_between_calls, 1);
  uint64_t VAR_6 = FUNC_1(VAR_2->start_time,
      VAR_1->start_time);
  FUNC_0(&VAR_0->times_between_calls, VAR_6, 1);
 }

 FUNC_3(&VAR_0->times, 1);
 uint64_t VAR_7 = FUNC_1(VAR_1->start_time, VAR_1->end_time);
 FUNC_0(&VAR_0->times, VAR_7, 1);







}
