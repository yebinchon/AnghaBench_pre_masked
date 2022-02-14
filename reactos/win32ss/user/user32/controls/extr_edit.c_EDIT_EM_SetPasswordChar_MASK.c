
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_5__ {int style; scalar_t__ password_char; int hwndSelf; } ;
typedef int LONG ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(EDITSTATE *VAR_4, WCHAR VAR_5)
{
 LONG VAR_6;

 if (VAR_4->style & VAR_0)
  return;

 if (VAR_4->password_char == VAR_5)
  return;

        VAR_6 = FUNC_2( VAR_4->hwndSelf, VAR_2 );
 VAR_4->password_char = VAR_5;
 if (VAR_5) {
            FUNC_3( VAR_4->hwndSelf, VAR_2, VAR_6 | VAR_1 );
            VAR_4->style |= VAR_1;
 } else {
            FUNC_3( VAR_4->hwndSelf, VAR_2, VAR_6 & ~VAR_1 );
            VAR_4->style &= ~VAR_1;
 }
 FUNC_0(VAR_4);
 FUNC_1(VAR_4, ((void*)0), VAR_3);
}
