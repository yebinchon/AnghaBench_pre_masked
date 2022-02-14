
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RtfData {scalar_t__ in_text; } ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct RtfData*,char*,int) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static BOOL FUNC_2(struct RtfData* VAR_2, const void* VAR_3, unsigned VAR_4)
{
    char VAR_5[512];
    unsigned VAR_6, VAR_7;
    const BYTE* VAR_8 = VAR_3;
    static const char* VAR_9 = "0123456789abcdef";

    if (!VAR_2->in_text)
    {
        if (!FUNC_0(VAR_2, " ", 1)) return VAR_0;
        VAR_2->in_text = VAR_1;
    }
    for (; VAR_4; VAR_4 -= VAR_7)
    {
        VAR_7 = FUNC_1(256, VAR_4);
        for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
        {
            VAR_5[2 * VAR_6 + 0] = VAR_9[*VAR_8 >> 4];
            VAR_5[2 * VAR_6 + 1] = VAR_9[*VAR_8++ & 0xF];
        }
        if (!FUNC_0(VAR_2, VAR_5, 2 * VAR_7)) return VAR_0;
    }
    return VAR_1;
}
