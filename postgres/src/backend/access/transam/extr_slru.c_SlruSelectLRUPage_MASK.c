
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* PagePrecedes ) (int,int) ;TYPE_1__* shared; } ;
struct TYPE_6__ {int num_slots; int* page_number; scalar_t__* page_status; int* page_lru_count; int latest_page_number; int * page_dirty; int cur_lru_count; } ;
typedef TYPE_1__* SlruShared ;
typedef TYPE_2__* SlruCtl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(SlruCtl VAR_2, int VAR_3)
{
 SlruShared VAR_4 = VAR_2->shared;


 for (;;)
 {
  int VAR_5;
  int VAR_6;
  int VAR_7 = 0;
  int VAR_8 = -1;
  int VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11 = -1;
  int VAR_12 = 0;


  for (VAR_5 = 0; VAR_5 < VAR_4->num_slots; VAR_5++)
  {
   if (VAR_4->page_number[VAR_5] == VAR_3 &&
    VAR_4->page_status[VAR_5] != VAR_0)
    return VAR_5;
  }
  VAR_6 = (VAR_4->cur_lru_count)++;
  for (VAR_5 = 0; VAR_5 < VAR_4->num_slots; VAR_5++)
  {
   int VAR_13;
   int VAR_14;

   if (VAR_4->page_status[VAR_5] == VAR_0)
    return VAR_5;
   VAR_13 = VAR_6 - VAR_4->page_lru_count[VAR_5];
   if (VAR_13 < 0)
   {







    VAR_4->page_lru_count[VAR_5] = VAR_6;
    VAR_13 = 0;
   }
   VAR_14 = VAR_4->page_number[VAR_5];
   if (VAR_14 == VAR_4->latest_page_number)
    continue;
   if (VAR_4->page_status[VAR_5] == VAR_1)
   {
    if (VAR_13 > VAR_8 ||
     (VAR_13 == VAR_8 &&
      VAR_2->PagePrecedes(VAR_14,
            VAR_9)))
    {
     VAR_7 = VAR_5;
     VAR_8 = VAR_13;
     VAR_9 = VAR_14;
    }
   }
   else
   {
    if (VAR_13 > VAR_11 ||
     (VAR_13 == VAR_11 &&
      VAR_2->PagePrecedes(VAR_14,
            VAR_12)))
    {
     VAR_10 = VAR_5;
     VAR_11 = VAR_13;
     VAR_12 = VAR_14;
    }
   }
  }
  if (VAR_8 < 0)
  {
   FUNC_0(VAR_2, VAR_10);
   continue;
  }




  if (!VAR_4->page_dirty[VAR_7])
   return VAR_7;




  FUNC_1(VAR_2, VAR_7, ((void*)0));






 }
}
