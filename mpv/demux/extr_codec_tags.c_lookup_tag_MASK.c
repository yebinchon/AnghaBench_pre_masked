
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct AVCodecTag {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct AVCodecTag const**,int ) ;
 struct AVCodecTag* FUNC_1 () ;
 struct AVCodecTag* FUNC_2 () ;
 struct AVCodecTag* FUNC_3 () ;
 struct AVCodecTag* FUNC_4 () ;
 char const* FUNC_5 (int) ;

__attribute__((used)) static const char *FUNC_6(int VAR_1, uint32_t VAR_2)
{
    const struct AVCodecTag *VAR_3[3] = {0};
    switch (VAR_1) {
    case 128: {
        VAR_3[0] = FUNC_4();



        break;
    }
    case 129: {
        VAR_3[0] = FUNC_3();



        break;
    }
    }

    int VAR_4 = FUNC_0(VAR_3, VAR_2);
    return VAR_4 == VAR_0 ? ((void*)0) : FUNC_5(VAR_4);
}
