
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* shared; } ;
struct TYPE_7__ {scalar_t__* page_status; int* page_dirty; int* page_number; int latest_page_number; int * page_buffer; } ;
typedef TYPE_1__* SlruShared ;
typedef TYPE_2__* SlruCtl ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

int
FUNC_5(SlruCtl VAR_3, int VAR_4)
{
 SlruShared VAR_5 = VAR_3->shared;
 int VAR_6;


 VAR_6 = FUNC_4(VAR_3, VAR_4);
 FUNC_0(VAR_5->page_status[VAR_6] == VAR_1 ||
     (VAR_5->page_status[VAR_6] == VAR_2 &&
   !VAR_5->page_dirty[VAR_6]) ||
     VAR_5->page_number[VAR_6] == VAR_4);


 VAR_5->page_number[VAR_6] = VAR_4;
 VAR_5->page_status[VAR_6] = VAR_2;
 VAR_5->page_dirty[VAR_6] = 1;
 FUNC_3(VAR_5, VAR_6);


 FUNC_1(VAR_5->page_buffer[VAR_6], 0, VAR_0);


 FUNC_2(VAR_3, VAR_6);


 VAR_5->latest_page_number = VAR_4;

 return VAR_6;
}
