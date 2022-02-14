
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {scalar_t__ length; scalar_t__ max_length; scalar_t__ banner; } ;


 size_t VAR_0 ;
 struct BannerOutput* FUNC_0 (struct BannerOutput*,struct BannerOutput*) ;
 struct BannerOutput* FUNC_1 (struct BannerOutput*,unsigned int) ;
 struct BannerOutput* FUNC_2 (struct BannerOutput*,unsigned int) ;
 int FUNC_3 (scalar_t__,void const*,size_t) ;
 size_t FUNC_4 (char const*) ;

void
FUNC_5(struct BannerOutput *VAR_1, unsigned VAR_2,
              const void *VAR_3, size_t VAR_4)
{
    struct BannerOutput *VAR_5;

    if (VAR_4 == VAR_0)
        VAR_4 = FUNC_4((const char*)VAR_3);






    VAR_5 = FUNC_1(VAR_1, VAR_2);
    if (VAR_5 == ((void*)0)) {
        VAR_5 = FUNC_2(VAR_1, VAR_2);
    }





    while (VAR_5->length + VAR_4 >= VAR_5->max_length) {
        VAR_5 = FUNC_0(VAR_1, VAR_5);
    }






    FUNC_3(VAR_5->banner + VAR_5->length, VAR_3, VAR_4);
    VAR_5->length = (unsigned)(VAR_5->length + VAR_4);

}
