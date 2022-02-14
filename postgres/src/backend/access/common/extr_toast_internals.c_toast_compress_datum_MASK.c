
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct varlena {int dummy; } ;
typedef scalar_t__ int32 ;
struct TYPE_3__ {scalar_t__ min_input_size; scalar_t__ max_input_size; } ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (struct varlena*) ;
 int FUNC_4 (struct varlena*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct varlena*) ;
 int FUNC_6 (struct varlena*,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct varlena*) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,int ,TYPE_1__*) ;

Datum
FUNC_14(Datum VAR_2)
{
 struct varlena *VAR_3;
 int32 VAR_4 = FUNC_10(FUNC_1(VAR_2));
 int32 VAR_5;

 FUNC_0(!FUNC_8(FUNC_1(VAR_2)));
 FUNC_0(!FUNC_7(FUNC_1(VAR_2)));





 if (VAR_4 < VAR_0->min_input_size ||
  VAR_4 > VAR_0->max_input_size)
  return FUNC_3(((void*)0));

 VAR_3 = (struct varlena *) FUNC_11(FUNC_2(VAR_4) +
         VAR_1);
 VAR_5 = FUNC_13(FUNC_9(FUNC_1(VAR_2)),
      VAR_4,
      FUNC_5(VAR_3),
      VAR_0);
 if (VAR_5 >= 0 &&
  VAR_5 + VAR_1 < VAR_4 - 2)
 {
  FUNC_6(VAR_3, VAR_4);
  FUNC_4(VAR_3, VAR_5 + VAR_1);

  return FUNC_3(VAR_3);
 }
 else
 {

  FUNC_12(VAR_3);
  return FUNC_3(((void*)0));
 }
}
