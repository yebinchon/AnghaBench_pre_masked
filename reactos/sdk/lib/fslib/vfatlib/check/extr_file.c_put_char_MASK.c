
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,unsigned char) ;

__attribute__((used)) static void FUNC_1(char **VAR_0, unsigned char VAR_1)
{

    if (FUNC_0(VAR_0, VAR_1))
 return;

    if ((VAR_1 >= ' ' && VAR_1 < 0x7f) || VAR_1 >= 0xa0)
 *(*VAR_0)++ = VAR_1;
    else {
 *(*VAR_0)++ = '\\';
 *(*VAR_0)++ = '0' + (VAR_1 >> 6);
 *(*VAR_0)++ = '0' + ((VAR_1 >> 3) & 7);
 *(*VAR_0)++ = '0' + (VAR_1 & 7);
    }
}
