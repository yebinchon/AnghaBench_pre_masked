
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAND_METHOD ;
typedef int ENGINE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int const* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

const RAND_METHOD *FUNC_6(void)
{



    const RAND_METHOD *VAR_6 = ((void*)0);

    if (!FUNC_5(&VAR_3, VAR_1))
        return ((void*)0);

    FUNC_1(VAR_5);
    if (VAR_0 == ((void*)0)) {

        ENGINE *VAR_7;


        if ((VAR_7 = FUNC_4()) != ((void*)0)
                && (VAR_6 = FUNC_3(VAR_7)) != ((void*)0)) {
            VAR_2 = VAR_7;
            VAR_0 = VAR_6;
        } else {
            FUNC_2(VAR_7);
            VAR_0 = &VAR_4;
        }



    }
    VAR_6 = VAR_0;
    FUNC_0(VAR_5);
    return VAR_6;

}
