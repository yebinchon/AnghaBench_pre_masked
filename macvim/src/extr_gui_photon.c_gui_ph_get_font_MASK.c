
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int_u ;
typedef int char_u ;
struct TYPE_3__ {scalar_t__ size; int style; } ;
typedef int * GuiFont ;
typedef TYPE_1__ FontQueryInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int *,int,int,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static GuiFont
FUNC_4(
 char_u *VAR_8,
 int_u VAR_9,
 int_u VAR_10,


 int_u VAR_11
 )
{
    char_u *VAR_12;
    FontQueryInfo VAR_13;
    int_u VAR_14;

    VAR_12 = FUNC_2(VAR_0);
    if (VAR_12 != ((void*)0))
    {
 if (FUNC_0(VAR_8, VAR_9, VAR_10,
      VAR_12) != ((void*)0))
 {

     VAR_14 = VAR_6;

     if (VAR_11 & VAR_2)
  VAR_14 |= VAR_5;
     if (VAR_11 & VAR_1)
  VAR_14 |= VAR_4;
     if (VAR_11 & VAR_3)
  VAR_14 |= VAR_7;

     FUNC_1(VAR_12, &VAR_13);

     if (VAR_13.size == 0)
  VAR_10 = 0;



     if (VAR_10 == VAR_13.size &&
      VAR_14 == (VAR_13.style & VAR_14))
  return (GuiFont)VAR_12;
 }
 FUNC_3(VAR_12);
    }
    return ((void*)0);
}
