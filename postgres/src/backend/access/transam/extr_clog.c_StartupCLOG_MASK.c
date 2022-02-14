
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_6__ {TYPE_1__* shared; } ;
struct TYPE_5__ {int nextFullXid; } ;
struct TYPE_4__ {int latest_page_number; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(void)
{
 TransactionId VAR_4 = FUNC_3(VAR_3->nextFullXid);
 int VAR_5 = FUNC_2(VAR_4);

 FUNC_0(VAR_0, VAR_2);




 VAR_1->shared->latest_page_number = VAR_5;

 FUNC_1(VAR_0);
}
