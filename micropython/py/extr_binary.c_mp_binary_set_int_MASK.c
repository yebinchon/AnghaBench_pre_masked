
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_uint_t ;
typedef int byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,size_t) ;

void FUNC_1(size_t VAR_2, bool VAR_3, byte *VAR_4, mp_uint_t VAR_5) {
    if (VAR_1 && !VAR_3) {
        FUNC_0(VAR_4, &VAR_5, VAR_2);
    } else if (VAR_0 && VAR_3) {

        FUNC_0(VAR_4, (byte*)&VAR_5 + sizeof(mp_uint_t) - VAR_2, VAR_2);
    } else {
        const byte *VAR_6;
        if (VAR_1) {
            VAR_6 = (const byte*)&VAR_5 + VAR_2;
        } else {
            VAR_6 = (const byte*)&VAR_5 + sizeof(mp_uint_t);
        }
        while (VAR_2--) {
            *VAR_4++ = *--VAR_6;
        }
    }
}
