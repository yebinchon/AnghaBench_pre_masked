
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ entry_type; scalar_t__ ext_len; unsigned char* ext; int timestamp; int version; } ;
struct TYPE_5__ {unsigned char* ihash; unsigned char* certder; size_t certderlen; int ihashlen; unsigned char* preder; size_t prederlen; } ;
typedef TYPE_1__ SCT_CTX ;
typedef TYPE_2__ SCT ;
typedef int EVP_MD_CTX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned char*,int) ;
 int VAR_3 ;
 int FUNC_1 (size_t,unsigned char*) ;
 int FUNC_2 (int ,unsigned char*) ;
 int FUNC_3 (scalar_t__,unsigned char*) ;

__attribute__((used)) static int FUNC_4(EVP_MD_CTX *VAR_4, const SCT_CTX *VAR_5, const SCT *VAR_6)
{
    unsigned char VAR_7[12];
    unsigned char *VAR_8, *VAR_9;
    size_t VAR_10;
    if (VAR_6->entry_type == VAR_0)
        return 0;
    if (VAR_6->entry_type == VAR_1 && VAR_5->ihash == ((void*)0))
        return 0;

    VAR_8 = VAR_7;
    *VAR_8++ = VAR_6->version;
    *VAR_8++ = VAR_3;
    FUNC_2(VAR_6->timestamp, VAR_8);
    FUNC_3(VAR_6->entry_type, VAR_8);

    if (!FUNC_0(VAR_4, VAR_7, VAR_8 - VAR_7))
        return 0;

    if (VAR_6->entry_type == VAR_2) {
        VAR_9 = VAR_5->certder;
        VAR_10 = VAR_5->certderlen;
    } else {
        if (!FUNC_0(VAR_4, VAR_5->ihash, VAR_5->ihashlen))
            return 0;
        VAR_9 = VAR_5->preder;
        VAR_10 = VAR_5->prederlen;
    }


    if (VAR_9 == ((void*)0))
        return 0;


    VAR_8 = VAR_7;
    FUNC_1(VAR_10, VAR_8);

    if (!FUNC_0(VAR_4, VAR_7, 3))
        return 0;
    if (!FUNC_0(VAR_4, VAR_9, VAR_10))
        return 0;


    VAR_8 = VAR_7;
    FUNC_3(VAR_6->ext_len, VAR_8);
    if (!FUNC_0(VAR_4, VAR_7, 2))
        return 0;

    if (VAR_6->ext_len && !FUNC_0(VAR_4, VAR_6->ext, VAR_6->ext_len))
        return 0;

    return 1;
}
