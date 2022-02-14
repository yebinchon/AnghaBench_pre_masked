
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ListEntry; scalar_t__ BitmapGlyph; } ;
typedef TYPE_1__* PFONT_CACHE_ENTRY ;
typedef int FT_Glyph ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_5(PFONT_CACHE_ENTRY VAR_3)
{
    FUNC_1();

    FUNC_3((FT_Glyph)VAR_3->BitmapGlyph);
    FUNC_4(&VAR_3->ListEntry);
    FUNC_2(VAR_3, VAR_1);
    VAR_2--;
    FUNC_0(VAR_2 <= VAR_0);
}
