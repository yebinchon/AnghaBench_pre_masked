
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ ki_len; size_t iv_len; int context_len; int context; int label_len; int label; int iv; int mode; int * ctx_init; int * ki; } ;
typedef TYPE_1__ KBKDF ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*,size_t) ;
 int FUNC_3 (unsigned char*,size_t) ;
 unsigned char* FUNC_4 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int *,int ,int ,size_t,int ,int ,int ,int ,unsigned char*,size_t,int ,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_7(void *VAR_4, unsigned char *VAR_5, size_t VAR_6)
{
    KBKDF *VAR_7 = (KBKDF *)VAR_4;
    int VAR_8 = 0;
    unsigned char *VAR_9 = ((void*)0);
    uint32_t VAR_10 = FUNC_5(VAR_6 * 8);
    size_t VAR_11 = 0;



    if (VAR_7->ctx_init == ((void*)0)) {
        if (VAR_7->ki_len == 0 || VAR_7->ki == ((void*)0)) {
            FUNC_0(VAR_0, VAR_3);
            return 0;
        }


        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    VAR_11 = FUNC_1(VAR_7->ctx_init);
    if (VAR_11 == 0)
        goto done;
    if (VAR_7->iv_len != 0 && VAR_7->iv_len != VAR_11) {
        FUNC_0(VAR_0, VAR_1);
        goto done;
    }

    VAR_9 = FUNC_4(VAR_11);
    if (VAR_9 == ((void*)0))
        goto done;

    VAR_8 = FUNC_6(VAR_7->ctx_init, VAR_7->mode, VAR_7->iv, VAR_7->iv_len, VAR_7->label,
                 VAR_7->label_len, VAR_7->context, VAR_7->context_len, VAR_9, VAR_11, VAR_10,
                 VAR_5, VAR_6);
done:
    if (VAR_8 != 1)
        FUNC_2(VAR_5, VAR_6);
    FUNC_3(VAR_9, VAR_11);
    return VAR_8;
}
