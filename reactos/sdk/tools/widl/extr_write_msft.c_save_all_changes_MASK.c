
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int varflags; int nrtypeinfos; } ;
struct TYPE_12__ {TYPE_5__* typelib; TYPE_4__ typelib_segdir; TYPE_4__ typelib_header; TYPE_4__* typelib_typeinfo_offsets; TYPE_4__ help_string_dll_offset; } ;
typedef TYPE_1__ msft_typelib_t ;
struct TYPE_13__ {int cval; } ;
typedef TYPE_2__ expr_t ;
struct TYPE_15__ {int attrs; } ;
typedef int MSFT_SegDir ;
typedef int MSFT_Header ;


 int VAR_0 ;
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
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (char*,char*,int) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_14(msft_typelib_t *VAR_16)
{
    int VAR_17;

    FUNC_1("save_all_changes(%p)\n", VAR_16);

    VAR_17 = sizeof(MSFT_Header) + sizeof(MSFT_SegDir);
    if(VAR_16->typelib_header.varflags & 0x100) VAR_17 += 4;
    VAR_17 += VAR_16->typelib_header.nrtypeinfos * 4;

    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_13);
    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_5);
    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_4);
    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_10);
    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_7);
    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_6);
    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_9);
    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_8);
    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_11);
    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_12);
    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_1);
    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_2);
    VAR_17 += FUNC_2(VAR_16, VAR_17, VAR_3);

    FUNC_3(VAR_16, VAR_17);

    VAR_14 = 0;
    FUNC_9();

    FUNC_11(&VAR_16->typelib_header, sizeof(VAR_16->typelib_header));
    if(VAR_16->typelib_header.varflags & 0x100)
        FUNC_11(&VAR_16->help_string_dll_offset, sizeof(VAR_16->help_string_dll_offset));

    FUNC_11(VAR_16->typelib_typeinfo_offsets, VAR_16->typelib_header.nrtypeinfos * 4);
    FUNC_11(&VAR_16->typelib_segdir, sizeof(VAR_16->typelib_segdir));
    FUNC_4( VAR_16, VAR_13 );
    FUNC_4( VAR_16, VAR_5 );
    FUNC_4( VAR_16, VAR_4 );
    FUNC_4( VAR_16, VAR_10 );
    FUNC_4( VAR_16, VAR_7 );
    FUNC_4( VAR_16, VAR_6 );
    FUNC_4( VAR_16, VAR_9 );
    FUNC_4( VAR_16, VAR_8 );
    FUNC_4( VAR_16, VAR_11 );
    FUNC_4( VAR_16, VAR_12 );
    FUNC_4( VAR_16, VAR_1 );
    FUNC_4( VAR_16, VAR_2 );
    FUNC_4( VAR_16, VAR_3 );

    FUNC_5(VAR_16);

    if (FUNC_13( VAR_15, ".res" ))
    {
        char VAR_18[13] = "#1";

        expr_t *VAR_19 = FUNC_8( VAR_16->typelib->attrs, VAR_0 );
        if (VAR_19)
            FUNC_12( VAR_18, "#%d", VAR_19->cval );
        FUNC_0( "TYPELIB", VAR_18 );
        FUNC_10( VAR_16->typelib );



    }
    else FUNC_6( VAR_15 );
}
