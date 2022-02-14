
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CertDecode {int is_capture_issuer; int is_capture_subject; } ;
struct BannerOutput {int dummy; } ;


 unsigned char* FUNC_0 (size_t) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct BannerOutput*) ;
 int FUNC_2 (struct BannerOutput*) ;
 unsigned char* FUNC_3 (struct BannerOutput*,int ) ;
 size_t FUNC_4 (struct BannerOutput*,int ) ;
 size_t FUNC_5 (unsigned char*,size_t,unsigned char*,size_t) ;
 int FUNC_6 (unsigned int,unsigned char const*,size_t) ;
 char* FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned char const*,size_t) ;
 scalar_t__ FUNC_9 (unsigned char*,char*,int) ;
 int FUNC_10 (char*,char const*,int) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (struct CertDecode*,unsigned char*,size_t,struct BannerOutput*) ;
 int FUNC_13 (struct CertDecode*,size_t) ;

void
FUNC_14( unsigned VAR_3,
                  unsigned VAR_4,
                  unsigned char **VAR_5,
                  size_t *VAR_6)
{
    size_t VAR_7 = *VAR_6;
    unsigned char *VAR_8 = *VAR_5;


    if (VAR_4 == VAR_2) {
        unsigned char *VAR_9 = FUNC_0(VAR_7);
        struct CertDecode VAR_10;
        size_t VAR_11;
        struct BannerOutput VAR_12[1];
        const unsigned char *VAR_13;
        size_t VAR_14;

        FUNC_1(VAR_12);

        VAR_11 = FUNC_5(VAR_9, VAR_7, VAR_8, VAR_7);

        FUNC_13(&VAR_10, VAR_7);
        VAR_10.is_capture_issuer = 1;
        VAR_10.is_capture_subject = 1;
        FUNC_12(&VAR_10, VAR_9, VAR_11, VAR_12);

        VAR_13 = FUNC_3(VAR_12, VAR_0);
        VAR_14 = FUNC_4(VAR_12, VAR_0);

        if (VAR_14) {
            if (!FUNC_8(VAR_13, VAR_14))
                FUNC_6(VAR_3, VAR_13, VAR_14);
        }

        FUNC_2(VAR_12);


    } else if (VAR_4 == VAR_1) {
        const char *VAR_15 = FUNC_7(VAR_3);

        if (VAR_7 == 15 && FUNC_9(VAR_8, "SSL[heartbeat] ", 15) == 0)
            return;

        if (VAR_15 && FUNC_11(VAR_15) < 300) {

            ((char*)VAR_8)[VAR_7] = ' ';
            FUNC_10((char*)VAR_8+VAR_7+1, VAR_15, FUNC_11(VAR_15)+1);
            VAR_7 += FUNC_11(VAR_15)+1;
        }


        if (VAR_7 == 31 && FUNC_9(VAR_8, "SSL[heartbeat] SSL[HEARTBLEED] ", 31) == 0)
            return;
    }

}
