
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;



__attribute__((used)) static inline unsigned short FUNC_0( const unsigned short *VAR_0, WCHAR VAR_1 )
{
    return VAR_0[VAR_0[VAR_0[VAR_1 >> 8] + ((VAR_1 >> 4) & 0x0f)] + (VAR_1 & 0xf)];
}
