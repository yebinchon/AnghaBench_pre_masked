
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int dummy; } ;
struct key2 {int n; int * keys; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct key_type const*) ;
 int FUNC_1 (int *,struct key_type const*) ;
 int FUNC_2 (int ,char*,int,char const*) ;

void
FUNC_3(struct key2 *VAR_1, const struct key_type *VAR_2, const char *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1->n; ++VAR_4)
    {

        FUNC_1(&VAR_1->keys[VAR_4], VAR_2);


        if (!FUNC_0(&VAR_1->keys[VAR_4], VAR_2))
        {
            FUNC_2(VAR_0, "Key #%d in '%s' is bad.  Try making a new key with --genkey.",
                VAR_4+1, VAR_3);
        }
    }
}
