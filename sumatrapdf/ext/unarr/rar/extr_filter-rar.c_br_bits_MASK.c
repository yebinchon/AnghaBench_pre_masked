
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct MemBitReader {int available; int bits; scalar_t__ at_eof; } ;


 int FUNC_0 (struct MemBitReader*,int) ;

__attribute__((used)) static inline uint32_t FUNC_1(struct MemBitReader *VAR_0, int VAR_1)
{
    if (VAR_1 > VAR_0->available && (VAR_0->at_eof || !FUNC_0(VAR_0, VAR_1)))
        return 0;
    return (uint32_t)((VAR_0->bits >> (VAR_0->available -= VAR_1)) & (((uint64_t)1 << VAR_1) - 1));
}
