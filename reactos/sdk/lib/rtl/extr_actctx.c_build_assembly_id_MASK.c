
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int revision; int build; int minor; int major; } ;
struct assembly_identity {char* name; char* arch; char* public_key; char* type; TYPE_1__ version; } ;
typedef char WCHAR ;
typedef int SIZE_T ;


 char* FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*,char*) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static WCHAR *FUNC_6( const struct assembly_identity *VAR_1 )
{
    static const WCHAR VAR_2[] =
        {',','p','r','o','c','e','s','s','o','r','A','r','c','h','i','t','e','c','t','u','r','e','=',0};
    static const WCHAR VAR_3[] =
        {',','p','u','b','l','i','c','K','e','y','T','o','k','e','n','=',0};
    static const WCHAR VAR_4[] =
        {',','t','y','p','e','=',0};
    static const WCHAR VAR_5[] =
        {',','v','e','r','s','i','o','n','=',0};

    WCHAR VAR_6[64], *VAR_7;
    SIZE_T VAR_8 = 0;

    FUNC_3( VAR_6, VAR_0,
              VAR_1->version.major, VAR_1->version.minor, VAR_1->version.build, VAR_1->version.revision );
    if (VAR_1->name) VAR_8 += FUNC_5(VAR_1->name) * sizeof(WCHAR);
    if (VAR_1->arch) VAR_8 += FUNC_5(VAR_2) + FUNC_5(VAR_1->arch) + 2;
    if (VAR_1->public_key) VAR_8 += FUNC_5(VAR_3) + FUNC_5(VAR_1->public_key) + 2;
    if (VAR_1->type) VAR_8 += FUNC_5(VAR_4) + FUNC_5(VAR_1->type) + 2;
    VAR_8 += FUNC_5(VAR_5) + FUNC_5(VAR_6) + 2;

    if (!(VAR_7 = FUNC_0( FUNC_1(), 0, (VAR_8 + 1) * sizeof(WCHAR) )))
        return ((void*)0);

    if (VAR_1->name) FUNC_4( VAR_7, VAR_1->name );
    else *VAR_7 = 0;
    FUNC_2( VAR_7, VAR_2, VAR_1->arch );
    FUNC_2( VAR_7, VAR_3, VAR_1->public_key );
    FUNC_2( VAR_7, VAR_4, VAR_1->type );
    FUNC_2( VAR_7, VAR_5, VAR_6 );
    return VAR_7;
}
