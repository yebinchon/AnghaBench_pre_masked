
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int Oid ;
typedef int IndexAMProperty ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int *,int *) ;

bool
FUNC_6(Oid VAR_4, int VAR_5,
    IndexAMProperty VAR_6, const char *VAR_7,
    bool *VAR_8, bool *VAR_9)
{
 Oid VAR_10,
    VAR_11,
    VAR_12;
 int16 VAR_13;


 if (VAR_5 == 0)
  return 0;
 switch (VAR_6)
 {
  case 129:
   VAR_13 = VAR_2;
   break;
  case 128:
   VAR_13 = VAR_3;
   break;
  default:
   return 0;
 }


 VAR_10 = FUNC_4(VAR_4, VAR_5);
 if (!FUNC_2(VAR_10))
 {
  *VAR_9 = 1;
  return 1;
 }


 if (!FUNC_5(VAR_10, &VAR_11, &VAR_12))
 {
  *VAR_9 = 1;
  return 1;
 }



 *VAR_8 = FUNC_3(VAR_0,
         FUNC_1(VAR_11),
         FUNC_1(VAR_12),
         FUNC_1(VAR_12),
         FUNC_0(VAR_13));





 if (VAR_6 == 128 && !*VAR_8)
 {
  *VAR_8 = !FUNC_3(VAR_0,
           FUNC_1(VAR_11),
           FUNC_1(VAR_12),
           FUNC_1(VAR_12),
           FUNC_0(VAR_1));
 }

 *VAR_9 = 0;

 return 1;
}
