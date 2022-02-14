
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int,int ,int *) ;

__attribute__((used)) static Oid
FUNC_6(List *VAR_7, Oid VAR_8)
{
 Oid VAR_9[3];
 Oid VAR_10;





 VAR_9[0] = VAR_3;

 VAR_10 = FUNC_0(VAR_7, 1, VAR_9, 1);
 if (FUNC_1(VAR_10))
  return VAR_10;

 VAR_9[1] = VAR_6;
 VAR_9[2] = VAR_2;

 VAR_10 = FUNC_0(VAR_7, 3, VAR_9, 1);
 if (FUNC_1(VAR_10))
  return VAR_10;

 FUNC_2(VAR_1,
   (FUNC_3(VAR_0),
    FUNC_4("function %s does not exist",
     FUNC_5(VAR_7, 1, VAR_5, VAR_9))));

 return VAR_4;
}
