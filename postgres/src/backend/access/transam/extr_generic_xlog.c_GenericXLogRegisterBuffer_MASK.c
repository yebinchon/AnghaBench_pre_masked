
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pages; } ;
struct TYPE_4__ {scalar_t__ buffer; int flags; int image; } ;
typedef TYPE_1__ PageData ;
typedef int * Page ;
typedef TYPE_2__ GenericXLogState ;
typedef scalar_t__ Buffer ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int ) ;

Page
FUNC_4(GenericXLogState *VAR_3, Buffer VAR_4, int VAR_5)
{
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
 {
  PageData *VAR_7 = &VAR_3->pages[VAR_6];

  if (FUNC_1(VAR_7->buffer))
  {

   VAR_7->buffer = VAR_4;
   VAR_7->flags = VAR_5;
   FUNC_3(VAR_7->image, FUNC_0(VAR_4), VAR_0);
   return (Page) VAR_7->image;
  }
  else if (VAR_7->buffer == VAR_4)
  {




   return (Page) VAR_7->image;
  }
 }

 FUNC_2(VAR_1, "maximum number %d of generic xlog buffers is exceeded",
   VAR_2);

 return ((void*)0);
}
