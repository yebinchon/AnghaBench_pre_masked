
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ XidStatus ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_5__ {TYPE_1__* shared; } ;
struct TYPE_4__ {scalar_t__* page_number; int* page_dirty; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(TransactionId VAR_6, int VAR_7,
           TransactionId *VAR_8, XidStatus VAR_9,
           XLogRecPtr VAR_10, int VAR_11)
{
 int VAR_12;
 int VAR_13;

 FUNC_0(VAR_9 == VAR_4 ||
     VAR_9 == VAR_3 ||
     (VAR_9 == VAR_5 && !FUNC_3(VAR_6)));
 FUNC_0(FUNC_1(VAR_0, VAR_2));
 VAR_12 = FUNC_2(VAR_1, VAR_11, FUNC_6(VAR_10), VAR_6);
 if (FUNC_3(VAR_6))
 {

  if (VAR_9 == VAR_4)
  {
   for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
   {
    FUNC_0(VAR_1->shared->page_number[VAR_12] == FUNC_5(VAR_8[VAR_13]));
    FUNC_4(VAR_8[VAR_13],
            VAR_5,
            VAR_10, VAR_12);
   }
  }


  FUNC_4(VAR_6, VAR_9, VAR_10, VAR_12);
 }


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
 {
  FUNC_0(VAR_1->shared->page_number[VAR_12] == FUNC_5(VAR_8[VAR_13]));
  FUNC_4(VAR_8[VAR_13], VAR_9, VAR_10, VAR_12);
 }

 VAR_1->shared->page_dirty[VAR_12] = 1;
}
