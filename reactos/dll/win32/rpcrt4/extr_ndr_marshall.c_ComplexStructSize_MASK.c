
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int SHORT ;
typedef int PMIDL_STUB_MESSAGE ;
typedef int* PFORMAT_STRING ;
typedef int INT_PTR ;


 int FUNC_0 (int ,int*) ;







 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*,int) ;

ULONG FUNC_3(PMIDL_STUB_MESSAGE VAR_1, PFORMAT_STRING VAR_2)
{
  PFORMAT_STRING VAR_3;
  ULONG VAR_4 = 0;

  while (*VAR_2 != VAR_0) {
    switch (*VAR_2) {
    case 157:
    case 156:
    case 141:
    case 129:
      VAR_4 += 1;
      break;
    case 128:
    case 142:
    case 130:
      VAR_4 += 2;
      break;
    case 147:
    case 132:
    case 153:
    case 152:
    case 151:
      VAR_4 += 4;
      break;
    case 148:
    case 133:
      VAR_4 += sizeof(INT_PTR);
      break;
    case 149:
    case 155:
      VAR_4 += 8;
      break;
    case 143:
    case 131:
    case 146:
    case 150:
    case 144:
      VAR_4 += sizeof(void *);
      if (*VAR_2 != 144)
        VAR_2 += 4;
      break;
    case 160:
      FUNC_2(&VAR_4, 2);
      break;
    case 159:
      FUNC_2(&VAR_4, 4);
      break;
    case 158:
      FUNC_2(&VAR_4, 8);
      break;
    case 140:
    case 139:
    case 138:
    case 137:
    case 136:
    case 135:
    case 134:
      VAR_4 += *VAR_2 - 140 + 1;
      break;
    case 154:
      VAR_4 += VAR_2[1];
      VAR_2 += 2;
      VAR_3 = VAR_2 + *(const SHORT*)VAR_2;
      VAR_4 += FUNC_0(VAR_1, VAR_3);
      VAR_2 += 2;
      continue;
    case 145:
      break;
    default:
      FUNC_1("unhandled format 0x%02x\n", *VAR_2);
    }
    VAR_2++;
  }

  return VAR_4;
}
