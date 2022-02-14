
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int len; int* path; } ;
typedef TYPE_1__ nfs41_abs_path ;
typedef int USHORT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char**,int *,int*,int) ;

__attribute__((used)) static int FUNC_1(unsigned char **VAR_2, uint32_t *VAR_3, nfs41_abs_path *VAR_4)
{
    int VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_4->len, sizeof(USHORT));
    if (VAR_5) goto out;
    if (VAR_4->len == 0)
        goto out;
    if (VAR_4->len >= VAR_1) {
        VAR_5 = VAR_0;
        goto out;
    }
    VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4->path, VAR_4->len);
    if (VAR_5) goto out;
    VAR_4->len--;
out:
    return VAR_5;
}
