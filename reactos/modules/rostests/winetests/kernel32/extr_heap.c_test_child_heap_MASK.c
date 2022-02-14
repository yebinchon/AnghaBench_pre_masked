
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct heap_layout {int flags; int pattern; int force_flags; } ;
typedef int buffer ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 struct heap_layout* FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ,char*,int ,int*,int *,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,char const*,...) ;
 int FUNC_6 () ;
 int FUNC_7 (char const*,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10( const char *VAR_5 )
{
    struct heap_layout *VAR_6 = FUNC_0();
    DWORD VAR_7 = FUNC_7( VAR_5, 0, 16 );
    DWORD VAR_8;

    if (VAR_7 == 0xdeadbeef)
    {
        HKEY VAR_9;
        VAR_7 = 0;
        if (!FUNC_2( VAR_2, "SYSTEM\\CurrentControlSet\\Control\\Session Manager", &VAR_9 ))
        {
            char VAR_10[32];
            DWORD VAR_11, VAR_12 = sizeof(VAR_10);

            if (!FUNC_3( VAR_9, "GlobalFlag", 0, &VAR_11, (BYTE *)VAR_10, &VAR_12 ))
            {
                if (VAR_11 == VAR_3) VAR_7 = *(DWORD *)VAR_10;
                else if (VAR_11 == VAR_4) VAR_7 = FUNC_7( VAR_10, 0, 16 );
            }
            FUNC_1( VAR_9 );
        }
    }
    if (VAR_7 && !FUNC_6())
    {
        FUNC_9( "global flags not set\n" );
        return;
    }

    FUNC_5( FUNC_6() == VAR_7,
        "%s: got global flags %08x expected %08x\n", VAR_5, FUNC_6(), VAR_7 );

    VAR_8 = FUNC_4( VAR_7 );

    if (!(VAR_6->flags & VAR_1) || VAR_6->pattern == 0xffeeffee)
    {
        FUNC_5( (VAR_6->flags & ~VAR_1) == 0, "%s: got heap flags %08x\n", VAR_5, VAR_6->flags );
    }
    else if (VAR_6->pattern == 0xeeeeeeee && VAR_6->flags == 0xeeeeeeee)
    {
        FUNC_5( VAR_7 & VAR_0, "%s: got heap flags 0xeeeeeeee without page alloc\n", VAR_5 );
    }
    else
    {
        FUNC_5( VAR_6->flags == (VAR_8 | VAR_1),
            "%s: got heap flags %08x expected %08x\n", VAR_5, VAR_6->flags, VAR_8 );
        FUNC_5( VAR_6->force_flags == (VAR_8 & ~0x18000080),
            "%s: got heap force flags %08x expected %08x\n", VAR_5, VAR_6->force_flags, VAR_8 );
        VAR_8 = VAR_6->flags;
    }

    FUNC_8( VAR_8 );
}
