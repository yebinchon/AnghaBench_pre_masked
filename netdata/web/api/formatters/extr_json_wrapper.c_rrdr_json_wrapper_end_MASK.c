
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int max; int min; } ;
typedef TYPE_1__ RRDR ;
typedef int BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,char*,char*) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(RRDR *VAR_1, BUFFER *VAR_2, uint32_t VAR_3, uint32_t VAR_4, int VAR_5) {
    (void)VAR_3;

    char VAR_6[2] = "",
            VAR_7[2] = "";

    if( VAR_4 & VAR_0 ) {
        VAR_6[0] = '\0';
        VAR_7[0] = '\'';
    }
    else {
        VAR_6[0] = '"';
        VAR_7[0] = '"';
    }

    if(VAR_5) FUNC_2(VAR_2, VAR_7);

    FUNC_1(VAR_2, ",\n %smin%s: ", VAR_6, VAR_6);
    FUNC_0(VAR_2, VAR_1->min);
    FUNC_1(VAR_2, ",\n %smax%s: ", VAR_6, VAR_6);
    FUNC_0(VAR_2, VAR_1->max);
    FUNC_2(VAR_2, "\n}\n");
}
