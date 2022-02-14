
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_4__ {int ** glyphs; } ;
struct TYPE_3__ {TYPE_2__** page; } ;
typedef TYPE_1__ ScriptCache ;
typedef scalar_t__ SCRIPT_CACHE ;
typedef TYPE_2__ CacheGlyphPage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static inline WORD FUNC_1(SCRIPT_CACHE *VAR_3, WCHAR VAR_4, WORD VAR_5)
{
    CacheGlyphPage **VAR_6 = &((ScriptCache *)*VAR_3)->page[VAR_4 / 0x10000];
    WORD **VAR_7;
    if (!*VAR_6 && !(*VAR_6 = FUNC_0(sizeof(CacheGlyphPage)))) return 0;

    VAR_7 = &(*VAR_6)->glyphs[(VAR_4 % 0x10000) >> VAR_1];
    if (!*VAR_7 && !(*VAR_7 = FUNC_0(sizeof(WORD) * VAR_2))) return 0;
    return ((*VAR_7)[(VAR_4 % 0x10000) & VAR_0] = VAR_5);
}
