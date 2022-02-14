
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int num; unsigned char const* enc_data; int flags; } ;
typedef TYPE_1__ EVP_ENCODE_CTX ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,unsigned char const*,int) ;
 int FUNC_2 (unsigned char const*,unsigned char const*,int) ;

int FUNC_3(EVP_ENCODE_CTX *VAR_2, unsigned char *VAR_3, int *VAR_4,
                      const unsigned char *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    size_t VAR_9 = 0;

    *VAR_4 = 0;
    if (VAR_6 <= 0)
        return 0;
    FUNC_0(VAR_2->length <= (int)sizeof(VAR_2->enc_data));
    if (VAR_2->length - VAR_2->num > VAR_6) {
        FUNC_2(&(VAR_2->enc_data[VAR_2->num]), VAR_5, VAR_6);
        VAR_2->num += VAR_6;
        return 1;
    }
    if (VAR_2->num != 0) {
        VAR_7 = VAR_2->length - VAR_2->num;
        FUNC_2(&(VAR_2->enc_data[VAR_2->num]), VAR_5, VAR_7);
        VAR_5 += VAR_7;
        VAR_6 -= VAR_7;
        VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_2->enc_data, VAR_2->length);
        VAR_2->num = 0;
        VAR_3 += VAR_8;
        VAR_9 = VAR_8;
        if ((VAR_2->flags & VAR_0) == 0) {
            *(VAR_3++) = '\n';
            VAR_9++;
        }
        *VAR_3 = '\0';
    }
    while (VAR_6 >= VAR_2->length && VAR_9 <= VAR_1) {
        VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_2->length);
        VAR_5 += VAR_2->length;
        VAR_6 -= VAR_2->length;
        VAR_3 += VAR_8;
        VAR_9 += VAR_8;
        if ((VAR_2->flags & VAR_0) == 0) {
            *(VAR_3++) = '\n';
            VAR_9++;
        }
        *VAR_3 = '\0';
    }
    if (VAR_9 > VAR_1) {

        *VAR_4 = 0;
        return 0;
    }
    if (VAR_6 != 0)
        FUNC_2(&(VAR_2->enc_data[0]), VAR_5, VAR_6);
    VAR_2->num = VAR_6;
    *VAR_4 = VAR_9;

    return 1;
}
