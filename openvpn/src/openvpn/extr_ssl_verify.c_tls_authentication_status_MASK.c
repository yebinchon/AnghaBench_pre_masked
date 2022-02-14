
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_multi {scalar_t__ tas_last; struct key_state** key_scan; } ;
struct key_state {int authenticated; int auth_deferred; scalar_t__ auth_deferred_expire; } ;






 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tls_multi*,struct key_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int,int,int) ;
 unsigned int FUNC_3 (struct key_state*) ;
 unsigned int FUNC_4 (struct key_state*) ;
 scalar_t__ VAR_6 ;

int
FUNC_5(struct tls_multi *VAR_7, const int VAR_8)
{
    bool VAR_9 = 0;
    bool VAR_10 = 0;
    bool VAR_11 = 0;
    if (VAR_7)
    {
        int VAR_12;
        for (VAR_12 = 0; VAR_12 < VAR_1; ++VAR_12)
        {
            struct key_state *VAR_13 = VAR_7->key_scan[VAR_12];
            if (FUNC_1(VAR_7, VAR_13))
            {
                VAR_11 = 1;
                if (VAR_13->authenticated)
                {
                    VAR_10 = 1;

                }
            }
        }
    }





    if (VAR_10)
    {
        return VAR_4;
    }
    else if (!VAR_11 || VAR_9)
    {
        return VAR_2;
    }
    else
    {
        return VAR_3;
    }
}
