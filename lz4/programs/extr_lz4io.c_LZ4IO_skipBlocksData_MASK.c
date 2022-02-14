
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LZ4F_contentChecksum_t ;
typedef unsigned long LZ4F_blockChecksum_t ;
typedef int FILE ;


 unsigned long const VAR_0 ;
 int VAR_1 ;
 unsigned long const VAR_2 ;
 int FUNC_0 (unsigned char**) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,unsigned long const,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (unsigned char*,int,int,int *) ;

__attribute__((used)) static unsigned long long FUNC_4(FILE* VAR_4,
        const LZ4F_blockChecksum_t VAR_5,
        const LZ4F_contentChecksum_t VAR_6) {
    unsigned char VAR_7[VAR_1];
    unsigned long long VAR_8 = 0;
    for (;;) {
        if (!FUNC_3(VAR_7, 1, VAR_1, VAR_4)) {
            if (FUNC_2(VAR_4)) return VAR_8;
            return 0;
        }
        VAR_8 += VAR_1;
        {
            const unsigned long VAR_9 = FUNC_0(&VAR_7) & 0x7FFFFFFFU;
            const unsigned long VAR_10 = VAR_9 + (VAR_5 * VAR_0);
            if (VAR_9 == 0) {

                if (VAR_6) {

                    if (FUNC_1(VAR_4, VAR_2, VAR_3) != 0) {
                        return 0;
                    }
                    VAR_8 += VAR_2;
                }
                break;
            }
            VAR_8 += VAR_10;

            if (FUNC_1(VAR_4, VAR_10, VAR_3) != 0) {
                return 0;
            }
        }
    }
    return VAR_8;
}
