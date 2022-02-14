
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {void* first; void* count; } ;
struct TYPE_9__ {TYPE_2__* font; } ;
struct TYPE_7__ {void* last_char; scalar_t__ first_char; } ;
struct TYPE_8__ {TYPE_1__ header; } ;
typedef void* FT_UInt32 ;
typedef int FT_Pointer ;
typedef int FT_Error ;
typedef TYPE_2__* FNT_Font ;
typedef TYPE_3__* FNT_Face ;
typedef TYPE_4__* FNT_CMap ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static FT_Error
  FUNC_2( FNT_CMap VAR_0,
                 FT_Pointer VAR_1 )
  {
    FNT_Face VAR_2 = (FNT_Face)FUNC_0( VAR_0 );
    FNT_Font VAR_3 = VAR_2->font;

    FUNC_1( VAR_1 );


    VAR_0->first = (FT_UInt32) VAR_3->header.first_char;
    VAR_0->count = (FT_UInt32)( VAR_3->header.last_char - VAR_0->first + 1 );

    return 0;
  }
