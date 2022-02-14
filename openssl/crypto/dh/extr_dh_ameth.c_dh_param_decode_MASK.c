
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int dirty_cnt; } ;
struct TYPE_10__ {TYPE_1__* ameth; } ;
struct TYPE_9__ {int pkey_id; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef TYPE_3__ DH ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,unsigned char const**,int) ;

__attribute__((used)) static int FUNC_3(EVP_PKEY *VAR_2,
                           const unsigned char **VAR_3, int VAR_4)
{
    DH *VAR_5;

    if ((VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    VAR_5->dirty_cnt++;
    FUNC_1(VAR_2, VAR_2->ameth->pkey_id, VAR_5);
    return 1;
}
