
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_5__ {TYPE_1__* shared; } ;
struct TYPE_4__ {scalar_t__* page_buffer; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;

TransactionId
FUNC_7(TransactionId VAR_4)
{
 int VAR_5 = FUNC_6(VAR_4);
 int VAR_6 = FUNC_5(VAR_4);
 int VAR_7;
 TransactionId *VAR_8;
 TransactionId VAR_9;


 FUNC_0(FUNC_3(VAR_4, VAR_3));


 if (!FUNC_4(VAR_4))
  return VAR_0;



 VAR_7 = FUNC_2(VAR_1, VAR_5, VAR_4);
 VAR_8 = (TransactionId *) VAR_1->shared->page_buffer[VAR_7];
 VAR_8 += VAR_6;

 VAR_9 = *VAR_8;

 FUNC_1(VAR_2);

 return VAR_9;
}
