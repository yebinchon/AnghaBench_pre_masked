
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct BannerOutput*,int ,char const*,int ) ;
 int FUNC_1 (struct BannerOutput*,unsigned int,char) ;
 int FUNC_2 (struct BannerOutput*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct BannerOutput *VAR_2, unsigned VAR_3, const char *VAR_4, const unsigned char *VAR_5, size_t VAR_6)
{
    unsigned VAR_7;
    FUNC_1(VAR_2, VAR_3, ' ');
    FUNC_0(VAR_2, VAR_1, VAR_4, VAR_0);
    FUNC_1(VAR_2, VAR_3, '=');
    for (VAR_7=0; VAR_7<VAR_6; VAR_7 += 2) {
        unsigned VAR_8 = VAR_5[VAR_7] | VAR_5[VAR_7+1]<<8;
        FUNC_2(VAR_2, VAR_1, VAR_8);
    }
}
