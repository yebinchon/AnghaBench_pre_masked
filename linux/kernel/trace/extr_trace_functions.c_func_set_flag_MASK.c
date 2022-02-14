
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct trace_array {TYPE_1__* ops; int * current_trace; } ;
struct TYPE_5__ {int const val; } ;
struct TYPE_4__ {int func; } ;


 int VAR_0 ;

 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(struct trace_array *VAR_5, u32 VAR_6, u32 VAR_7, int VAR_8)
{
 switch (VAR_7) {
 case 128:

  if (!!VAR_8 == !!(VAR_1.val & 128))
   break;


  if (VAR_5->current_trace != &VAR_3)
   break;

  FUNC_1(VAR_5->ops);

  if (VAR_8) {
   VAR_5->ops->func = VAR_2;
   FUNC_0(VAR_5->ops);
  } else {
   VAR_5->ops->func = VAR_4;
   FUNC_0(VAR_5->ops);
  }

  break;
 default:
  return -VAR_0;
 }

 return 0;
}
