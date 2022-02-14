
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int dscale; } ;
typedef TYPE_1__ NumericVar ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__ const*,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_7(const NumericVar *VAR_3, const NumericVar *VAR_4, NumericVar *VAR_5)
{
 NumericVar VAR_6;
 NumericVar VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_5(&VAR_6);
 FUNC_5(&VAR_7);


 VAR_8 = FUNC_3(VAR_3);
 VAR_9 = FUNC_3(VAR_4);
 VAR_10 = VAR_9 - VAR_8;






 VAR_11 = VAR_2 - VAR_10;
 VAR_11 = FUNC_0(VAR_11, VAR_3->dscale);
 VAR_11 = FUNC_0(VAR_11, VAR_4->dscale);
 VAR_11 = FUNC_0(VAR_11, VAR_1);
 VAR_11 = FUNC_1(VAR_11, VAR_0);





 VAR_12 = VAR_11 + VAR_10 - VAR_8 + 8;
 VAR_12 = FUNC_0(VAR_12, VAR_1);

 VAR_13 = VAR_11 + VAR_10 - VAR_9 + 8;
 VAR_13 = FUNC_0(VAR_13, VAR_1);


 FUNC_6(VAR_3, &VAR_6, VAR_12);
 FUNC_6(VAR_4, &VAR_7, VAR_13);


 FUNC_2(&VAR_7, &VAR_6, VAR_5, VAR_11, 1);

 FUNC_4(&VAR_7);
 FUNC_4(&VAR_6);
}
