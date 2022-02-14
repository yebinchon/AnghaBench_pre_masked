
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {struct demangle_component* sub; } ;
struct TYPE_10__ {struct demangle_component* length; } ;
struct TYPE_9__ {struct demangle_component* name; } ;
struct TYPE_8__ {struct demangle_component* name; } ;
struct TYPE_7__ {struct demangle_component* name; } ;
struct TYPE_12__ {TYPE_5__ s_unary_num; TYPE_4__ s_fixed; TYPE_3__ s_extended_operator; TYPE_2__ s_dtor; TYPE_1__ s_ctor; } ;
struct demangle_component {int type; TYPE_6__ u; } ;
 struct demangle_component* FUNC_0 (struct demangle_component const*) ;
 struct demangle_component* FUNC_1 (struct demangle_component const*) ;

__attribute__((used)) static void
FUNC_2 (int *VAR_0, int *VAR_1,
     const struct demangle_component *VAR_2)
{
  if (VAR_2 == ((void*)0))
    return;

  switch (VAR_2->type)
    {
    case 173:
    case 152:
    case 187:
    case 156:
    case 204:
    case 168:
    case 202:
    case 169:
    case 136:
      break;

    case 154:
      (*VAR_0)++;
      goto recurse_left_right;

    case 163:
    case 158:
      if (FUNC_0 (VAR_2)->type == 152)
 (*VAR_1)++;
      goto recurse_left_right;

    case 164:
    case 174:
    case 141:
    case 129:
    case 128:
    case 197:
    case 140:
    case 138:
    case 139:
    case 150:
    case 132:
    case 194:
    case 179:
    case 183:
    case 149:
    case 148:
    case 161:
    case 182:
    case 160:
    case 131:
    case 198:
    case 159:
    case 130:
    case 196:
    case 162:
    case 157:
    case 145:
    case 172:
    case 151:
    case 133:
    case 166:
    case 200:
    case 181:
    case 134:
    case 186:
    case 207:
    case 165:
    case 135:
    case 208:
    case 153:
    case 147:
    case 180:
    case 203:
    case 195:
    case 170:
    case 137:
    case 206:
    case 205:
    case 144:
    case 143:
    case 142:
    case 176:
    case 175:
    case 178:
    case 199:
    case 192:
    case 146:
    case 171:
    case 167:
    case 155:
    case 201:
    recurse_left_right:
      FUNC_2 (VAR_0, VAR_1,
    FUNC_0 (VAR_2));
      FUNC_2 (VAR_0, VAR_1,
    FUNC_1 (VAR_2));
      break;

    case 193:
      FUNC_2 (VAR_0, VAR_1,
    VAR_2->u.s_ctor.name);
      break;

    case 190:
      FUNC_2 (VAR_0, VAR_1,
    VAR_2->u.s_dtor.name);
      break;

    case 189:
      FUNC_2 (VAR_0, VAR_1,
    VAR_2->u.s_extended_operator.name);
      break;

    case 188:
      FUNC_2 (VAR_0, VAR_1,
                                VAR_2->u.s_fixed.length);
      break;

    case 185:
    case 184:
      FUNC_2 (VAR_0, VAR_1,
    FUNC_0 (VAR_2));
      break;

    case 177:
    case 191:
      FUNC_2 (VAR_0, VAR_1,
    VAR_2->u.s_unary_num.sub);
      break;
    }
}
