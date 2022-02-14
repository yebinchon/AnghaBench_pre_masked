
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* _hidden; int key_size; } ;
typedef TYPE_1__ cbc_handles ;
typedef int afalg_ctx ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int const* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int const*,int ) ;
 int FUNC_3 (int const*,int ) ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (int const*,int) ;
 int FUNC_6 (int const*,int ) ;
 int FUNC_7 (int const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_8 (int) ;

__attribute__((used)) static const EVP_CIPHER *FUNC_9(int VAR_7)
{
    cbc_handles *VAR_8 = FUNC_8(VAR_7);
    if (VAR_8->_hidden == ((void*)0)
        && ((VAR_8->_hidden =
         FUNC_1(VAR_7,
                             VAR_0,
                             VAR_8->key_size)) == ((void*)0)
        || !FUNC_7(VAR_8->_hidden,
                                          VAR_1)
        || !FUNC_4(VAR_8->_hidden,
                                      VAR_2 |
                                      VAR_3)
        || !FUNC_6(VAR_8->_hidden,
                                     VAR_5)
        || !FUNC_3(VAR_8->_hidden,
                                          VAR_6)
        || !FUNC_2(VAR_8->_hidden,
                                        VAR_4)
        || !FUNC_5(VAR_8->_hidden,
                                              sizeof(afalg_ctx)))) {
        FUNC_0(VAR_8->_hidden);
        VAR_8->_hidden= ((void*)0);
    }
    return VAR_8->_hidden;
}
