
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t h16_count; scalar_t__ elision; scalar_t__ elision_size; int ipv4_len; scalar_t__ ipv4; TYPE_3__* components; } ;
typedef TYPE_1__ ipv6_address ;
typedef int USHORT ;
typedef int UINT ;
struct TYPE_6__ {scalar_t__ str; } ;
typedef scalar_t__ INT ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,TYPE_1__ const*,int*,size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static BOOL FUNC_3(const ipv6_address *VAR_2, USHORT VAR_3[8]) {
    DWORD VAR_4, VAR_5 = 0;
    BOOL VAR_6 = VAR_0;

    for(VAR_4 = 0; VAR_4 < VAR_2->h16_count; ++VAR_4) {
        if(VAR_2->elision) {
            if(VAR_2->components[VAR_4].str > VAR_2->elision && !VAR_6) {



                INT VAR_7;
                for(VAR_7 = 0; VAR_7 < VAR_2->elision_size; VAR_7+=2)
                    VAR_3[VAR_5++] = 0;

                VAR_6 = VAR_1;
            }
        }

        VAR_3[VAR_5++] = FUNC_1(VAR_2->components[VAR_4]);
    }


    if(!VAR_6 && VAR_2->elision) {
        INT VAR_8;
        for(VAR_8 = 0; VAR_8 < VAR_2->elision_size; VAR_8+=2)
            VAR_3[VAR_5++] = 0;
    }

    if(VAR_2->ipv4) {
        UINT VAR_9 = FUNC_2(VAR_2->ipv4, VAR_2->ipv4_len);

        if(VAR_5 != 6) {
            FUNC_0("(%p %p): Failed sanity check with %d\n", VAR_2, VAR_3, VAR_5);
            return VAR_0;
        }

        VAR_3[VAR_5++] = (VAR_9 >> 16) & 0xffff;
        VAR_3[VAR_5] = VAR_9 & 0xffff;
    }

    return VAR_1;
}
