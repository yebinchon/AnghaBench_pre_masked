
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {int ** glyphs; } ;
struct TYPE_3__ {TYPE_2__** page; } ;
typedef TYPE_1__ ScriptCache ;
typedef scalar_t__ SCRIPT_CACHE ;
typedef int DWORD ;
typedef TYPE_2__ CacheGlyphPage ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline WORD FUNC_0(SCRIPT_CACHE *VAR_2, DWORD VAR_3)
{
    CacheGlyphPage *VAR_4 = ((ScriptCache *)*VAR_2)->page[VAR_3 / 0x10000];
    WORD *VAR_5;

    if (!VAR_4) return 0;
    VAR_5 = VAR_4->glyphs[(VAR_3 % 0x10000) >> VAR_1];
    if (!VAR_5) return 0;
    return VAR_5[(VAR_3 % 0x10000) & VAR_0];
}
