
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(OPJ_UINT32 VAR_8)
{
    int VAR_9, VAR_10, VAR_11;

    VAR_9 = FUNC_0(((VAR_8 & (VAR_4 | VAR_0)) ==
                      VAR_4) + ((VAR_8 & (VAR_7 | VAR_3)) == VAR_7),
                     1) - FUNC_0(((VAR_8 & (VAR_4 | VAR_0)) ==
                                       (VAR_4 | VAR_0)) +
                                      ((VAR_8 & (VAR_7 | VAR_3)) ==
                                       (VAR_7 | VAR_3)), 1);

    VAR_10 = FUNC_0(((VAR_8 & (VAR_5 | VAR_1)) ==
                      VAR_5) + ((VAR_8 & (VAR_6 | VAR_2)) == VAR_6),
                     1) - FUNC_0(((VAR_8 & (VAR_5 | VAR_1)) ==
                                       (VAR_5 | VAR_1)) +
                                      ((VAR_8 & (VAR_6 | VAR_2)) ==
                                       (VAR_6 | VAR_2)), 1);

    if (!VAR_9 && !VAR_10) {
        VAR_11 = 0;
    } else {
        VAR_11 = (!(VAR_9 > 0 || (!VAR_9 && VAR_10 > 0)));
    }

    return VAR_11;
}
