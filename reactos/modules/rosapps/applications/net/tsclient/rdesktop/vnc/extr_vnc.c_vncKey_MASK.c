
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct _rfbClientRec {int dummy; } ;
typedef scalar_t__ rfbKeySym ;
typedef scalar_t__ rfbBool ;
struct TYPE_4__ {scalar_t__ scancode; int member_1; int member_0; } ;
typedef TYPE_1__ key_translation ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_1__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ) ;
 scalar_t__* VAR_6 ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 TYPE_1__ FUNC_4 (scalar_t__,int ,int ) ;

void
FUNC_5(rfbBool VAR_7, rfbKeySym VAR_8, struct _rfbClientRec *VAR_9)
{
 uint32 VAR_10 = FUNC_3(((void*)0));
 key_translation VAR_11 = { 0, 0 };

 if (VAR_8 >= VAR_0 && VAR_8 <= VAR_2)
 {

  VAR_6[VAR_8 - VAR_0] = VAR_7;
 }

 if (VAR_7)
 {

  if (FUNC_1(VAR_8, 0, VAR_10, VAR_5))
   return;


  VAR_11 = FUNC_4(VAR_8, 0, 0);

  if (VAR_11.scancode == 0)
   return;

  FUNC_0(VAR_10, VAR_11);

  FUNC_2(VAR_10, VAR_3, VAR_11.scancode);
 }
 else
 {

  if (FUNC_1(VAR_8, 0, VAR_10, VAR_1))
   return;


  VAR_11 = FUNC_4(VAR_8, 0, 0);

  if (VAR_11.scancode == 0)
   return;

  FUNC_2(VAR_10, VAR_4, VAR_11.scancode);
 }
}
