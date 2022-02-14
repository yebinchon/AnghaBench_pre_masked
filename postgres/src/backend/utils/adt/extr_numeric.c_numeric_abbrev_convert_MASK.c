
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int input_count; void* buf; } ;
struct TYPE_5__ {TYPE_2__* ssup_extra; } ;
typedef TYPE_1__* SortSupport ;
typedef scalar_t__ Size ;
typedef scalar_t__ Pointer ;
typedef int NumericVar ;
typedef TYPE_2__ NumericSortSupport ;
typedef scalar_t__ Numeric ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*,scalar_t__) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (scalar_t__,int *) ;
 int FUNC_10 (int ,int ,scalar_t__) ;
 int FUNC_11 (int *,TYPE_2__*) ;
 int FUNC_12 (void*) ;

__attribute__((used)) static Datum
FUNC_13(Datum VAR_4, SortSupport VAR_5)
{
 NumericSortSupport *VAR_6 = VAR_5->ssup_extra;
 void *VAR_7 = FUNC_3(VAR_4);
 Numeric VAR_8;
 Datum VAR_9;

 VAR_6->input_count += 1;





 if (FUNC_5(VAR_7))
 {
  void *VAR_10 = VAR_6->buf;
  Size VAR_11 = FUNC_8(VAR_7) - VAR_3;

  FUNC_0(VAR_11 <= VAR_1 - VAR_3);

  FUNC_4(VAR_10, VAR_2 + VAR_11);
  FUNC_10(FUNC_6(VAR_10), FUNC_7(VAR_7), VAR_11);

  VAR_8 = (Numeric) VAR_10;
 }
 else
  VAR_8 = (Numeric) VAR_7;

 if (FUNC_2(VAR_8))
 {
  VAR_9 = VAR_0;
 }
 else
 {
  NumericVar VAR_12;

  FUNC_9(VAR_8, &VAR_12);

  VAR_9 = FUNC_11(&VAR_12, VAR_6);
 }


 if ((Pointer) VAR_7 != FUNC_1(VAR_4))
  FUNC_12(VAR_7);

 return VAR_9;
}
