
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ name; int attrs; } ;
typedef TYPE_1__ type_t ;
struct TYPE_13__ {scalar_t__ name; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 unsigned short VAR_16 ;
 unsigned short VAR_17 ;
 unsigned short VAR_18 ;
 unsigned short VAR_19 ;
 int FUNC_0 (int ) ;
 unsigned short FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*,scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,char*) ;
 int VAR_20 ;
 TYPE_7__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;

unsigned short FUNC_12(type_t *VAR_21)
{
  unsigned short VAR_22;

  FUNC_2("get_type_vt: %p type->name %s\n", VAR_21, VAR_21->name);
  if (VAR_21->name) {
    VAR_22 = FUNC_1(VAR_21);
    if (VAR_22) return VAR_22;
  }

  if (FUNC_11(VAR_21) && FUNC_4(VAR_21->attrs, VAR_0))
    return VAR_18;

  switch (FUNC_10(VAR_21)) {
  case 154:
    switch (FUNC_9(VAR_21)) {
    case 153:
      return VAR_12;
    case 152:
    case 141:
      if (FUNC_8(VAR_21) > 0)
        return VAR_12;
      else
        return VAR_3;
    case 139:
      return VAR_4;
    case 145:
      if (FUNC_8(VAR_21) > 0)
        return VAR_13;
      else
        return VAR_4;
    case 146:
      if (FUNC_8(VAR_21) > 0)
        return VAR_16;
      else
        return VAR_7;
    case 144:
    case 140:
    case 150:
      if (FUNC_8(VAR_21) > 0)
        return VAR_14;
      else
        return VAR_5;
    case 142:
    case 147:
      if (FUNC_8(VAR_21) > 0)
        return VAR_15;
      else
        return VAR_6;
    case 143:
      if (VAR_20 == 8)
      {
        if (FUNC_8(VAR_21) > 0)
          return VAR_15;
        else
          return VAR_6;
      }
      else
      {
        if (FUNC_8(VAR_21) > 0)
          return VAR_14;
        else
          return VAR_5;
      }
    case 149:
      return VAR_9;
    case 151:
      return VAR_10;
    case 148:
      FUNC_3("handles can't be used in typelibs\n");
    }
    break;

  case 131:
    return VAR_8;

  case 155:
    if (FUNC_7(VAR_21))
    {
      if (FUNC_5(FUNC_6(VAR_21)->name, "SAFEARRAY"))
        return VAR_11;
      return VAR_8;
    }
    else
      return VAR_1;

  case 133:
    if(FUNC_5(VAR_21->name, "IUnknown"))
      return VAR_17;
    if(FUNC_5(VAR_21->name, "IDispatch"))
      return VAR_2;
    return VAR_18;

  case 135:
  case 130:
  case 137:
  case 132:
  case 129:
  case 136:
    return VAR_18;

  case 128:
    return VAR_19;

  case 156:

    FUNC_0(0);
    break;

  case 134:
    FUNC_3("get_type_vt: functions not supported\n");
    break;

  case 138:
    FUNC_3("get_type_vt: bitfields not supported\n");
    break;
  }
  return 0;
}
