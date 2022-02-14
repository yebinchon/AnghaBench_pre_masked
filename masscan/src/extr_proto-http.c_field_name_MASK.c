
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Patterns {char* pattern; size_t id; scalar_t__ pattern_length; } ;
struct BannerOutput {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct BannerOutput*,int ,unsigned char const*,scalar_t__) ;
 int FUNC_1 (struct BannerOutput*,int ) ;

void
FUNC_2(struct BannerOutput *VAR_4, size_t VAR_5,
           struct Patterns *VAR_6)
{
    unsigned VAR_7;
    if (VAR_5 == VAR_0)
        return;
    if (VAR_5 == VAR_2)
        return;
    if (VAR_5 == VAR_1)
        return;
    for (VAR_7=0; VAR_6[VAR_7].pattern; VAR_7++) {
        if (VAR_6[VAR_7].id == VAR_5) {
            FUNC_1(VAR_4, VAR_3);
            FUNC_0( VAR_4, VAR_3,
                            (const unsigned char*)VAR_6[VAR_7].pattern
                                + ((VAR_6[VAR_7].pattern[0]=='<')?1:0),
                            VAR_6[VAR_7].pattern_length
                                - ((VAR_6[VAR_7].pattern[0]=='<')?1:0)
                          );
            return;
        }
    }
}
