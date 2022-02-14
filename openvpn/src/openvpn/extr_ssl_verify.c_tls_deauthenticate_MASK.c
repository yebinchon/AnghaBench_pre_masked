
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tls_multi {TYPE_2__* session; } ;
struct TYPE_4__ {TYPE_1__* key; } ;
struct TYPE_3__ {int authenticated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tls_multi*) ;

__attribute__((used)) static void
FUNC_1(struct tls_multi *VAR_2)
{
    if (VAR_2)
    {
        FUNC_0(VAR_2);
        for (int VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
        {
            for (int VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
            {
                VAR_2->session[VAR_3].key[VAR_4].authenticated = 0;
            }
        }
    }
}
