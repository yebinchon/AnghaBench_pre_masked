
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ArrayType ;


 int* FUNC_0 (int *,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int32
FUNC_4(ArrayType *VAR_4, const char *VAR_5)
{
 int32 VAR_6;
 int32 *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_4, &VAR_8);





 if (VAR_8 != 1)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("invalid type modifier")));

 if (*VAR_7 < 1)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("length for type %s must be at least 1", VAR_5)));
 if (*VAR_7 > VAR_2)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("length for type %s cannot exceed %d",
      VAR_5, VAR_2)));






 VAR_6 = VAR_3 + *VAR_7;

 return VAR_6;
}
