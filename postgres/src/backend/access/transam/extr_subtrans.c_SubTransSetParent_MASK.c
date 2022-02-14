
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ TransactionId ;
struct TYPE_5__ {TYPE_1__* shared; } ;
struct TYPE_4__ {int* page_dirty; scalar_t__* page_buffer; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*,int,int,scalar_t__) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

void
FUNC_8(TransactionId VAR_4, TransactionId VAR_5)
{
 int VAR_6 = FUNC_7(VAR_4);
 int VAR_7 = FUNC_6(VAR_4);
 int VAR_8;
 TransactionId *VAR_9;

 FUNC_0(FUNC_5(VAR_5));
 FUNC_0(FUNC_4(VAR_4, VAR_5));

 FUNC_1(VAR_3, VAR_1);

 VAR_8 = FUNC_3(VAR_2, VAR_6, 1, VAR_4);
 VAR_9 = (TransactionId *) VAR_2->shared->page_buffer[VAR_8];
 VAR_9 += VAR_7;






 if (*VAR_9 != VAR_5)
 {
  FUNC_0(*VAR_9 == VAR_0);
  *VAR_9 = VAR_5;
  VAR_2->shared->page_dirty[VAR_8] = 1;
 }

 FUNC_2(VAR_3);
}
