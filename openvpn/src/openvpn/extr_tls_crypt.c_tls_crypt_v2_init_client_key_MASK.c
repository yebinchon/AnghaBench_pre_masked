
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_ctx_bi {int dummy; } ;
struct key2 {int keys; } ;
struct buffer {int dummy; } ;
typedef int key2 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct buffer FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct buffer*,int *,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct buffer*,int ,char const*,char const*) ;
 int FUNC_4 (struct key2*,int) ;
 int VAR_3 ;
 int FUNC_5 (struct key_ctx_bi*,struct key2*,int) ;

void
FUNC_6(struct key_ctx_bi *VAR_4, struct buffer *VAR_5,
                             const char *VAR_6, const char *VAR_7)
{
    struct buffer VAR_8 = FUNC_0(VAR_1
                                         + VAR_2);

    if (!FUNC_3(&VAR_8, VAR_3,
                           VAR_6, VAR_7))
    {
        FUNC_2(VAR_0, "ERROR: invalid tls-crypt-v2 client key format");
    }

    struct key2 VAR_9;
    if (!FUNC_1(&VAR_8, &VAR_9, sizeof(VAR_9)))
    {
        FUNC_2(VAR_0, "ERROR: not enough data in tls-crypt-v2 client key");
    }

    FUNC_5(VAR_4, &VAR_9, 0);
    FUNC_4(&VAR_9, sizeof(VAR_9));

    *VAR_5 = VAR_8;
}
