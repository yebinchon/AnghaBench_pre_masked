
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzx_bits {int dummy; } ;
struct LZXstate {unsigned char* window; int window_posn; int window_size; int R0; int R1; int R2; int header_read; int intel_filesize; int block_remaining; int block_type; int block_length; int main_elements; int intel_started; int intel_curpos; int frames_read; } ;
typedef int UWORD ;
typedef int ULONG ;
typedef unsigned char UBYTE ;
typedef int LONG ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_2 (int ) ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int* VAR_11 ;
 int FUNC_6 (unsigned char*,unsigned char*,size_t) ;
 int * VAR_12 ;

int FUNC_7(struct LZXstate *VAR_13, unsigned char *VAR_14, unsigned char *VAR_15, int VAR_16, int VAR_17) {
    UBYTE *VAR_18 = VAR_14 + VAR_16;
    UBYTE *VAR_19 = VAR_13->window;
    UBYTE *VAR_20, *VAR_21;
    UWORD *VAR_22;

    ULONG VAR_23 = VAR_13->window_posn;
    ULONG VAR_24 = VAR_13->window_size;
    ULONG VAR_25 = VAR_13->R0;
    ULONG VAR_26 = VAR_13->R1;
    ULONG VAR_27 = VAR_13->R2;

    register ULONG VAR_28;
    register int VAR_29;
    ULONG VAR_30, VAR_31,VAR_32,VAR_33;
    struct lzx_bits VAR_34;

    int VAR_35 = VAR_17, VAR_36, VAR_37, VAR_38;
    int VAR_39, VAR_40, VAR_41, VAR_42;
    int VAR_43;

    VAR_4;


    if (!VAR_13->header_read) {
        VAR_31 = VAR_32 = 0;
        FUNC_3(VAR_33, 1); if (VAR_33) { FUNC_3(VAR_31,16); FUNC_3(VAR_32,16); }
        VAR_13->intel_filesize = (VAR_31 << 16) | VAR_32;
        VAR_13->header_read = 1;
    }


    while (VAR_35 > 0) {

        if (VAR_13->block_remaining == 0) {
            if (VAR_13->block_type == 129) {
                if (VAR_13->block_length & 1) VAR_14++;
                VAR_4;
            }

            FUNC_3(VAR_13->block_type, 3);
            FUNC_3(VAR_31, 16);
            FUNC_3(VAR_32, 8);
            VAR_13->block_remaining = VAR_13->block_length = (VAR_31 << 8) | VAR_32;

            switch (VAR_13->block_type) {
                case 130:
                    for (VAR_31 = 0; VAR_31 < 8; VAR_31++) { FUNC_3(VAR_32, 3); FUNC_2(VAR_0)[VAR_31] = VAR_32; }
                    FUNC_0(VAR_0);


                case 128:
                    FUNC_5(VAR_10, 0, 256);
                    FUNC_5(VAR_10, 256, VAR_13->main_elements);
                    FUNC_0(VAR_10);
                    if (FUNC_2(VAR_10)[0xE8] != 0) VAR_13->intel_started = 1;

                    FUNC_5(VAR_5, 0, VAR_9);
                    FUNC_0(VAR_5);
                    break;

                case 129:
                    VAR_13->intel_started = 1;
                    FUNC_1(16);
                    if (VAR_29 > 16) VAR_14 -= 2;
                    VAR_25 = VAR_14[0]|(VAR_14[1]<<8)|(VAR_14[2]<<16)|(VAR_14[3]<<24);VAR_14+=4;
                    VAR_26 = VAR_14[0]|(VAR_14[1]<<8)|(VAR_14[2]<<16)|(VAR_14[3]<<24);VAR_14+=4;
                    VAR_27 = VAR_14[0]|(VAR_14[1]<<8)|(VAR_14[2]<<16)|(VAR_14[3]<<24);VAR_14+=4;
                    break;

                default:
                    return VAR_2;
            }
        }


        if (VAR_14 > VAR_18) {
            if (VAR_14 > (VAR_18+2) || VAR_29 < 16) return VAR_2;
        }

        while ((VAR_36 = VAR_13->block_remaining) > 0 && VAR_35 > 0) {
            if (VAR_36 > VAR_35) VAR_36 = VAR_35;
            VAR_35 -= VAR_36;
            VAR_13->block_remaining -= VAR_36;


            VAR_23 &= VAR_24 - 1;

            if ((VAR_23 + VAR_36) > VAR_24)
                return VAR_1;

            switch (VAR_13->block_type) {

                case 128:
                    while (VAR_36 > 0) {
                        FUNC_4(VAR_10, VAR_37);

                        if (VAR_37 < VAR_7) {

                            VAR_19[VAR_23++] = VAR_37;
                            VAR_36--;
                        }
                        else {

                            VAR_37 -= VAR_7;

                            VAR_39 = VAR_37 & VAR_8;
                            if (VAR_39 == VAR_8) {
                                FUNC_4(VAR_5, VAR_40);
                                VAR_39 += VAR_40;
                            }
                            VAR_39 += VAR_6;

                            VAR_30 = VAR_37 >> 3;

                            if (VAR_30 > 2) {

                                if (VAR_30 != 3) {
                                    VAR_41 = VAR_11[VAR_30];
                                    FUNC_3(VAR_42, VAR_41);
                                    VAR_30 = VAR_12[VAR_30] - 2 + VAR_42;
                                }
                                else {
                                    VAR_30 = 1;
                                }


                                VAR_27 = VAR_26; VAR_26 = VAR_25; VAR_25 = VAR_30;
                            }
                            else if (VAR_30 == 0) {
                                VAR_30 = VAR_25;
                            }
                            else if (VAR_30 == 1) {
                                VAR_30 = VAR_26;
                                VAR_26 = VAR_25; VAR_25 = VAR_30;
                            }
                            else {
                                VAR_30 = VAR_27;
                                VAR_27 = VAR_25; VAR_25 = VAR_30;
                            }

                            VAR_21 = VAR_19 + VAR_23;
                            VAR_36 -= VAR_39;


                            if (VAR_23 >= VAR_30) {

                                 VAR_20 = VAR_21 - VAR_30;
                            } else {
                                VAR_20 = VAR_21 + (VAR_24 - VAR_30);
                                VAR_43 = VAR_30 - VAR_23;
                                if (VAR_43 < VAR_39) {
                                     VAR_39 -= VAR_43;
                                     VAR_23 += VAR_43;
                                     while (VAR_43-- > 0) *VAR_21++ = *VAR_20++;
                                     VAR_20 = VAR_19;
                                }
                            }
                            VAR_23 += VAR_39;


                            while (VAR_39-- > 0) *VAR_21++ = *VAR_20++;

                        }
                    }
                    break;

                case 130:
                    while (VAR_36 > 0) {
                        FUNC_4(VAR_10, VAR_37);

                        if (VAR_37 < VAR_7) {

                            VAR_19[VAR_23++] = VAR_37;
                            VAR_36--;
                        }
                        else {

                            VAR_37 -= VAR_7;

                            VAR_39 = VAR_37 & VAR_8;
                            if (VAR_39 == VAR_8) {
                                FUNC_4(VAR_5, VAR_40);
                                VAR_39 += VAR_40;
                            }
                            VAR_39 += VAR_6;

                            VAR_30 = VAR_37 >> 3;

                            if (VAR_30 > 2) {

                                VAR_41 = VAR_11[VAR_30];
                                VAR_30 = VAR_12[VAR_30] - 2;
                                if (VAR_41 > 3) {

                                    VAR_41 -= 3;
                                    FUNC_3(VAR_42, VAR_41);
                                    VAR_30 += (VAR_42 << 3);
                                    FUNC_4(VAR_0, VAR_38);
                                    VAR_30 += VAR_38;
                                }
                                else if (VAR_41 == 3) {

                                    FUNC_4(VAR_0, VAR_38);
                                    VAR_30 += VAR_38;
                                }
                                else if (VAR_41 > 0) {

                                    FUNC_3(VAR_42, VAR_41);
                                    VAR_30 += VAR_42;
                                }
                                else {

                                    VAR_30 = 1;
                                }


                                VAR_27 = VAR_26; VAR_26 = VAR_25; VAR_25 = VAR_30;
                            }
                            else if (VAR_30 == 0) {
                                VAR_30 = VAR_25;
                            }
                            else if (VAR_30 == 1) {
                                VAR_30 = VAR_26;
                                VAR_26 = VAR_25; VAR_25 = VAR_30;
                            }
                            else {
                                VAR_30 = VAR_27;
                                VAR_27 = VAR_25; VAR_25 = VAR_30;
                            }

                            VAR_21 = VAR_19 + VAR_23;
                            VAR_36 -= VAR_39;


                            if (VAR_23 >= VAR_30) {

                                 VAR_20 = VAR_21 - VAR_30;
                            } else {
                                VAR_20 = VAR_21 + (VAR_24 - VAR_30);
                                VAR_43 = VAR_30 - VAR_23;
                                if (VAR_43 < VAR_39) {
                                     VAR_39 -= VAR_43;
                                     VAR_23 += VAR_43;
                                     while (VAR_43-- > 0) *VAR_21++ = *VAR_20++;
                                     VAR_20 = VAR_19;
                                }
                            }
                            VAR_23 += VAR_39;


                            while (VAR_39-- > 0) *VAR_21++ = *VAR_20++;

                        }
                    }
                    break;

                case 129:
                    if ((VAR_14 + VAR_36) > VAR_18) return VAR_2;
                    FUNC_6(VAR_19 + VAR_23, VAR_14, (size_t) VAR_36);
                    VAR_14 += VAR_36; VAR_23 += VAR_36;
                    break;

                default:
                    return VAR_2;
            }

        }
    }

    if (VAR_35 != 0) return VAR_2;
    FUNC_6(VAR_15, VAR_19 + ((!VAR_23) ? VAR_24 : VAR_23) - VAR_17, (size_t) VAR_17);

    VAR_13->window_posn = VAR_23;
    VAR_13->R0 = VAR_25;
    VAR_13->R1 = VAR_26;
    VAR_13->R2 = VAR_27;


    if ((VAR_13->frames_read++ < 32768) && VAR_13->intel_filesize != 0) {
        if (VAR_17 <= 6 || !VAR_13->intel_started) {
            VAR_13->intel_curpos += VAR_17;
        }
        else {
            UBYTE *VAR_44 = VAR_15;
            UBYTE *VAR_45 = VAR_44 + VAR_17 - 10;
            LONG VAR_46 = VAR_13->intel_curpos;
            LONG VAR_47 = VAR_13->intel_filesize;
            LONG VAR_48, VAR_49;

            VAR_13->intel_curpos = VAR_46 + VAR_17;

            while (VAR_44 < VAR_45) {
                if (*VAR_44++ != 0xE8) { VAR_46++; continue; }
                VAR_48 = VAR_44[0] | (VAR_44[1]<<8) | (VAR_44[2]<<16) | (VAR_44[3]<<24);
                if ((VAR_48 >= -VAR_46) && (VAR_48 < VAR_47)) {
                    VAR_49 = (VAR_48 >= 0) ? VAR_48 - VAR_46 : VAR_48 + VAR_47;
                    VAR_44[0] = (UBYTE) VAR_49;
                    VAR_44[1] = (UBYTE) (VAR_49 >> 8);
                    VAR_44[2] = (UBYTE) (VAR_49 >> 16);
                    VAR_44[3] = (UBYTE) (VAR_49 >> 24);
                }
                VAR_44 += 4;
                VAR_46 += 5;
            }
        }
    }
    return VAR_3;
}
