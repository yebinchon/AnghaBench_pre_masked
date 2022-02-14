
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlChar ;



__attribute__((used)) static xmlChar *
FUNC_0(const xmlChar *VAR_0, xmlChar *VAR_1)
{
    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
        return(((void*)0));

    while (*VAR_0 == 0x20) VAR_0++;
    while (*VAR_0 != 0) {
 if (*VAR_0 == 0x20) {
     while (*VAR_0 == 0x20) VAR_0++;
     if (*VAR_0 != 0)
  *VAR_1++ = 0x20;
 } else {
     *VAR_1++ = *VAR_0++;
 }
    }
    *VAR_1 = 0;
    if (VAR_1 == VAR_0)
       return(((void*)0));
    return(VAR_1);
}
