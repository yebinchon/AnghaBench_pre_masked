
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* fn_cvid_v4 ) (unsigned char*,unsigned char*,int,int ,int *,int *,int *,int *) ;
typedef int (* fn_cvid_v1 ) (unsigned char*,unsigned char*,int,int ,int *) ;
typedef int cvid_codebook ;
struct TYPE_3__ {unsigned int strip_num; int ** v1_codebook; int ** v4_codebook; } ;
typedef TYPE_1__ cinepak_info ;
typedef int BOOL ;


 int FUNC_0 (char*,...) ;
 unsigned long VAR_0 ;
 int FUNC_1 (char*,unsigned long,long,...) ;
 int FUNC_2 (char*,int,int,...) ;
 int FUNC_3 (unsigned char*,unsigned char*,int,int ,int *) ;
 int FUNC_4 (unsigned char*,unsigned char*,int,int ,int *) ;
 int FUNC_5 (unsigned char*,unsigned char*,int,int ,int *) ;
 int FUNC_6 (unsigned char*,unsigned char*,int,int ,int *) ;
 int FUNC_7 (unsigned char*,unsigned char*,int,int ,int *,int *,int *,int *) ;
 int FUNC_8 (unsigned char*,unsigned char*,int,int ,int *,int *,int *,int *) ;
 int FUNC_9 (unsigned char*,unsigned char*,int,int ,int *,int *,int *,int *) ;
 int FUNC_10 (unsigned char*,unsigned char*,int,int ,int *,int *,int *,int *) ;
 unsigned int FUNC_11 (int ,unsigned long,unsigned long,int,int,unsigned int) ;
 long FUNC_12 () ;
 unsigned long FUNC_13 () ;
 int FUNC_14 (unsigned int,int) ;
 void* FUNC_15 () ;
 void* FUNC_16 (int) ;
 unsigned char* VAR_1 ;
 int FUNC_17 (int *,int *,int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 () ;

__attribute__((used)) static void FUNC_20(cinepak_info *VAR_2, unsigned char *VAR_3, int VAR_4,
           unsigned char *VAR_5, unsigned int VAR_6, unsigned int VAR_7, int VAR_8, BOOL VAR_9)
{
    cvid_codebook *VAR_10, *VAR_11, *VAR_12 = ((void*)0);
    unsigned long VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
                  VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    long VAR_26, VAR_27;
    unsigned char *VAR_28;
    unsigned int VAR_29, VAR_30, VAR_31;
    int VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37 = 3;
    fn_cvid_v1 VAR_38 = FUNC_5;
    fn_cvid_v4 VAR_39 = FUNC_9;
    struct frame_header
    {
      unsigned char flags;
      unsigned long length;
      unsigned short width;
      unsigned short height;
      unsigned short strips;
    } VAR_40;

    VAR_14 = 0;
    VAR_15 = 0;
    VAR_1 = VAR_3;

    VAR_40.flags = FUNC_12();
    VAR_40.length = FUNC_12() << 16;
    VAR_40.length |= FUNC_12() << 8;
    VAR_40.length |= FUNC_12();

    switch(VAR_8)
        {
        case 15:
            VAR_37 = 2;
            VAR_38 = FUNC_3;
            VAR_39 = FUNC_7;
            break;
        case 16:
            VAR_37 = 2;
            VAR_38 = FUNC_4;
            VAR_39 = FUNC_8;
            break;
        case 24:
            VAR_37 = 3;
            VAR_38 = FUNC_5;
            VAR_39 = FUNC_9;
            break;
        case 32:
            VAR_37 = 4;
            VAR_38 = FUNC_6;
            VAR_39 = FUNC_10;
            break;
        }

    VAR_36 = FUNC_14(VAR_6, VAR_37 * 8);
    VAR_28 = VAR_5;

    if(VAR_40.length != VAR_4)
        {
        if(VAR_40.length & 0x01) VAR_40.length++;
        if(VAR_40.length != VAR_4)
            {
            FUNC_0("CVID: corruption %d (QT/AVI) != %ld (CV)\n", VAR_4, VAR_40.length);

            }
        }

    VAR_40.width = FUNC_15();
    VAR_40.height = FUNC_15();
    VAR_40.strips = FUNC_15();

    if(VAR_40.strips > VAR_2->strip_num)
        {
        if(VAR_40.strips >= VAR_0)
            {
            FUNC_0("CVID: strip overflow (more than %d)\n", VAR_0);
            return;
            }

        for(VAR_29 = VAR_2->strip_num; VAR_29 < VAR_40.strips; VAR_29++)
            {
            if((VAR_2->v4_codebook[VAR_29] = FUNC_16(sizeof(cvid_codebook) * 260)) == ((void*)0))
                {
                FUNC_0("CVID: codebook v4 alloc err\n");
                return;
                }

            if((VAR_2->v1_codebook[VAR_29] = FUNC_16(sizeof(cvid_codebook) * 260)) == ((void*)0))
                {
                FUNC_0("CVID: codebook v1 alloc err\n");
                return;
                }
            }
        }
    VAR_2->strip_num = VAR_40.strips;

    FUNC_1("CVID: %ux%u, strips %u, length %lu\n",
          VAR_40.width, VAR_40.height, VAR_40.strips, VAR_40.length);

    for(VAR_30 = 0; VAR_30 < VAR_40.strips; VAR_30++)
        {
        VAR_10 = VAR_2->v4_codebook[VAR_30];
        VAR_11 = VAR_2->v1_codebook[VAR_30];

        if((VAR_30 > 0) && (!(VAR_40.flags & 0x01)))
            {
            FUNC_17(VAR_2->v4_codebook[VAR_30], VAR_2->v4_codebook[VAR_30-1], 260 * sizeof(cvid_codebook));
            FUNC_17(VAR_2->v1_codebook[VAR_30], VAR_2->v1_codebook[VAR_30-1], 260 * sizeof(cvid_codebook));
            }

        VAR_17 = FUNC_15();
        VAR_26 = FUNC_15();
        VAR_20 = FUNC_15();
        VAR_19 = FUNC_15();
        VAR_22 = FUNC_15();
        VAR_21 = FUNC_15();

        VAR_15 += VAR_22;
        VAR_26 -= 12;
        VAR_13 = 0;
        if(VAR_21 != VAR_6)
            FUNC_2("CVID: Warning x1 (%ld) != width (%d)\n", VAR_21, VAR_6);

        FUNC_1("   %d) %04lx %04ld <%ld,%ld> <%ld,%ld> yt %ld\n",
              VAR_30, VAR_17, VAR_26, VAR_19, VAR_20, VAR_21, VAR_22, VAR_15);

        while(VAR_26 > 0)
            {
            VAR_18 = FUNC_15();
            VAR_27 = FUNC_15();

            FUNC_1("        %04lx %04ld\n", VAR_18, VAR_27);
            VAR_26 -= VAR_27;
            VAR_27 -= 4;

            switch(VAR_18)
                {

                case 0x2000:
                case 0x2200:
                    VAR_12 = (VAR_18 == 0x2200 ? VAR_11 : VAR_10);
                    VAR_16 = VAR_27/6;
                    for(VAR_29 = 0; VAR_29 < VAR_16; VAR_29++) FUNC_18(VAR_12+VAR_29, 0);
                    break;

                case 0x2400:
                case 0x2600:
                    VAR_12 = (VAR_18 == 0x2600 ? VAR_11 : VAR_10);
                    VAR_16 = VAR_27/4;
                    for(VAR_29 = 0; VAR_29 < VAR_16; VAR_29++) FUNC_18(VAR_12+VAR_29, 1);
                    break;

                case 0x2100:
                case 0x2300:
                    VAR_12 = (VAR_18 == 0x2300 ? VAR_11 : VAR_10);

                    VAR_23 = 0;
                    while(VAR_27 > 0)
                        {
                        VAR_24 = FUNC_13();
                        VAR_27 -= 4;

                        for(VAR_29 = 0; VAR_29 < 32; VAR_29++)
                            {
                            if(VAR_24 & 0x80000000)
                                {
                                VAR_27 -= 6;
                                FUNC_18(VAR_12+VAR_23, 0);
                                }

                            VAR_23++;
                            VAR_24 <<= 1;
                            }
                        }
                    while(VAR_27 > 0) { FUNC_19(); VAR_27--; }
                    break;

                case 0x2500:
                case 0x2700:
                    VAR_12 = (VAR_18 == 0x2700 ? VAR_11 : VAR_10);

                    VAR_23 = 0;
                    while(VAR_27 > 0)
                        {
                        VAR_24 = FUNC_13();
                        VAR_27 -= 4;

                        for(VAR_29 = 0; VAR_29 < 32; VAR_29++)
                            {
                            if(VAR_24 & 0x80000000)
                                {
                                VAR_27 -= 4;
                                FUNC_18(VAR_12+VAR_23, 1);
                                }

                            VAR_23++;
                            VAR_24 <<= 1;
                            }
                        }
                    while(VAR_27 > 0) { FUNC_19(); VAR_27--; }
                    break;


                case 0x3000:
                    while((VAR_27 > 0) && (VAR_14 < VAR_15))
                        {
                        VAR_24 = FUNC_13();
                        VAR_27 -= 4;

                        for(VAR_29 = 0; VAR_29 < 32; VAR_29++)
                            {
                            if(VAR_14 >= VAR_15) break;
                            if(VAR_24 & 0x80000000)
                                {
                                VAR_32 = FUNC_12();
                                VAR_33 = FUNC_12();
                                VAR_34 = FUNC_12();
                                VAR_35 = FUNC_12();
                                VAR_27 -= 4;

                                VAR_31 = FUNC_11(VAR_9, VAR_13, VAR_14, VAR_36, VAR_37, VAR_7);
                                VAR_39(VAR_28 + VAR_31, VAR_5, VAR_36, VAR_9, VAR_10+VAR_32, VAR_10+VAR_33, VAR_10+VAR_34, VAR_10+VAR_35);
                                }
                            else
                                {
                                VAR_31 = FUNC_11(VAR_9, VAR_13, VAR_14, VAR_36, VAR_37, VAR_7);
                                VAR_38(VAR_28 + VAR_31, VAR_5, VAR_36, VAR_9, VAR_11 + FUNC_12());

                                VAR_27--;
                                }

                            VAR_13 += 4;
                            if(VAR_13 >= VAR_6)
                                {
                                VAR_13 = 0;
                                VAR_14 += 4;
                                }
                            VAR_24 <<= 1;
                            }
                        }
                    while(VAR_27 > 0) { FUNC_19(); VAR_27--; }
                    break;

                case 0x3100:
                    while((VAR_27 > 0) && (VAR_14 < VAR_15))
                        {

                        VAR_24 = FUNC_13();
                        VAR_27 -= 4;
                        VAR_25 = 0x80000000;

                        while((VAR_25) && (VAR_14 < VAR_15))
                            {
                            if(VAR_24 & VAR_25)
                                {
                                if(VAR_25 == 1)
                                    {
                                    if(VAR_27 < 0) break;
                                    VAR_24 = FUNC_13();
                                    VAR_27 -= 4;
                                    VAR_25 = 0x80000000;
                                    }
                                else VAR_25 >>= 1;

                                if(VAR_24 & VAR_25)
                                    {
                                    VAR_32 = FUNC_12();
                                    VAR_33 = FUNC_12();
                                    VAR_34 = FUNC_12();
                                    VAR_35 = FUNC_12();
                                    VAR_27 -= 4;

                                    VAR_31 = FUNC_11(VAR_9, VAR_13, VAR_14, VAR_36, VAR_37, VAR_7);
                                    VAR_39(VAR_28 + VAR_31, VAR_5, VAR_36, VAR_9, VAR_10+VAR_32, VAR_10+VAR_33, VAR_10+VAR_34, VAR_10+VAR_35);
                                    }
                                else
                                    {
                                    VAR_27--;

                                    VAR_31 = FUNC_11(VAR_9, VAR_13, VAR_14, VAR_36, VAR_37, VAR_7);
                                    VAR_38(VAR_28 + VAR_31, VAR_5, VAR_36, VAR_9, VAR_11 + FUNC_12());
                                    }
                                }

                            VAR_25 >>= 1;
                            VAR_13 += 4;
                            if(VAR_13 >= VAR_6)
                                {
                                VAR_13 = 0;
                                VAR_14 += 4;
                                }
                            }
                        }

                    while(VAR_27 > 0) { FUNC_19(); VAR_27--; }
                    break;

                case 0x3200:
                    while((VAR_27 > 0) && (VAR_14 < VAR_15))
                        {
                        VAR_31 = FUNC_11(VAR_9, VAR_13, VAR_14, VAR_36, VAR_37, VAR_7);
                        VAR_38(VAR_28 + VAR_31, VAR_5, VAR_36, VAR_9, VAR_11 + FUNC_12());

                        VAR_27--;
                        VAR_13 += 4;
                        if(VAR_13 >= VAR_6)
                            {
                            VAR_13 = 0;
                            VAR_14 += 4;
                            }
                        }
                    while(VAR_27 > 0) { FUNC_19(); VAR_27--; }
                    break;

                default:
                    FUNC_0("CVID: unknown chunk_id %08lx\n", VAR_18);
                    while(VAR_27 > 0) { FUNC_19(); VAR_27--; }
                    break;
                }
            }
        }

    if(VAR_40.length != VAR_4)
        {
        if(VAR_40.length & 0x01) VAR_40.length++;
        if(VAR_40.length != VAR_4)
            {
            long VAR_41;
            FUNC_19();
            VAR_41 = FUNC_12() << 16;
            VAR_41 |= FUNC_12() << 8;
            VAR_41 |= FUNC_12();
            FUNC_2("CVID: END INFO chunk size %d cvid size1 %ld cvid size2 %ld\n",
                  VAR_4, VAR_40.length, VAR_41);
            }
        }
}
