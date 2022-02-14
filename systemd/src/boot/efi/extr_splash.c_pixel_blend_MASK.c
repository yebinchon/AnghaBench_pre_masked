
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int UINT32 ;



__attribute__((used)) static VOID FUNC_0(UINT32 *VAR_0, const UINT32 VAR_1) {
        UINT32 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

        VAR_2 = (VAR_1 & 0xff);


        VAR_3 = VAR_1 >> 8;


        VAR_4 = (VAR_3 & 0xff00ff);
        VAR_5 = (VAR_3 & 0x00ff00);

        VAR_6 = (*VAR_0 & 0xff00ff);
        VAR_7 = (*VAR_0 & 0x00ff00);


        VAR_8 = ((((VAR_4 - VAR_6) * VAR_2 + 0x800080) >> 8) + VAR_6) & 0xff00ff;
        VAR_9 = ((((VAR_5 - VAR_7) * VAR_2 + 0x008000) >> 8) + VAR_7) & 0x00ff00;

        *VAR_0 = (VAR_8 | VAR_9);
}
