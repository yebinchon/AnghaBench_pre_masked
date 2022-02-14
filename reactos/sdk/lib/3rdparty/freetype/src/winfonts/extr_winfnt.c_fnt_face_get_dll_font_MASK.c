
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_23__ {scalar_t__ magic; int lfanew; int resource_tab_offset; int rname_tab_offset; int machine; int number_of_sections; int size_of_optional_header; int magic32; scalar_t__ rsrc_virtual_address; int name; scalar_t__ virtual_address; int pointer_to_raw_data; int number_of_named_entries; int number_of_id_entries; int offset; int offset_to_data; int size; int code_page; int size_of_raw_data; int rsrc_size; } ;
typedef TYPE_2__ WinPE_RsrcDirRec ;
typedef TYPE_2__ WinPE_RsrcDirEntryRec ;
typedef TYPE_2__ WinPE_RsrcDataEntryRec ;
typedef TYPE_2__ WinPE32_SectionRec ;
typedef TYPE_2__ WinPE32_HeaderRec ;
typedef TYPE_2__ WinNE_HeaderRec ;
typedef TYPE_2__ WinMZ_HeaderRec ;
struct TYPE_24__ {int size; scalar_t__ cursor; scalar_t__ limit; } ;
struct TYPE_22__ {int num_faces; } ;
struct TYPE_21__ {int memory; TYPE_9__* stream; } ;
struct TYPE_20__ {int offset; int fnt_size; } ;
struct TYPE_19__ {TYPE_1__ root; TYPE_11__* font; } ;
typedef int FT_UShort ;
typedef int FT_ULong ;
typedef TYPE_9__* FT_Stream ;
typedef int FT_Memory ;
typedef int FT_Long ;
typedef scalar_t__ FT_Int ;
typedef scalar_t__ FT_Error ;
typedef TYPE_10__* FNT_Face ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_17__* FUNC_2 (TYPE_10__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_11__*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (TYPE_10__*) ;
 scalar_t__ FUNC_13 (TYPE_11__*,TYPE_9__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static FT_Error
  FUNC_14( FNT_Face VAR_13,
                         FT_Int VAR_14 )
  {
    FT_Error VAR_15;
    FT_Stream VAR_16 = FUNC_2( VAR_13 )->stream;
    FT_Memory VAR_17 = FUNC_2( VAR_13 )->memory;
    WinMZ_HeaderRec VAR_18;
    FT_Long VAR_19;


    VAR_13->font = ((void*)0);

    VAR_19 = FUNC_0( VAR_14 ) & 0xFFFF;


    if ( FUNC_9( 0 ) ||
         FUNC_8( VAR_6, &VAR_18 ) )
      goto Exit;

    VAR_15 = FUNC_1( VAR_2 );
    if ( VAR_18.magic == VAR_3 )
    {

      WinNE_HeaderRec VAR_20;


      FUNC_11(( "MZ signature found\n" ));

      if ( FUNC_9( VAR_18.lfanew ) ||
           FUNC_8( VAR_7, &VAR_20 ) )
        goto Exit;

      VAR_15 = FUNC_1( VAR_2 );
      if ( VAR_20.magic == VAR_4 )
      {

        FT_ULong VAR_21 = VAR_18.lfanew +
                                   VAR_20.resource_tab_offset;
        FT_UShort VAR_22;
        FT_UShort VAR_23 = 0;
        FT_ULong VAR_24 = 0;


        FUNC_11(( "NE signature found\n" ));

        if ( FUNC_9( VAR_21 ) ||
             FUNC_3( VAR_20.rname_tab_offset -
                             VAR_20.resource_tab_offset ) )
          goto Exit;

        VAR_22 = FUNC_5();
        if ( VAR_22 > 16 )
        {
          FUNC_11(( "invalid alignment shift count for resource data\n" ));
          VAR_15 = FUNC_10( VAR_1 );
          goto Exit;
        }


        for (;;)
        {
          FT_UShort VAR_25, VAR_26;


          VAR_25 = FUNC_5();
          if ( !VAR_25 )
            break;

          VAR_26 = FUNC_5();

          if ( VAR_25 == 0x8008U )
          {
            VAR_23 = VAR_26;
            VAR_24 = FUNC_7() + 4 +
                          (FT_ULong)( VAR_16->cursor - VAR_16->limit );
            break;
          }

          VAR_16->cursor += 4 + VAR_26 * 12;
        }

        FUNC_4();

        if ( !VAR_23 || !VAR_24 )
        {
          FUNC_11(( "this file doesn't contain any FNT resources\n" ));
          VAR_15 = FUNC_10( VAR_1 );
          goto Exit;
        }



        if ( VAR_23 * 118UL > VAR_16->size )
        {
          FUNC_11(( "invalid number of faces\n" ));
          VAR_15 = FUNC_10( VAR_1 );
          goto Exit;
        }

        VAR_13->root.num_faces = VAR_23;

        if ( VAR_14 < 0 )
          goto Exit;

        if ( VAR_19 >= VAR_23 )
        {
          VAR_15 = FUNC_10( VAR_0 );
          goto Exit;
        }

        if ( FUNC_6( VAR_13->font ) )
          goto Exit;

        if ( FUNC_9( VAR_24 + (FT_ULong)VAR_19 * 12 ) ||
             FUNC_3( 12 ) )
          goto Fail;

        VAR_13->font->offset = (FT_ULong)FUNC_5() << VAR_22;
        VAR_13->font->fnt_size = (FT_ULong)FUNC_5() << VAR_22;

        VAR_16->cursor += 8;

        FUNC_4();

        VAR_15 = FUNC_13( VAR_13->font, VAR_16 );
      }
      else if ( VAR_20.magic == VAR_5 )
      {
        WinPE32_HeaderRec VAR_27;
        WinPE32_SectionRec VAR_28;
        WinPE_RsrcDirRec VAR_29, VAR_30, VAR_31;
        WinPE_RsrcDirEntryRec VAR_32, VAR_33, VAR_34;
        WinPE_RsrcDataEntryRec VAR_35;

        FT_ULong VAR_36, VAR_37, VAR_38;
        FT_UShort VAR_39, VAR_40, VAR_41;


        FUNC_11(( "PE signature found\n" ));

        if ( FUNC_9( VAR_18.lfanew ) ||
             FUNC_8( VAR_8, &VAR_27 ) )
          goto Exit;

        FUNC_11(( "magic %04lx, machine %02x, number_of_sections %u, "
                    "size_of_optional_header %02x\n"
                    "magic32 %02x, rsrc_virtual_address %04lx, "
                    "rsrc_size %04lx\n",
                    VAR_27.magic, VAR_27.machine,
                    VAR_27.number_of_sections,
                    VAR_27.size_of_optional_header,
                    VAR_27.magic32, VAR_27.rsrc_virtual_address,
                    VAR_27.rsrc_size ));

        if ( VAR_27.magic != VAR_5 ||
             VAR_27.machine != 0x014C ||
             VAR_27.size_of_optional_header != 0xE0 ||
             VAR_27.magic32 != 0x10B )
        {
          FUNC_11(( "this file has an invalid PE header\n" ));
          VAR_15 = FUNC_10( VAR_1 );
          goto Exit;
        }

        VAR_13->root.num_faces = 0;

        for ( VAR_39 = 0; VAR_39 < VAR_27.number_of_sections; VAR_39++ )
        {
          if ( FUNC_8( VAR_9,
                                      &VAR_28 ) )
            goto Exit;

          FUNC_11(( "name %.8s, va %04lx, size %04lx, offset %04lx\n",
                      VAR_28.name, VAR_28.virtual_address,
                      VAR_28.size_of_raw_data,
                      VAR_28.pointer_to_raw_data ));

          if ( VAR_27.rsrc_virtual_address ==
                 VAR_28.virtual_address )
            goto Found_rsrc_section;
        }

        FUNC_11(( "this file doesn't contain any resources\n" ));
        VAR_15 = FUNC_10( VAR_1 );
        goto Exit;

      Found_rsrc_section:
        FUNC_11(( "found resources section %.8s\n", VAR_28.name ));

        if ( FUNC_9( VAR_28.pointer_to_raw_data ) ||
             FUNC_8( VAR_12, &VAR_29 ) )
          goto Exit;

        VAR_36 = VAR_28.pointer_to_raw_data;

        for ( VAR_39 = 0; VAR_39 < VAR_29.number_of_named_entries +
                           VAR_29.number_of_id_entries; VAR_39++ )
        {
          if ( FUNC_9( VAR_36 + 16 + VAR_39 * 8 ) ||
               FUNC_8( VAR_11,
                                      &VAR_32 ) )
            goto Exit;

          if ( !(VAR_32 & 0x80000000UL ) )
          {
            VAR_15 = FUNC_10( VAR_1 );
            goto Exit;
          }

          VAR_32 &= ~0x80000000UL;

          VAR_37 = VAR_28.pointer_to_raw_data +
                            VAR_32;

          if ( FUNC_9( VAR_28.pointer_to_raw_data +
                               VAR_32 ) ||
               FUNC_8( VAR_12, &VAR_30 ) )
            goto Exit;

          for ( VAR_40 = 0; VAR_40 < VAR_30.number_of_named_entries +
                             VAR_30.number_of_id_entries; VAR_40++ )
          {
            if ( FUNC_9( VAR_37 + 16 + VAR_40 * 8 ) ||
                 FUNC_8( VAR_11,
                                        &VAR_33 ) )
              goto Exit;

            if ( !(VAR_33 & 0x80000000UL ) )
            {
              VAR_15 = FUNC_10( VAR_1 );
              goto Exit;
            }

            VAR_33 &= ~0x80000000UL;

            VAR_38 = VAR_28.pointer_to_raw_data +
                                VAR_33;

            if ( FUNC_9( VAR_28.pointer_to_raw_data +
                                   VAR_33 ) ||
                 FUNC_8( VAR_12, &VAR_31 ) )
              goto Exit;

            for ( VAR_41 = 0; VAR_41 < VAR_31.number_of_named_entries +
                               VAR_31.number_of_id_entries; VAR_41++ )
            {
              if ( FUNC_9( VAR_38 + 16 + VAR_41 * 8 ) ||
                   FUNC_8( VAR_11,
                                          &VAR_34 ) )
                goto Exit;

              if ( VAR_33 & 0x80000000UL )
              {
                VAR_15 = FUNC_10( VAR_1 );
                goto Exit;
              }

              if ( VAR_32 == 8 )
              {
                if ( FUNC_9( VAR_36 + VAR_34 ) ||
                     FUNC_8( VAR_10,
                                            &VAR_35 ) )
                  goto Exit;

                FUNC_11(( "found font #%lu, offset %04lx, "
                            "size %04lx, cp %lu\n",
                            VAR_33,
                            VAR_28.pointer_to_raw_data +
                              VAR_35.offset_to_data -
                              VAR_28.virtual_address,
                            VAR_35.size, VAR_35.code_page ));

                if ( VAR_19 == VAR_13->root.num_faces )
                {
                  if ( FUNC_6( VAR_13->font ) )
                    goto Exit;

                  VAR_13->font->offset = VAR_28.pointer_to_raw_data +
                                           VAR_35.offset_to_data -
                                           VAR_28.virtual_address;
                  VAR_13->font->fnt_size = VAR_35.size;

                  VAR_15 = FUNC_13( VAR_13->font, VAR_16 );
                  if ( VAR_15 )
                  {
                    FUNC_11(( "font #%lu load error 0x%x\n",
                                VAR_33, VAR_15 ));
                    goto Fail;
                  }
                  else
                    FUNC_11(( "font #%lu successfully loaded\n",
                                VAR_33 ));
                }

                VAR_13->root.num_faces++;
              }
            }
          }
        }
      }

      if ( !VAR_13->root.num_faces )
      {
        FUNC_11(( "this file doesn't contain any RT_FONT resources\n" ));
        VAR_15 = FUNC_10( VAR_1 );
        goto Exit;
      }

      if ( VAR_19 >= VAR_13->root.num_faces )
      {
        VAR_15 = FUNC_10( VAR_0 );
        goto Exit;
      }
    }

  Fail:
    if ( VAR_15 )
      FUNC_12( VAR_13 );

  Exit:
    return VAR_15;
  }
