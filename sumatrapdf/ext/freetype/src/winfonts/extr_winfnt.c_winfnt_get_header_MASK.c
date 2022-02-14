
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* font; } ;
struct TYPE_3__ {int header; } ;
typedef int FT_WinFNT_HeaderRec ;
typedef scalar_t__ FT_Face ;
typedef int FT_Error ;
typedef TYPE_1__* FNT_Font ;
typedef TYPE_2__* FNT_Face ;



__attribute__((used)) static FT_Error
  FUNC_0( FT_Face VAR_0,
                     FT_WinFNT_HeaderRec *VAR_1 )
  {
    FNT_Font VAR_2 = ((FNT_Face)VAR_0)->font;


    *VAR_1 = VAR_2->header;

    return 0;
  }
