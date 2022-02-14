
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VarBit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,int,int*) ;

__attribute__((used)) static VarBit *
FUNC_6(VarBit *VAR_3, VarBit *VAR_4, int VAR_5, int VAR_6)
{
 VarBit *VAR_7;
 VarBit *VAR_8;
 VarBit *VAR_9;
 int VAR_10;






 if (VAR_5 <= 0)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("negative substring length not allowed")));
 if (FUNC_5(VAR_5, VAR_6, &VAR_10))
  FUNC_2(VAR_2,
    (FUNC_3(VAR_0),
     FUNC_4("integer out of range")));

 VAR_8 = FUNC_1(VAR_3, 1, VAR_5 - 1, 0);
 VAR_9 = FUNC_1(VAR_3, VAR_10, -1, 1);
 VAR_7 = FUNC_0(VAR_8, VAR_4);
 VAR_7 = FUNC_0(VAR_7, VAR_9);

 return VAR_7;
}
