
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* output ) (unsigned char*,int*,unsigned char const*,int*) ;int * uconv_out; int * iconv_out; } ;
typedef TYPE_1__ xmlCharEncodingHandler ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int*,unsigned char const*,int*) ;
 int FUNC_1 (int *,unsigned char*,int*,unsigned char const*,int*) ;
 int FUNC_2 (int *,int ,unsigned char*,int*,unsigned char const*,int*,int ) ;

__attribute__((used)) static int
FUNC_3(xmlCharEncodingHandler *VAR_1, unsigned char *VAR_2,
                  int *VAR_3, const unsigned char *VAR_4, int *VAR_5) {
    int VAR_6;

    if (VAR_1->output != ((void*)0)) {
        VAR_6 = VAR_1->output(VAR_2, VAR_3, VAR_4, VAR_5);
    }
    else {
        *VAR_3 = 0;
        *VAR_5 = 0;
        VAR_6 = -4;
    }

    return(VAR_6);
}
