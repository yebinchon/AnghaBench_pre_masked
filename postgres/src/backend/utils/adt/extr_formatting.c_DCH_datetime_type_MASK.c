
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; TYPE_1__* key; } ;
struct TYPE_4__ {int id; int name; } ;
typedef TYPE_2__ FormatNode ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(FormatNode *VAR_7, bool *VAR_8)
{
 FormatNode *VAR_9;
 int VAR_10 = 0;

 for (VAR_9 = VAR_7; VAR_9->type != VAR_6; VAR_9++)
 {
  if (VAR_9->type != VAR_5)
   continue;

  switch (VAR_9->key->id)
  {
   case 177:
    break;
   case 194:
   case 157:
   case 140:
   case 131:
   case 196:
   case 158:
   case 138:
   case 130:
   case 176:
   case 175:
   case 174:
   case 166:
   case 154:
   case 162:
   case 149:
   case 183:
   case 182:
   case 181:
   case 180:
   case 179:
   case 178:
   case 153:
    VAR_10 |= VAR_1;
    break;
   case 128:
   case 152:
   case 159:
    FUNC_0(FUNC_1(VAR_4,
          (FUNC_2(VAR_3),
           FUNC_3("formatting field \"%s\" is only supported in to_char",
            VAR_9->key->name))));
    VAR_10 |= VAR_2;
    break;
   case 151:
   case 150:
    VAR_10 |= VAR_2;
    break;
   case 195:
   case 192:
   case 141:
   case 137:
   case 197:
   case 193:
   case 139:
   case 136:
   case 163:
   case 160:
   case 132:
   case 164:
   case 161:
   case 133:
   case 165:
   case 189:
   case 185:
   case 135:
   case 186:
   case 184:
   case 134:
   case 187:
   case 171:
   case 188:
   case 190:
   case 172:
   case 147:
   case 156:
   case 191:
   case 142:
   case 143:
   case 168:
   case 144:
   case 169:
   case 145:
   case 170:
   case 146:
   case 173:
   case 155:
   case 129:
   case 148:
   case 167:
    VAR_10 |= VAR_0;
    break;
  }
 }

on_error:
 return VAR_10;
}
