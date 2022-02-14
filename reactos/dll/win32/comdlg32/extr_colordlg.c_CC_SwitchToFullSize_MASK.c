
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int hwndSelf; } ;
struct TYPE_8__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ CCPRIV ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,int ,int ,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8( CCPRIV *VAR_14, const RECT *VAR_15 )
{
 int VAR_16;

 FUNC_3( FUNC_4(VAR_14->hwndSelf, VAR_3), VAR_0);
 FUNC_2(VAR_14);
 for (VAR_16 = VAR_5; VAR_16 <= VAR_4; VAR_16++)
   FUNC_6( FUNC_4(VAR_14->hwndSelf, VAR_16), VAR_13);
 for (VAR_16 = VAR_7; VAR_16 <= VAR_2; VAR_16++)
   FUNC_6( FUNC_4(VAR_14->hwndSelf, VAR_16), VAR_13);
 FUNC_6( FUNC_4(VAR_14->hwndSelf, VAR_9), VAR_13);
 FUNC_6( FUNC_4(VAR_14->hwndSelf, VAR_1), VAR_13);
 FUNC_6( FUNC_4(VAR_14->hwndSelf, 1090), VAR_13);

 if (VAR_15)
  FUNC_5(VAR_14->hwndSelf, 0, 0, 0, VAR_15->right-VAR_15->left,
   VAR_15->bottom-VAR_15->top, VAR_11|VAR_12);

 FUNC_6( FUNC_4(VAR_14->hwndSelf, VAR_8), VAR_13);
 FUNC_6( FUNC_4(VAR_14->hwndSelf, VAR_10), VAR_13);

 FUNC_1(VAR_14);
 FUNC_0(VAR_14);
 FUNC_6( FUNC_4( VAR_14->hwndSelf, VAR_6), VAR_13);
 FUNC_7( FUNC_4(VAR_14->hwndSelf, VAR_6) );
}
