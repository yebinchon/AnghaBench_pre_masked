
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char c; scalar_t__ priority; int ltr; } ;
struct TYPE_4__ {double num; TYPE_1__ op; } ;
struct Token {int isNum; TYPE_2__ raw; } ;


 int VAR_0 ;






 char const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (char*) ;
 double FUNC_4 (double) ;
 double FUNC_5 (double) ;
 double FUNC_6 (double) ;
 double FUNC_7 (double,double) ;
 double FUNC_8 (double) ;
 double FUNC_9 (double) ;
 double FUNC_10 (double) ;

__attribute__((used)) static double FUNC_11(const char VAR_9[VAR_0 +1])
{
  char VAR_10[VAR_0 + 1];
  unsigned char VAR_11 = 0, VAR_12 = 0;

  struct Token VAR_13[VAR_0 + 1];
  unsigned char VAR_14 = 0;

  bool VAR_15 = 0;

  while(VAR_12 < VAR_0 + 1)
  {
    char VAR_16 = VAR_9[VAR_12];

    if(VAR_12 == 0 && VAR_9[VAR_12] == 129 && VAR_9[VAR_12 + 1] == 141)
    {
      VAR_13[VAR_14].raw.num = 0;
      VAR_13[VAR_14].isNum = 1;

      VAR_14++;
      VAR_15 = 1;
    }

    if ((VAR_16 >= '0' && VAR_16 <= '9') ||
        (VAR_11 != 0 && VAR_9[VAR_12] == VAR_1) ||
        (!VAR_15 && VAR_11 == 0 && VAR_9[VAR_12] == 129))
    {
      VAR_10[VAR_11] = VAR_9[VAR_12];
      VAR_11++;
      VAR_12++;
      continue;
    }

    if(VAR_11 != 0)
    {

      VAR_13[VAR_14].raw.num = FUNC_3(VAR_10);
      VAR_13[VAR_14].isNum = 1;
      for(unsigned char VAR_17 = 0; VAR_17 < VAR_11 + 1; VAR_17++)
      {
        VAR_10[VAR_17] = '\0';
      }
      VAR_11 = 0;
      VAR_14++;
      VAR_15 = 1;
      continue;
    }


    VAR_13[VAR_14].isNum = 0;
    VAR_13[VAR_14].raw.op.c = VAR_9[VAR_12];
    VAR_13[VAR_14].raw.op.priority = 0;
    VAR_13[VAR_14].raw.op.ltr = 1;
    VAR_15 = 0;

    switch(VAR_9[VAR_12])
    {
      case 141:
        break;
      case 138:
        VAR_15 = 1;
        break;
      case 144:
        VAR_13[VAR_14].raw.op.priority = VAR_2;
        break;
      case 129:
        VAR_13[VAR_14].raw.op.priority = VAR_6;
        break;
      case 133:
        VAR_13[VAR_14].raw.op.priority = VAR_5;
        break;
      case 139:
        VAR_13[VAR_14].raw.op.priority = VAR_3;
        break;
      case 136:
        VAR_13[VAR_14].raw.op.priority = VAR_4;
        VAR_13[VAR_14].raw.op.ltr = 0;
        break;
      case 131:
      case 140:
      case 128:
      case 143:
      case 145:
      case 142:
      case 135:
      case 134:
      case 130:
        break;
      case 137:
        VAR_13[VAR_14].isNum = 1;
        VAR_13[VAR_14].raw.num = VAR_7;
        VAR_15 = 1;
        break;
      case 132:
        VAR_13[VAR_14].isNum = 1;
        VAR_13[VAR_14].raw.num = VAR_8;
        VAR_15 = 1;
        break;
      case '\0':
        VAR_14--;
        VAR_12 = VAR_0;
        break;
      default:
        VAR_14--;
        break;
    }
    VAR_14++;
    VAR_12++;
  }

  struct Token VAR_18[VAR_0 + 1];
  struct Token VAR_19[VAR_0 + 1];
  unsigned char VAR_20 = 0, VAR_21 = 0;

  unsigned char VAR_22 = 0;

  for(unsigned char VAR_23 = 0; VAR_23 < VAR_14; VAR_23++)
  {
    if(VAR_13[VAR_23].isNum)
    {
      VAR_18[VAR_20] = VAR_13[VAR_23];
      VAR_20++;
    }
    else if(VAR_13[VAR_23].raw.op.c == 141)
    {
      VAR_19[VAR_21] = VAR_13[VAR_23];
      VAR_21++;
    }
    else if(VAR_13[VAR_23].raw.op.c == 138)
    {
      while(VAR_19[VAR_21 - 1].raw.op.c != 141)
      {
        VAR_18[VAR_20] = VAR_19[VAR_21 - 1];
        VAR_20++;
        VAR_21--;
      }
      VAR_21--;

      VAR_22 += 2;
    }
    else if(VAR_13[VAR_23].raw.op.priority == 0)
    {
      VAR_19[VAR_21] = VAR_13[VAR_23];
      VAR_21++;
    }
    else
    {
      while(VAR_21 != 0
        && (VAR_19[VAR_21 - 1].raw.op.priority == 0
          || VAR_13[VAR_23].raw.op.priority < VAR_19[VAR_21 - 1].raw.op.priority
          || (VAR_13[VAR_23].raw.op.priority == VAR_19[VAR_21 - 1].raw.op.priority && VAR_19[VAR_21 - 1].raw.op.ltr))
        && VAR_19[VAR_21 - 1].raw.op.c != 141)
      {
        VAR_18[VAR_20] = VAR_19[VAR_21 - 1];
        VAR_20++;
        VAR_21--;
      }
      VAR_19[VAR_21] = VAR_13[VAR_23];
      VAR_21++;
    }
  }

  VAR_14 -= VAR_22;

  for(signed char VAR_24 = VAR_21 - 1; VAR_24 >= 0; VAR_24--)
  {
    VAR_18[VAR_20] = VAR_19[VAR_24];
    VAR_20++;
    VAR_21--;
  }

  double VAR_25[VAR_0];
  unsigned char VAR_26 = 0;

  for(unsigned char VAR_27 = 0; VAR_27 < VAR_14; VAR_27++)
  {
    if(VAR_18[VAR_27].isNum)
    {
      VAR_25[VAR_26] = VAR_18[VAR_27].raw.num;
      VAR_26++;
      continue;
    }

    if(VAR_18[VAR_27].raw.op.priority == 0)
    {
      if (VAR_26 < 1) { } else
      if(VAR_26 >= 1)
      {
        double (*VAR_28)(double);
        switch(VAR_18[VAR_27].raw.op.c)
        {
        case 131:
          VAR_28 = FUNC_8;
          break;
        case 140:
          VAR_28 = FUNC_4;
          break;
        case 128:
          VAR_28 = FUNC_10;
          break;
        case 143:
          VAR_28 = FUNC_1;
          break;
        case 145:
          VAR_28 = FUNC_0;
          break;
        case 142:
          VAR_28 = FUNC_2;
          break;
        case 135:
          VAR_28 = FUNC_5;
          break;
        case 134:
          VAR_28 = FUNC_6;
          break;
        case 130:
          VAR_28 = FUNC_9;
          break;
        default:
          continue;
        }
        VAR_25[VAR_26 - 1] = VAR_28(VAR_25[VAR_26 - 1]);
      }
    }

    else if(VAR_26 >= 2)
    {
      switch(VAR_18[VAR_27].raw.op.c)
      {
      case 144:
        VAR_25[VAR_26 - 2] += VAR_25[VAR_26 - 1];
        break;
      case 129:
        VAR_25[VAR_26 - 2] -= VAR_25[VAR_26 - 1];
        break;
      case 133:
        VAR_25[VAR_26 - 2] *= VAR_25[VAR_26 - 1];
        break;
      case 139:
        VAR_25[VAR_26 - 2] /= VAR_25[VAR_26 - 1];
        break;
      case 136:
        VAR_25[VAR_26 - 2] = FUNC_7(VAR_25[VAR_26 - 2], VAR_25[VAR_26 - 1]);
        break;
      }

      VAR_26--;
    }
  }

  return VAR_25[0];
}
