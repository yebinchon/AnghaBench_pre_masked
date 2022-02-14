
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t finish_md_len; int finish_md; } ;
struct TYPE_6__ {TYPE_1__ tmp; } ;
struct TYPE_7__ {TYPE_2__ s3; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (void*,int ,size_t) ;

size_t FUNC_1(const SSL *VAR_0, void *VAR_1, size_t VAR_2)
{
    size_t VAR_3 = 0;

    VAR_3 = VAR_0->s3.tmp.finish_md_len;
    if (VAR_2 > VAR_3)
        VAR_2 = VAR_3;
    FUNC_0(VAR_1, VAR_0->s3.tmp.finish_md, VAR_2);
    return VAR_3;
}
