
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int len; int headersize; int encoding; } ;
typedef TYPE_1__ zlentry ;


 unsigned char VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_2 (unsigned char*,TYPE_1__*) ;
 long long FUNC_3 (unsigned char*,int ) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned int,long long*,unsigned char*) ;

unsigned int FUNC_5(unsigned char *VAR_1, unsigned char *VAR_2, unsigned int VAR_3) {
    zlentry VAR_4;
    unsigned char VAR_5;
    long long VAR_6, VAR_7;
    if (VAR_1[0] == VAR_0) return 0;

    FUNC_2(VAR_1, &VAR_4);
    if (FUNC_0(VAR_4.encoding)) {

        if (VAR_4.len == VAR_3) {
            return FUNC_1(VAR_1+VAR_4.headersize,VAR_2,VAR_3) == 0;
        } else {
            return 0;
        }
    } else {


        if (FUNC_4(VAR_2,VAR_3,&VAR_7,&VAR_5)) {
          VAR_6 = FUNC_3(VAR_1+VAR_4.headersize,VAR_4.encoding);
          return VAR_6 == VAR_7;
        }
    }
    return 0;
}
