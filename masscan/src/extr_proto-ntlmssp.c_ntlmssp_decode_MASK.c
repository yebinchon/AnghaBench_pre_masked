
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NtlmsspDecode {size_t length; size_t offset; unsigned char* buf; } ;
struct BannerOutput {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 unsigned char* FUNC_0 (size_t) ;
 int VAR_1 ;
 int FUNC_1 (struct BannerOutput*,int ,char*,unsigned char const*,size_t) ;
 int FUNC_2 (struct BannerOutput*,int ,char*,int ) ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (char*,unsigned char const*,int) ;
 int FUNC_5 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_6 (char*,int,char*,unsigned char const,unsigned char const,unsigned char const,unsigned char const) ;

void
FUNC_7(struct NtlmsspDecode *VAR_2,
              const unsigned char *VAR_3, size_t VAR_4,
              struct BannerOutput *VAR_5)
{
    unsigned VAR_6;
    unsigned VAR_7;
    unsigned VAR_8;
    unsigned VAR_9;
    unsigned VAR_10;

    unsigned VAR_11;

    if (VAR_4 > VAR_2->length - VAR_2->offset)
        VAR_4 = VAR_2->length - VAR_2->offset;



    if (VAR_2->offset == 0 && VAR_2->length > VAR_4) {
        VAR_2->buf = FUNC_0(VAR_2->length);
        FUNC_5(VAR_2->buf, VAR_3, VAR_4);
        VAR_2->offset = (unsigned)VAR_4;
        return;
    } else if (VAR_2->offset) {
        FUNC_5(VAR_2->buf + VAR_2->offset, VAR_3, VAR_4);
        VAR_2->offset += (unsigned)VAR_4;
        if (VAR_2->offset < VAR_2->length)
            return;


        VAR_3 = VAR_2->buf;
        VAR_4 = VAR_2->length;
    }

    if (VAR_4 < 56)
        goto end;




    if (FUNC_4("NTLMSSP", VAR_3, 8) != 0)
        goto end;



    VAR_6 = VAR_3[8] | VAR_3[9]<<8 | VAR_3[10]<<16 | VAR_3[11]<<24;
    if (VAR_6 != 2)
        goto end;



    VAR_8 = VAR_3[12] | VAR_3[13]<<8;
    VAR_7 = VAR_3[16] | VAR_3[17]<<8 | VAR_3[18]<<16 | VAR_3[19]<<24;
    if (VAR_8 && VAR_8 + VAR_7 < VAR_4) {
        FUNC_1(VAR_5, VAR_1, "domain", VAR_3+VAR_7, VAR_8);
    }





    VAR_10 = VAR_3[40] | VAR_3[41]<<8;
    VAR_9 = VAR_3[44] | VAR_3[45]<<8 | VAR_3[46]<<16 | VAR_3[47]<<24;


    {
        char VAR_12[64];
        FUNC_6(VAR_12, sizeof(VAR_12), " version=%u.%u.%u ntlm-ver=%u",
                  VAR_3[48],
                  VAR_3[49],
                  VAR_3[50] | VAR_3[51]<<8,
                  VAR_3[55]
                  );
        FUNC_2(VAR_5, VAR_1, VAR_12, VAR_0);
    }


    for (VAR_11=VAR_9; VAR_11+4<VAR_9+VAR_10 && VAR_11+4<VAR_4; ) {
        unsigned VAR_13 = VAR_3[VAR_11] | VAR_3[VAR_11+1]<<8;
        size_t VAR_14 = VAR_3[VAR_11+2] | VAR_3[VAR_11+3]<<8;
        VAR_11 += 4;

        if (VAR_14 > VAR_9 + VAR_10 - VAR_11)
            VAR_14 = VAR_9 + VAR_10 - VAR_11;
        if (VAR_14 > VAR_4 - VAR_11)
            VAR_14 = VAR_4 - VAR_11;

        switch (VAR_13) {
            case 0x00:
                VAR_11 = VAR_9 + VAR_10;
                continue;
            case 1:
                FUNC_1(VAR_5, VAR_1, "name", VAR_3+VAR_11, VAR_14);
                break;
            case 2:
                FUNC_1(VAR_5, VAR_1, "domain", VAR_3+VAR_11, VAR_14);
                break;
            case 3:
                FUNC_1(VAR_5, VAR_1, "name-dns", VAR_3+VAR_11, VAR_14);
                break;
            case 4:
                FUNC_1(VAR_5, VAR_1, "domain-dns", VAR_3+VAR_11, VAR_14);
                break;
            case 5:
                FUNC_1(VAR_5, VAR_1, "forest", VAR_3+VAR_11, VAR_14);
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                FUNC_1(VAR_5, VAR_1, "target", VAR_3+VAR_11, VAR_14);
                break;
            case 10:
                break;
            default:
                break;
        }
        VAR_11 += (unsigned)VAR_14;
    }





end:



    if (VAR_2->buf) {
        FUNC_3(VAR_2->buf);
        VAR_2->buf = 0;
    }

}
