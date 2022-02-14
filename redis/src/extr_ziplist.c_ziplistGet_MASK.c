
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int len; int headersize; int encoding; } ;
typedef TYPE_1__ zlentry ;


 unsigned char VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,TYPE_1__*) ;
 long long FUNC_2 (unsigned char*,int ) ;

unsigned int FUNC_3(unsigned char *VAR_1, unsigned char **VAR_2, unsigned int *VAR_3, long long *VAR_4) {
    zlentry VAR_5;
    if (VAR_1 == ((void*)0) || VAR_1[0] == VAR_0) return 0;
    if (VAR_2) *VAR_2 = ((void*)0);

    FUNC_1(VAR_1, &VAR_5);
    if (FUNC_0(VAR_5.encoding)) {
        if (VAR_2) {
            *VAR_3 = VAR_5.len;
            *VAR_2 = VAR_1+VAR_5.headersize;
        }
    } else {
        if (VAR_4) {
            *VAR_4 = FUNC_2(VAR_1+VAR_5.headersize,VAR_5.encoding);
        }
    }
    return 1;
}
