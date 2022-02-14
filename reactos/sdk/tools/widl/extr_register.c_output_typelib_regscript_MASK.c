
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* name; int stmts; int attrs; } ;
typedef TYPE_1__ typelib_t ;
struct TYPE_7__ {int cval; } ;
typedef TYPE_2__ expr_t ;
typedef int UUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int const*) ;
 void* FUNC_4 (int ,int ) ;
 unsigned int FUNC_5 (int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_9 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (char*,char*,...) ;
 scalar_t__ FUNC_9 (char*) ;
 char* VAR_10 ;
 int FUNC_10 (int ,TYPE_1__ const*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__ const*) ;
 char* FUNC_13 (scalar_t__) ;

void FUNC_14( const typelib_t *VAR_11 )
{
    const UUID *VAR_12 = FUNC_4( VAR_11->attrs, VAR_6 );
    const char *VAR_13 = FUNC_4( VAR_11->attrs, VAR_1 );
    const expr_t *VAR_14 = FUNC_4( VAR_11->attrs, VAR_4 );
    unsigned int VAR_15 = FUNC_5( VAR_11->attrs, VAR_7 );
    unsigned int VAR_16 = 0;
    char VAR_17[12] = "";

    char *VAR_18 = VAR_10;

    expr_t *VAR_19;

    if (FUNC_6( VAR_11->attrs, VAR_5 )) VAR_16 |= 1;
    if (FUNC_6( VAR_11->attrs, VAR_0 )) VAR_16 |= 2;
    if (FUNC_6( VAR_11->attrs, VAR_2 )) VAR_16 |= 4;

    FUNC_7( VAR_8, "HKCR\n" );
    FUNC_7( VAR_8++, "{\n" );

    FUNC_7( VAR_8, "NoRemove Typelib\n" );
    FUNC_7( VAR_8++, "{\n" );
    FUNC_7( VAR_8, "NoRemove '%s'\n", FUNC_3( VAR_12 ));
    FUNC_7( VAR_8++, "{\n" );
    FUNC_7( VAR_8, "'%u.%u' = s '%s'\n",
             FUNC_0(VAR_15), FUNC_1(VAR_15), VAR_13 ? VAR_13 : VAR_11->name );
    FUNC_7( VAR_8++, "{\n" );
    VAR_19 = FUNC_4( VAR_11->attrs, VAR_3 );




    if (VAR_19)
    {
        FUNC_8(VAR_17, "\\%d", VAR_19->cval);
        VAR_18 = FUNC_13( FUNC_9(VAR_10) + 20 );
        FUNC_8(VAR_18, "%s\\%d", VAR_10, VAR_19->cval);
    }

    FUNC_7( VAR_8, "'%x' { %s = s '%%MODULE%%%s' }\n",
             VAR_14 ? VAR_14->cval : 0, VAR_9 == 8 ? "win64" : "win32", VAR_17 );
    FUNC_7( VAR_8, "FLAGS = s '%u'\n", VAR_16 );
    FUNC_7( --VAR_8, "}\n" );
    FUNC_7( --VAR_8, "}\n" );
    FUNC_7( --VAR_8, "}\n" );

    FUNC_7( VAR_8, "NoRemove Interface\n" );
    FUNC_7( VAR_8++, "{\n" );
    FUNC_12( VAR_11 );
    FUNC_7( --VAR_8, "}\n" );

    FUNC_7( VAR_8, "NoRemove CLSID\n" );
    FUNC_7( VAR_8++, "{\n" );
    FUNC_10( VAR_11->stmts, VAR_11 );
    FUNC_7( --VAR_8, "}\n" );

    FUNC_11( VAR_11->stmts );
    FUNC_7( --VAR_8, "}\n" );



    FUNC_2( "WINE_REGISTRY", VAR_18 );

}
