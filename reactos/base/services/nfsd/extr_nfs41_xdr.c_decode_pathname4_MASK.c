
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {unsigned short len; scalar_t__ path; } ;
typedef TYPE_1__ nfs41_abs_path ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char**,int*,int) ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_3,
    nfs41_abs_path *VAR_4)
{
    char *VAR_5;
    u_int32_t VAR_6, VAR_7, VAR_8, VAR_9;


    if (!FUNC_1(VAR_3, &VAR_7))
        return VAR_0;

    VAR_5 = (char *)VAR_4->path;
    VAR_9 = VAR_1;


    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
        VAR_8 = VAR_9;
        if (!FUNC_0(VAR_3, (char **)&VAR_5, &VAR_8, VAR_1))
            return VAR_0;
        VAR_9 -= VAR_8;
        VAR_5 += VAR_8;

        if (VAR_6 < VAR_7-1) {
            if (VAR_9 < 1)
                return VAR_0;
            *VAR_5++ = '\\';
            VAR_9--;
        }
    }
    VAR_4->len = (unsigned short)(VAR_1 - VAR_9);
    return VAR_2;
}
