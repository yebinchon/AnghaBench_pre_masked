
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct demangle_component* right; struct demangle_component* left; } ;
struct TYPE_4__ {TYPE_1__ s_binary; } ;
struct demangle_component {int type; TYPE_2__ u; } ;
struct d_info {int dummy; } ;
typedef enum demangle_component_type { ____Placeholder_demangle_component_type } demangle_component_type ;
 struct demangle_component* FUNC_0 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_1 (struct d_info *VAR_0, enum demangle_component_type VAR_1,
             struct demangle_component *VAR_2,
             struct demangle_component *VAR_3)
{
  struct demangle_component *VAR_4;




  switch (VAR_1)
    {

    case 155:
    case 161:
    case 139:
    case 150:
    case 149:
    case 176:
    case 132:
    case 156:
    case 135:
    case 183:
    case 182:
    case 142:
    case 141:
    case 163:
    case 162:
    case 178:
    case 134:
    case 180:
      if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 return ((void*)0);
      break;


    case 129:
    case 128:
    case 138:
    case 136:
    case 137:
    case 147:
    case 131:
    case 174:
    case 165:
    case 169:
    case 146:
    case 145:
    case 153:
    case 168:
    case 143:
    case 160:
    case 157:
    case 154:
    case 151:
    case 179:
    case 167:
    case 133:
    case 181:
    case 175:
    case 164:
    case 173:
    case 158:
    case 171:
    case 170:
    case 159:
    case 140:
    case 144:
      if (VAR_2 == ((void*)0))
 return ((void*)0);
      break;



    case 184:
    case 166:
      if (VAR_3 == ((void*)0))
 return ((void*)0);
      break;



    case 172:
    case 152:
    case 130:
    case 177:
    case 185:
    case 148:
    FNQUAL_COMPONENT_CASE:
      break;


    default:
      return ((void*)0);
    }

  VAR_4 = FUNC_0 (VAR_0);
  if (VAR_4 != ((void*)0))
    {
      VAR_4->type = VAR_1;
      VAR_4->u.s_binary.left = VAR_2;
      VAR_4->u.s_binary.right = VAR_3;
    }
  return VAR_4;
}
