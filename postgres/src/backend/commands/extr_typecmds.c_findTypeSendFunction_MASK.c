
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int *,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int,int ,int *) ;

__attribute__((used)) static Oid
FUNC_6(List *VAR_4, Oid VAR_5)
{
 Oid VAR_6[1];
 Oid VAR_7;




 VAR_6[0] = VAR_5;

 VAR_7 = FUNC_0(VAR_4, 1, VAR_6, 1);
 if (FUNC_1(VAR_7))
  return VAR_7;

 FUNC_2(VAR_1,
   (FUNC_3(VAR_0),
    FUNC_4("function %s does not exist",
     FUNC_5(VAR_4, 1, VAR_3, VAR_6))));

 return VAR_2;
}
