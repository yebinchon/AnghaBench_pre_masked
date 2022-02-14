
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char const*,int,unsigned long*) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_3, int VAR_4, int VAR_5,
                           int (*VAR_6) (unsigned long VAR_7, void *VAR_8),
                           void *VAR_9)
{
    unsigned long VAR_10;
    int VAR_11;
    while (VAR_4) {
        if (VAR_5 == VAR_0) {
            VAR_10 = *VAR_3++;
            VAR_4--;
        } else if (VAR_5 == VAR_1) {
            VAR_10 = *VAR_3++ << 8;
            VAR_10 |= *VAR_3++;
            VAR_4 -= 2;
        } else if (VAR_5 == VAR_2) {
            VAR_10 = ((unsigned long)*VAR_3++) << 24;
            VAR_10 |= ((unsigned long)*VAR_3++) << 16;
            VAR_10 |= *VAR_3++ << 8;
            VAR_10 |= *VAR_3++;
            VAR_4 -= 4;
        } else {
            VAR_11 = FUNC_0(VAR_3, VAR_4, &VAR_10);
            if (VAR_11 < 0)
                return -1;
            VAR_4 -= VAR_11;
            VAR_3 += VAR_11;
        }
        if (VAR_6) {
            VAR_11 = VAR_6(VAR_10, VAR_9);
            if (VAR_11 <= 0)
                return VAR_11;
        }
    }
    return 1;
}
