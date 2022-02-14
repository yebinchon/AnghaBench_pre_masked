
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char const*,int,unsigned char*) ;

__attribute__((used)) static void FUNC_1(const unsigned char* VAR_0, int VAR_1, unsigned char* VAR_2)
{
    FUNC_0("(%p, %d, %p)\n", VAR_0, VAR_1, VAR_2);

    while (VAR_1--) {
 *VAR_2++ = *VAR_0;
 *VAR_2++ = *VAR_0++;
    }
}
