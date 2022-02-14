
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DOUBLE ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static inline DOUBLE FUNC_5(DOUBLE VAR_1, DOUBLE VAR_2, DOUBLE VAR_3)
{
    DOUBLE VAR_4;

    VAR_1 += FUNC_1(VAR_2/12);

    VAR_2 = FUNC_2(VAR_2, 12);
    if(VAR_2<0) VAR_2 += 12;

    VAR_4 = FUNC_4(VAR_1);

    VAR_3 += FUNC_1(VAR_4 / VAR_0);
    VAR_3 += FUNC_0(VAR_2, FUNC_3(VAR_4));

    return VAR_3-1;
}
