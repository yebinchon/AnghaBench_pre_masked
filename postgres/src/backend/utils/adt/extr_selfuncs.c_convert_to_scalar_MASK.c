
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Datum ;
 int FUNC_0 (int ,double*,int ,double*,int ,double*) ;
 double FUNC_1 (int ,int,int*) ;
 double FUNC_2 (int ,int,int*) ;
 char* FUNC_3 (int ,int,int,int*) ;
 int FUNC_4 (char*,double*,char*,double*,char*,double*) ;
 double FUNC_5 (int ,int,int*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static bool
FUNC_7(Datum VAR_0, Oid VAR_1, Oid VAR_2, double *VAR_3,
      Datum VAR_4, Datum VAR_5, Oid VAR_6,
      double *VAR_7, double *VAR_8)
{
 bool VAR_9 = 0;
 switch (VAR_1)
 {



  case 161:
  case 152:
  case 151:
  case 150:
  case 155:
  case 154:
  case 145:
  case 144:
  case 136:
  case 137:
  case 138:
  case 139:
  case 143:
  case 134:
  case 142:
  case 141:
  case 135:
  case 140:
   *VAR_3 = FUNC_2(VAR_0, VAR_1,
              &VAR_9);
   *VAR_7 = FUNC_2(VAR_4, VAR_6,
                &VAR_9);
   *VAR_8 = FUNC_2(VAR_5, VAR_6,
                &VAR_9);
   return !VAR_9;




  case 158:
  case 160:
  case 128:
  case 133:
  case 146:
   {
    char *VAR_10 = FUNC_3(VAR_0, VAR_1,
                VAR_2, &VAR_9);
    char *VAR_11 = FUNC_3(VAR_4, VAR_6,
               VAR_2, &VAR_9);
    char *VAR_12 = FUNC_3(VAR_5, VAR_6,
               VAR_2, &VAR_9);






    if (VAR_9)
     return 0;

    FUNC_4(VAR_10, VAR_3,
           VAR_11, VAR_7,
           VAR_12, VAR_8);
    FUNC_6(VAR_10);
    FUNC_6(VAR_11);
    FUNC_6(VAR_12);
    return 1;
   }




  case 159:
   {

    if (VAR_6 != 159)
     return 0;
    FUNC_0(VAR_0, VAR_3,
          VAR_4, VAR_7,
          VAR_5, VAR_8);
    return 1;
   }




  case 131:
  case 130:
  case 156:
  case 149:
  case 132:
  case 129:
   *VAR_3 = FUNC_5(VAR_0, VAR_1,
                &VAR_9);
   *VAR_7 = FUNC_5(VAR_4, VAR_6,
               &VAR_9);
   *VAR_8 = FUNC_5(VAR_5, VAR_6,
               &VAR_9);
   return !VAR_9;




  case 153:
  case 157:
  case 147:
  case 148:
   *VAR_3 = FUNC_1(VAR_0, VAR_1,
              &VAR_9);
   *VAR_7 = FUNC_1(VAR_4, VAR_6,
                &VAR_9);
   *VAR_8 = FUNC_1(VAR_5, VAR_6,
                &VAR_9);
   return !VAR_9;
 }

 *VAR_3 = *VAR_7 = *VAR_8 = 0;
 return 0;
}
