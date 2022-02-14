
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MemBitReader {int available; int at_eof; } ;


 scalar_t__ FUNC_0 (struct MemBitReader*,int) ;

__attribute__((used)) static inline bool FUNC_1(struct MemBitReader *VAR_0, int VAR_1)
{
    return !VAR_0->at_eof && (VAR_1 <= VAR_0->available || FUNC_0(VAR_0, VAR_1));
}
