
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* dest; int checksum_type; unsigned int checksum; } ;
typedef TYPE_1__ TINF_DATA ;




 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (unsigned char*,int,unsigned int) ;
 unsigned int FUNC_3 (unsigned char*,int,unsigned int) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(TINF_DATA *VAR_2)
{
    int VAR_3;
    unsigned char *VAR_4 = VAR_2->dest;

    VAR_3 = FUNC_4(VAR_2);

    if (VAR_3 < 0) return VAR_3;

    switch (VAR_2->checksum_type) {

    case 129:
        VAR_2->checksum = FUNC_2(VAR_4, VAR_2->dest - VAR_4, VAR_2->checksum);
        break;

    case 128:
        VAR_2->checksum = FUNC_3(VAR_4, VAR_2->dest - VAR_4, VAR_2->checksum);
        break;
    }

    if (VAR_3 == VAR_1) {
        unsigned int VAR_5;

        switch (VAR_2->checksum_type) {

        case 129:
            VAR_5 = FUNC_0(VAR_2);
            if (VAR_2->checksum != VAR_5) {
                return VAR_0;
            }
            break;

        case 128:
            VAR_5 = FUNC_1(VAR_2);
            if (~VAR_2->checksum != VAR_5) {
                return VAR_0;
            }

            VAR_5 = FUNC_1(VAR_2);
            break;
        }
    }

    return VAR_3;
}
