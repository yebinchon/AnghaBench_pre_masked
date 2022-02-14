
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;



__attribute__((used)) static inline unsigned int FUNC_0( const WCHAR *VAR_0, unsigned int VAR_1 )
{
    if (VAR_0[0] >= 0xd800 && VAR_0[0] <= 0xdfff)
    {
        if (VAR_0[0] > 0xdbff ||
            VAR_1 <= 1 ||
            VAR_0[1] < 0xdc00 || VAR_0[1] > 0xdfff)
            return 0;
        return 0x10000 + ((VAR_0[0] & 0x3ff) << 10) + (VAR_0[1] & 0x3ff);
    }
    return VAR_0[0];
}
