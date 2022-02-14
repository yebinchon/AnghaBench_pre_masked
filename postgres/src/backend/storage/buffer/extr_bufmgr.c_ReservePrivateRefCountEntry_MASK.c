
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ buffer; scalar_t__ refcount; } ;
typedef TYPE_1__ PrivateRefCountEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* FUNC_1 (int ,void*,int ,int*) ;

__attribute__((used)) static void
FUNC_2(void)
{

 if (VAR_7 != ((void*)0))
  return;





 {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  {
   PrivateRefCountEntry *VAR_9;

   VAR_9 = &VAR_2[VAR_8];

   if (VAR_9->buffer == VAR_1)
   {
    VAR_7 = VAR_9;
    return;
   }
  }
 }





 {




  PrivateRefCountEntry *VAR_10;
  bool VAR_11;


  VAR_7 =
   &VAR_2[VAR_3++ % VAR_6];


  FUNC_0(VAR_7->buffer != VAR_1);


  VAR_10 = FUNC_1(VAR_4,
         (void *) &(VAR_7->buffer),
         VAR_0,
         &VAR_11);
  FUNC_0(!VAR_11);
  VAR_10->refcount = VAR_7->refcount;


  VAR_7->buffer = VAR_1;
  VAR_7->refcount = 0;

  VAR_5++;
 }
}
