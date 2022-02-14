
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int VarBit ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int32
FUNC_5(VarBit *VAR_0, VarBit *VAR_1)
{
 int VAR_2,
    VAR_3,
    VAR_4,
    VAR_5;
 int32 VAR_6;

 VAR_3 = FUNC_1(VAR_0);
 VAR_5 = FUNC_1(VAR_1);

 VAR_6 = FUNC_4(FUNC_3(VAR_0), FUNC_3(VAR_1), FUNC_0(VAR_3, VAR_5));
 if (VAR_6 == 0)
 {
  VAR_2 = FUNC_2(VAR_0);
  VAR_4 = FUNC_2(VAR_1);
  if (VAR_2 != VAR_4)
   VAR_6 = (VAR_2 < VAR_4) ? -1 : 1;
 }
 return VAR_6;
}
