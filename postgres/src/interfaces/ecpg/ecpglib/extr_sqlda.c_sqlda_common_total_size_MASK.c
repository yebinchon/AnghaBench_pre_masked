
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int timestamp ;
struct TYPE_4__ {long buf; long digits; long ndigits; } ;
typedef TYPE_1__ numeric ;
typedef int interval ;
typedef int int64 ;
typedef enum ECPGttype { ____Placeholder_ECPGttype } ECPGttype ;
typedef enum COMPAT_MODE { ____Placeholder_COMPAT_MODE } COMPAT_MODE ;
typedef int decimal ;
typedef int date ;
typedef int PGresult ;
typedef int NumericDigit ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (char*,int *) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*,int,int) ;
 char* FUNC_4 (int const*,int,int) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (long,int,long,long*,long*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static long
FUNC_9(const PGresult *VAR_0, int VAR_1, enum COMPAT_MODE VAR_2, long VAR_3)
{
 int VAR_4 = FUNC_5(VAR_0);
 int VAR_5;
 long VAR_6;


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  enum ECPGttype VAR_7 = FUNC_7(FUNC_2(VAR_0, VAR_5), VAR_2);

  switch (VAR_7)
  {
   case 135:
   case 128:
    FUNC_6(VAR_3, sizeof(short), sizeof(short), &VAR_3, &VAR_6);
    break;
   case 140:
   case 131:
    FUNC_6(VAR_3, sizeof(int), sizeof(int), &VAR_3, &VAR_6);
    break;
   case 138:
   case 130:
    FUNC_6(VAR_3, sizeof(long), sizeof(long), &VAR_3, &VAR_6);
    break;
   case 137:
   case 129:
    FUNC_6(VAR_3, sizeof(long long), sizeof(long long), &VAR_3, &VAR_6);
    break;
   case 146:
    FUNC_6(VAR_3, sizeof(bool), sizeof(bool), &VAR_3, &VAR_6);
    break;
   case 141:
    FUNC_6(VAR_3, sizeof(float), sizeof(float), &VAR_3, &VAR_6);
    break;
   case 142:
    FUNC_6(VAR_3, sizeof(double), sizeof(double), &VAR_3, &VAR_6);
    break;
   case 143:
    FUNC_6(VAR_3, sizeof(int), sizeof(decimal), &VAR_3, &VAR_6);
    break;
   case 136:
    FUNC_6(VAR_3, sizeof(NumericDigit *), sizeof(numeric), &VAR_3, &VAR_6);
    if (!FUNC_3(VAR_0, VAR_1, VAR_5))
    {
     char *VAR_8 = FUNC_4(VAR_0, VAR_1, VAR_5);
     numeric *VAR_9;

     VAR_9 = FUNC_1(VAR_8, ((void*)0));
     if (!VAR_9)
      break;
     if (VAR_9->buf)
      FUNC_6(VAR_6, sizeof(int), VAR_9->digits - VAR_9->buf + VAR_9->ndigits, &VAR_3, &VAR_6);
     FUNC_0(VAR_9);
    }
    break;
   case 144:
    FUNC_6(VAR_3, sizeof(date), sizeof(date), &VAR_3, &VAR_6);
    break;
   case 133:
    FUNC_6(VAR_3, sizeof(int64), sizeof(timestamp), &VAR_3, &VAR_6);
    break;
   case 139:
    FUNC_6(VAR_3, sizeof(int64), sizeof(interval), &VAR_3, &VAR_6);
    break;
   case 145:
   case 132:
   case 134:
   default:
    {
     long VAR_10 = FUNC_8(FUNC_4(VAR_0, VAR_1, VAR_5)) + 1;

     FUNC_6(VAR_3, sizeof(int), VAR_10, &VAR_3, &VAR_6);
     break;
    }
  }
  VAR_3 = VAR_6;
 }
 return VAR_3;
}
