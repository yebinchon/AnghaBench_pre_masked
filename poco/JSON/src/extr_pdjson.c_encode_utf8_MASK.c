
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_stream ;


 int FUNC_0 (int *,char*,unsigned long) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(json_stream *VAR_0, unsigned long VAR_1)
{
    if (VAR_1 < 0x80UL) {
        return FUNC_1(VAR_0, VAR_1);
    } else if (VAR_1 < 0x0800UL) {
        return !((FUNC_1(VAR_0, (VAR_1 >> 6 & 0x1F) | 0xC0) == 0) &&
                 (FUNC_1(VAR_0, (VAR_1 >> 0 & 0x3F) | 0x80) == 0));
    } else if (VAR_1 < 0x010000UL) {
        if (VAR_1 >= 0xd800 && VAR_1 <= 0xdfff) {
            FUNC_0(VAR_0, "invalid codepoint %06lx", VAR_1);
            return -1;
        }
        return !((FUNC_1(VAR_0, (VAR_1 >> 12 & 0x0F) | 0xE0) == 0) &&
                 (FUNC_1(VAR_0, (VAR_1 >> 6 & 0x3F) | 0x80) == 0) &&
                 (FUNC_1(VAR_0, (VAR_1 >> 0 & 0x3F) | 0x80) == 0));
    } else if (VAR_1 < 0x110000UL) {
        return !((FUNC_1(VAR_0, (VAR_1 >> 18 & 0x07) | 0xF0) == 0) &&
                (FUNC_1(VAR_0, (VAR_1 >> 12 & 0x3F) | 0x80) == 0) &&
                (FUNC_1(VAR_0, (VAR_1 >> 6 & 0x3F) | 0x80) == 0) &&
                (FUNC_1(VAR_0, (VAR_1 >> 0 & 0x3F) | 0x80) == 0));
    } else {
        FUNC_0(VAR_0, "can't encode UTF-8 for %06lx", VAR_1);
        return -1;
    }
}
