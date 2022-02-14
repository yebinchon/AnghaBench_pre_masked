
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct BannerOutput*,int ,char const*,int) ;
 int FUNC_1 (unsigned char const*,unsigned int,struct BannerOutput*,unsigned int*) ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void
FUNC_4(const unsigned char *VAR_2,
             unsigned VAR_3,
             struct BannerOutput *VAR_4,
             unsigned *VAR_5)
{
    unsigned VAR_6 = VAR_2[2];
    unsigned VAR_7 = VAR_2[3];
    const char *VAR_8;

    switch (VAR_6) {
        case 0: FUNC_0(VAR_4, VAR_0, "UNIV", 4); return;
        case 2: FUNC_0(VAR_4, VAR_0, "XNTPD-OLD", 9); return;
        case 3: FUNC_0(VAR_4, VAR_0, "XNTPD", 5); break;
        default:
            return;
    }

    VAR_8 = FUNC_3(VAR_1, VAR_7);
    if (VAR_8) {
        FUNC_0(VAR_4, VAR_0, " ", 1);
        FUNC_0(VAR_4, VAR_0, VAR_8, FUNC_2(VAR_8));
    }

    switch (VAR_7) {
        case 42:
            FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
            break;
    }

}
