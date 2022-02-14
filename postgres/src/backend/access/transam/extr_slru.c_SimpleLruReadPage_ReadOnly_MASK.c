
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_7__ {TYPE_1__* shared; } ;
struct TYPE_6__ {int num_slots; int* page_number; scalar_t__* page_status; int ControlLock; } ;
typedef TYPE_1__* SlruShared ;
typedef TYPE_2__* SlruCtl ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_2__*,int,int,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;

int
FUNC_4(SlruCtl VAR_4, int VAR_5, TransactionId VAR_6)
{
 SlruShared VAR_7 = VAR_4->shared;
 int VAR_8;


 FUNC_0(VAR_7->ControlLock, VAR_1);


 for (VAR_8 = 0; VAR_8 < VAR_7->num_slots; VAR_8++)
 {
  if (VAR_7->page_number[VAR_8] == VAR_5 &&
   VAR_7->page_status[VAR_8] != VAR_2 &&
   VAR_7->page_status[VAR_8] != VAR_3)
  {

   FUNC_3(VAR_7, VAR_8);
   return VAR_8;
  }
 }


 FUNC_1(VAR_7->ControlLock);
 FUNC_0(VAR_7->ControlLock, VAR_0);

 return FUNC_2(VAR_4, VAR_5, 1, VAR_6);
}
