
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_9__ {TYPE_2__* pages; scalar_t__ isLogged; } ;
struct TYPE_8__ {int flags; int buffer; scalar_t__ image; int deltaLen; int delta; } ;
struct TYPE_7__ {scalar_t__ pd_upper; scalar_t__ pd_lower; } ;
typedef TYPE_1__* PageHeader ;
typedef TYPE_2__ PageData ;
typedef scalar_t__ Page ;
typedef TYPE_3__ GenericXLogState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int,int ,int) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,int ,scalar_t__) ;
 int FUNC_13 (TYPE_3__*) ;

XLogRecPtr
FUNC_14(GenericXLogState *VAR_7)
{
 XLogRecPtr VAR_8;
 int VAR_9;

 if (VAR_7->isLogged)
 {

  FUNC_6();

  FUNC_5();

  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  {
   PageData *VAR_10 = &VAR_7->pages[VAR_9];
   Page VAR_11;
   PageHeader VAR_12;

   if (FUNC_1(VAR_10->buffer))
    continue;

   VAR_11 = FUNC_0(VAR_10->buffer);
   VAR_12 = (PageHeader) VAR_10->image;

   if (VAR_10->flags & VAR_1)
   {







    FUNC_11(VAR_11, VAR_10->image, VAR_12->pd_lower);
    FUNC_12(VAR_11 + VAR_12->pd_lower, 0,
        VAR_12->pd_upper - VAR_12->pd_lower);
    FUNC_11(VAR_11 + VAR_12->pd_upper,
        VAR_10->image + VAR_12->pd_upper,
        VAR_0 - VAR_12->pd_upper);

    FUNC_9(VAR_9, VAR_10->buffer,
           VAR_4 | VAR_5);
   }
   else
   {




    FUNC_10(VAR_10, VAR_11, (Page) VAR_10->image);


    FUNC_11(VAR_11, VAR_10->image, VAR_12->pd_lower);
    FUNC_12(VAR_11 + VAR_12->pd_lower, 0,
        VAR_12->pd_upper - VAR_12->pd_lower);
    FUNC_11(VAR_11 + VAR_12->pd_upper,
        VAR_10->image + VAR_12->pd_upper,
        VAR_0 - VAR_12->pd_upper);

    FUNC_9(VAR_9, VAR_10->buffer, VAR_5);
    FUNC_8(VAR_9, VAR_10->delta, VAR_10->deltaLen);
   }
  }


  VAR_8 = FUNC_7(VAR_6, 0);


  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  {
   PageData *VAR_13 = &VAR_7->pages[VAR_9];

   if (FUNC_1(VAR_13->buffer))
    continue;
   FUNC_4(FUNC_0(VAR_13->buffer), VAR_8);
   FUNC_3(VAR_13->buffer);
  }
  FUNC_2();
 }
 else
 {

  FUNC_5();
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  {
   PageData *VAR_14 = &VAR_7->pages[VAR_9];

   if (FUNC_1(VAR_14->buffer))
    continue;
   FUNC_11(FUNC_0(VAR_14->buffer),
       VAR_14->image,
       VAR_0);

   FUNC_3(VAR_14->buffer);
  }
  FUNC_2();

  VAR_8 = VAR_2;
 }

 FUNC_13(VAR_7);

 return VAR_8;
}
