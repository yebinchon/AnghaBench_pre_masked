
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_bom ;
struct line {scalar_t__ nb_fields; int first_field; } ;
struct inf_file {int strings_section; struct field* fields; void* strings; void* string_pos; } ;
struct field {int text; } ;
typedef int WCHAR ;
typedef int UINT ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,int ,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int VAR_6 ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int*) ;
 int VAR_7 ;
 void* FUNC_5 (int ,int ,int ,int ,int) ;
 int FUNC_6 (int,int ,char*,int,int*,int) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 (void*,int,int *) ;
 int FUNC_9 (int) ;
 int VAR_9 ;
 int FUNC_10 (void*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct line* FUNC_11 (struct inf_file*,int,int ) ;
 int FUNC_12 (struct inf_file*,int ) ;
 int FUNC_13 (struct inf_file*) ;
 int FUNC_14 (void*,int const*,int) ;
 int FUNC_15 (struct inf_file*,int*,int*,int*) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static struct inf_file *FUNC_17( HANDLE VAR_13, UINT *VAR_14, DWORD VAR_15 )
{
    void *VAR_16;
    DWORD VAR_17 = 0;
    struct inf_file *VAR_18;

    DWORD VAR_19 = FUNC_1( VAR_13, ((void*)0) );
    HANDLE VAR_20 = FUNC_0( VAR_13, ((void*)0), VAR_8, 0, VAR_19, ((void*)0) );
    if (!VAR_20) return ((void*)0);
    VAR_16 = FUNC_5( VAR_20, VAR_5, 0, 0, VAR_19 );
    FUNC_7( VAR_20 );
    if (!VAR_16) return ((void*)0);

    if (!(VAR_18 = FUNC_3( FUNC_2(), VAR_6, sizeof(*VAR_18) )))
    {
        VAR_17 = VAR_3;
        goto done;
    }




    if (!(VAR_18->strings = FUNC_3( FUNC_2(), 0, VAR_19 * sizeof(WCHAR) )))
    {
        VAR_17 = VAR_3;
        goto done;
    }
    VAR_18->string_pos = VAR_18->strings;
    VAR_18->strings_section = -1;

    if (!FUNC_8( VAR_16, VAR_19, ((void*)0) ))
    {
        static const BYTE VAR_21[3] = { 0xef, 0xbb, 0xbf };
        WCHAR *VAR_22;
        UINT VAR_23 = VAR_0;
        UINT VAR_24 = 0;

        if (VAR_19 > sizeof(VAR_21) && !FUNC_14( VAR_16, VAR_21, sizeof(VAR_21) ))
        {
            VAR_23 = VAR_1;
            VAR_24 = sizeof(VAR_21);
        }

        if ((VAR_22 = FUNC_3( FUNC_2(), 0, VAR_19 * sizeof(WCHAR) )))
        {
            DWORD VAR_25 = FUNC_6( VAR_23, 0, (char *)VAR_16 + VAR_24,
                                             VAR_19 - VAR_24, VAR_22, VAR_19 );
            VAR_17 = FUNC_15( VAR_18, VAR_22, VAR_22 + VAR_25, VAR_14 );
            FUNC_4( FUNC_2(), 0, VAR_22 );
        }
    }
    else
    {
        WCHAR *VAR_26 = VAR_16;

        if (*VAR_26 == 0xfeff)
            VAR_26++;
        VAR_17 = FUNC_15( VAR_18, VAR_26, (WCHAR *)((char *)VAR_16 + VAR_19), VAR_14 );
    }

    if (!VAR_17)
    {
        int VAR_27 = FUNC_12( VAR_18, VAR_10 );
        if (VAR_27 != -1)
        {
            struct line *VAR_28 = FUNC_11( VAR_18, VAR_27, VAR_9 );
            if (VAR_28 && VAR_28->nb_fields > 0)
            {
                struct field *VAR_29 = VAR_18->fields + VAR_28->first_field;
                if (!FUNC_16( VAR_29->text, VAR_2 )) goto done;
                if (!FUNC_16( VAR_29->text, VAR_12 )) goto done;
                if (!FUNC_16( VAR_29->text, VAR_11 )) goto done;
            }
        }
        if (VAR_14) *VAR_14 = 0;
        if (VAR_15 & VAR_7) VAR_17 = VAR_4;
    }

 done:
    FUNC_10( VAR_16 );
    if (VAR_17)
    {
        if (VAR_18) FUNC_13( VAR_18 );
        FUNC_9( VAR_17 );
        VAR_18 = ((void*)0);
    }
    return VAR_18;
}
