
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DomainPointer {char length; scalar_t__ name; } ;


 int FUNC_0 (unsigned char*,unsigned char const*,unsigned int) ;

__attribute__((used)) static void
FUNC_1(const unsigned char VAR_0[], unsigned VAR_1, unsigned VAR_2,
                 struct DomainPointer *VAR_3)
{
    VAR_3->length = 0;

    for (;;) {
        unsigned VAR_4;

        if (VAR_1 >= VAR_2)
            return;

        VAR_4 = VAR_0[VAR_1];
        if (VAR_4 & 0xC0) {
            if ((VAR_4 & 0xC0) != 0xC0)
                return;
            else if (VAR_1 + 1 >= VAR_2)
                return;
            else {
                VAR_1 = (VAR_0[VAR_1]&0x3F)<<8 | VAR_0[VAR_1+1];
            }
        } else {
            if (VAR_4 == 0) {
                return;
            } else {
                FUNC_0((unsigned char*)VAR_3->name+VAR_3->length, VAR_0+VAR_1, VAR_4+1);
                VAR_3->length = (unsigned char)(VAR_3->length + VAR_4 + 1);
                VAR_1 += VAR_4 + 1;
            }
        }
    }
}
