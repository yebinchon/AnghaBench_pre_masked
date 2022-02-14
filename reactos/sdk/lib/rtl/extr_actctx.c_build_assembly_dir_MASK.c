
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int revision; int build; int minor; int major; } ;
struct assembly_identity {char const* arch; char const* public_key; char const* language; char const* name; TYPE_1__ version; } ;
typedef int mskeyW ;
typedef char WCHAR ;
typedef int SIZE_T ;


 char* FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static WCHAR *FUNC_6(struct assembly_identity* VAR_1)
{
    static const WCHAR VAR_2[] = {'_',0};
    static const WCHAR VAR_3[] = {'n','o','n','e',0};
    static const WCHAR VAR_4[] = {'d','e','a','d','b','e','e','f',0};

    const WCHAR *VAR_5 = VAR_1->arch ? VAR_1->arch : VAR_3;
    const WCHAR *VAR_6 = VAR_1->public_key ? VAR_1->public_key : VAR_3;
    const WCHAR *VAR_7 = VAR_1->language ? VAR_1->language : VAR_3;
    const WCHAR *VAR_8 = VAR_1->name ? VAR_1->name : VAR_3;
    SIZE_T VAR_9 = (FUNC_5(VAR_5) + 1 + FUNC_5(VAR_8) + 1 + FUNC_5(VAR_6) + 24 + 1 +
      FUNC_5(VAR_7) + 1) * sizeof(WCHAR) + sizeof(VAR_4);
    WCHAR *VAR_10;

    if (!(VAR_10 = FUNC_0( FUNC_1(), 0, VAR_9 ))) return ((void*)0);

    FUNC_4( VAR_10, VAR_5 );
    FUNC_3( VAR_10, VAR_2 );
    FUNC_3( VAR_10, VAR_8 );
    FUNC_3( VAR_10, VAR_2 );
    FUNC_3( VAR_10, VAR_6 );
    FUNC_3( VAR_10, VAR_2 );
    FUNC_2( VAR_10 + FUNC_5(VAR_10), VAR_0,
              VAR_1->version.major, VAR_1->version.minor, VAR_1->version.build, VAR_1->version.revision );
    FUNC_3( VAR_10, VAR_2 );
    FUNC_3( VAR_10, VAR_7 );
    FUNC_3( VAR_10, VAR_2 );
    FUNC_3( VAR_10, VAR_4 );
    return VAR_10;
}
