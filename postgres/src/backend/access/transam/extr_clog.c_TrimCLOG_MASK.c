
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_7__ {int nextFullXid; } ;
struct TYPE_6__ {TYPE_1__* shared; } ;
struct TYPE_5__ {int latest_page_number; char** page_buffer; int* page_dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (char*,int ,int) ;
 TYPE_3__* VAR_5 ;
 int FUNC_3 (TYPE_2__*,int,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void
FUNC_9(void)
{
 TransactionId VAR_6 = FUNC_8(VAR_5->nextFullXid);
 int VAR_7 = FUNC_6(VAR_6);

 FUNC_0(VAR_2, VAR_4);




 VAR_3->shared->latest_page_number = VAR_7;
 if (FUNC_7(VAR_6) != 0)
 {
  int VAR_8 = FUNC_5(VAR_6);
  int VAR_9 = FUNC_4(VAR_6) * VAR_1;
  int VAR_10;
  char *VAR_11;

  VAR_10 = FUNC_3(VAR_3, VAR_7, 0, VAR_6);
  VAR_11 = VAR_3->shared->page_buffer[VAR_10] + VAR_8;


  *VAR_11 &= (1 << VAR_9) - 1;

  FUNC_2(VAR_11 + 1, 0, VAR_0 - VAR_8 - 1);

  VAR_3->shared->page_dirty[VAR_10] = 1;
 }

 FUNC_1(VAR_2);
}
