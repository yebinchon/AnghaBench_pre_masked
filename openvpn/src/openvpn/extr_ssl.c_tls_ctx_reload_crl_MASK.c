
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tls_root_ctx {scalar_t__ crl_last_size; int crl_last_mtime; } ;
struct TYPE_3__ {int st_mtime; scalar_t__ st_size; int member_0; } ;
typedef TYPE_1__ platform_stat_t ;


 int VAR_0 ;
 int FUNC_0 (struct tls_root_ctx*,char const*,char const*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char const*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct tls_root_ctx *VAR_1, const char *VAR_2,
                   const char *VAR_3)
{

    platform_stat_t VAR_4 = {0};







    if (VAR_3)
    {
        VAR_4.st_mtime = 1;
    }
    else if (FUNC_2(VAR_2, &VAR_4) < 0)
    {
        FUNC_1(VAR_0, "WARNING: Failed to stat CRL file, not (re)loading CRL.");
        return;
    }






    if ((VAR_1->crl_last_size == VAR_4.st_size)
        && (VAR_1->crl_last_mtime == VAR_4.st_mtime))
    {
        return;
    }

    VAR_1->crl_last_mtime = VAR_4.st_mtime;
    VAR_1->crl_last_size = VAR_4.st_size;
    FUNC_0(VAR_1, VAR_2, VAR_3);
}
