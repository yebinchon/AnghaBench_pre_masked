
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DedupTable {struct DedupEntry** entries; } ;
struct DedupEntry {unsigned int ip_them; unsigned int port_them; unsigned int ip_me; unsigned int port_me; } ;
typedef unsigned int ip_me ;


 int VAR_0 ;
 int FUNC_0 (struct DedupEntry*,struct DedupEntry*,int) ;

unsigned
FUNC_1(struct DedupTable *VAR_1,
                   unsigned VAR_2, unsigned VAR_3,
                   unsigned VAR_4, unsigned VAR_5)
{
    unsigned VAR_6;
    struct DedupEntry *VAR_7;
    unsigned VAR_8;



    VAR_6 = (VAR_2 + VAR_3) ^ ((VAR_4) + (VAR_2>>16)) ^ (VAR_2>>24) ^ VAR_5;
    VAR_6 &= VAR_0-1;


    VAR_7 = VAR_1->entries[VAR_6];

    for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
        if (VAR_7[VAR_8].ip_them == VAR_2 && VAR_7[VAR_8].port_them == VAR_3
            && VAR_7[VAR_8].ip_me == VAR_4 && VAR_7[VAR_8].port_me == VAR_5) {

            if (VAR_8 > 0) {
                VAR_7[VAR_8].ip_them ^= VAR_7[0].ip_them;
                VAR_7[VAR_8].port_them ^= VAR_7[0].port_them;
                VAR_7[VAR_8].ip_me ^= VAR_7[0].ip_me;
                VAR_7[VAR_8].port_me ^= VAR_7[0].port_me;

                VAR_7[0].ip_them ^= VAR_7[VAR_8].ip_them;
                VAR_7[0].port_them ^= VAR_7[VAR_8].port_them;
                VAR_7[0].ip_me ^= VAR_7[VAR_8].ip_me;
                VAR_7[0].port_me ^= VAR_7[VAR_8].port_me;

                VAR_7[VAR_8].ip_them ^= VAR_7[0].ip_them;
                VAR_7[VAR_8].port_them ^= VAR_7[0].port_them;
                VAR_7[VAR_8].ip_me ^= VAR_7[0].ip_me;
                VAR_7[VAR_8].port_me ^= VAR_7[0].port_me;
            }
            return 1;
        }
    }



    FUNC_0(VAR_7, VAR_7+1, 3*sizeof(*VAR_7));
    VAR_7[0].ip_them = VAR_2;
    VAR_7[0].port_them = VAR_3;
    VAR_7[0].ip_me = VAR_4;
    VAR_7[0].port_me = VAR_5;

    return 0;
}
