
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int version; int file_size; int file_type; scalar_t__ color_table_offset; scalar_t__ C_space; scalar_t__ B_space; scalar_t__ A_space; scalar_t__ flags; } ;
struct TYPE_6__ {int fnt_frame; int offset; TYPE_1__ header; } ;
typedef TYPE_1__* FT_WinFNT_Header ;
typedef int FT_UInt ;
typedef int FT_Stream ;
typedef int FT_Error ;
typedef scalar_t__ FT_Bool ;
typedef TYPE_2__* FNT_Font ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static FT_Error
  FUNC_6( FNT_Font VAR_2,
                 FT_Stream VAR_3 )
  {
    FT_Error VAR_4;
    FT_WinFNT_Header VAR_5 = &VAR_2->header;
    FT_Bool VAR_6;
    FT_UInt VAR_7;



    if ( FUNC_3( VAR_2->offset ) ||
         FUNC_2( VAR_1, VAR_5 ) )
      goto Exit;


    if ( VAR_5->version != 0x200 &&
         VAR_5->version != 0x300 )
    {
      FUNC_5(( "  not a Windows FNT file\n" ));
      VAR_4 = FUNC_4( VAR_0 );
      goto Exit;
    }

    VAR_6 = FUNC_0( VAR_2->header.version == 0x300 );
    VAR_7 = VAR_6 ? 148 : 118;

    if ( VAR_5->file_size < VAR_7 )
    {
      FUNC_5(( "  not a Windows FNT file\n" ));
      VAR_4 = FUNC_4( VAR_0 );
      goto Exit;
    }


    if ( VAR_5->version == 0x200 )
    {
      VAR_5->flags = 0;
      VAR_5->A_space = 0;
      VAR_5->B_space = 0;
      VAR_5->C_space = 0;

      VAR_5->color_table_offset = 0;
    }

    if ( VAR_5->file_type & 1 )
    {
      FUNC_5(( "[can't handle vector FNT fonts]\n" ));
      VAR_4 = FUNC_4( VAR_0 );
      goto Exit;
    }


    if ( FUNC_3( VAR_2->offset ) ||
         FUNC_1( VAR_5->file_size, VAR_2->fnt_frame ) )
      goto Exit;

  Exit:
    return VAR_4;
  }
