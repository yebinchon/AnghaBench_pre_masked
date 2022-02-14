
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cert_hash_set {struct cert_hash_set** ch; } ;


 int VAR_0 ;
 int FUNC_0 (struct cert_hash_set*) ;

void
FUNC_1(struct cert_hash_set *VAR_1)
{
    if (VAR_1)
    {
        int VAR_2;
        for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
        {
            FUNC_0(VAR_1->ch[VAR_2]);
        }
        FUNC_0(VAR_1);
    }
}
