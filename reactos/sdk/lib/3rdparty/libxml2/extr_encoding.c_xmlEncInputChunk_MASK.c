
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* input ) (unsigned char*,int*,unsigned char const*,int*) ;int * uconv_in; int * iconv_in; } ;
typedef TYPE_1__ xmlCharEncodingHandler ;


 int FUNC_0 (unsigned char*,int*,unsigned char const*,int*) ;
 int FUNC_1 (int *,unsigned char*,int*,unsigned char const*,int*) ;
 int FUNC_2 (int *,int,unsigned char*,int*,unsigned char const*,int*,int) ;

__attribute__((used)) static int
FUNC_3(xmlCharEncodingHandler *VAR_0, unsigned char *VAR_1,
                 int *VAR_2, const unsigned char *VAR_3, int *VAR_4, int VAR_5) {
    int VAR_6;
    (void)VAR_5;

    if (VAR_0->input != ((void*)0)) {
        VAR_6 = VAR_0->input(VAR_1, VAR_2, VAR_3, VAR_4);
    }
    else {
        *VAR_2 = 0;
        *VAR_4 = 0;
        VAR_6 = -2;
    }

    return(VAR_6);
}
