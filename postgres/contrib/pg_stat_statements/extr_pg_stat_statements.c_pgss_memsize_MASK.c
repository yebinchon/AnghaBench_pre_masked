
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgssSharedState ;
typedef int pgssEntry ;
typedef int Size ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static Size
FUNC_3(void)
{
 Size VAR_1;

 VAR_1 = FUNC_0(sizeof(pgssSharedState));
 VAR_1 = FUNC_1(VAR_1, FUNC_2(VAR_0, sizeof(pgssEntry)));

 return VAR_1;
}
