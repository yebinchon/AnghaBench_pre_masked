
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_value {unsigned long len; int * value; } ;
typedef int Bytef ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,unsigned long*,int *,unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int * FUNC_5 (unsigned long const) ;
 void FUNC_6 (struct lwan_value*,unsigned long const) ;

__attribute__((used)) static void FUNC_7(const struct lwan_value *VAR_1,
                          struct lwan_value *VAR_2)
{
    const unsigned long VAR_3 = FUNC_2(VAR_1->len);

    VAR_2->len = VAR_3;

    if (FUNC_0(!(VAR_2->value = FUNC_5(VAR_3))))
        goto error_zero_out;

    if (FUNC_0(FUNC_1((Bytef *)VAR_2->value, &VAR_2->len,
                          (Bytef *)VAR_1->value,
                          VAR_1->len) != VAR_0))
        goto error_free_compressed;

    if (FUNC_4(VAR_2->len, VAR_1->len))
        return FUNC_6(VAR_2, VAR_3);

error_free_compressed:
    FUNC_3(VAR_2->value);
    VAR_2->value = ((void*)0);
error_zero_out:
    VAR_2->len = 0;
}
