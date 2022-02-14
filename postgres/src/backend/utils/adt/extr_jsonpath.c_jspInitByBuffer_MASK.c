
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_13__ {int first; int last; } ;
struct TYPE_12__ {int nelems; int elems; } ;
struct TYPE_11__ {int flags; int expr; int patternlen; char* pattern; } ;
struct TYPE_10__ {int left; int right; } ;
struct TYPE_9__ {int datalen; char* data; } ;
struct TYPE_14__ {int arg; TYPE_5__ anybounds; TYPE_4__ array; TYPE_3__ like_regex; TYPE_2__ args; TYPE_1__ value; } ;
struct TYPE_15__ {char* base; int type; int nextPos; TYPE_6__ content; } ;
typedef TYPE_7__ JsonPathItem ;


 int VAR_0 ;
 int FUNC_0 (uintptr_t) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ,char*,int,int) ;

void
FUNC_5(JsonPathItem *VAR_1, char *VAR_2, int32 VAR_3)
{
 VAR_1->base = VAR_2 + VAR_3;

 FUNC_2(VAR_1->type, VAR_2, VAR_3);
 VAR_3 = FUNC_0((uintptr_t) (VAR_2 + VAR_3)) - (uintptr_t) VAR_2;
 FUNC_3(VAR_1->nextPos, VAR_2, VAR_3);

 switch (VAR_1->type)
 {
  case 138:
  case 134:
  case 161:
  case 165:
  case 164:
  case 129:
  case 133:
  case 169:
  case 154:
  case 162:
  case 158:
  case 148:
  case 147:
   break;
  case 149:
  case 131:
  case 128:
   FUNC_3(VAR_1->content.value.datalen, VAR_2, VAR_3);

  case 137:
  case 163:
   VAR_1->content.value.data = VAR_2 + VAR_3;
   break;
  case 167:
  case 136:
  case 168:
  case 130:
  case 141:
  case 159:
  case 142:
  case 157:
  case 139:
  case 146:
  case 153:
  case 145:
  case 152:
  case 132:
   FUNC_3(VAR_1->content.args.left, VAR_2, VAR_3);
   FUNC_3(VAR_1->content.args.right, VAR_2, VAR_3);
   break;
  case 144:
   FUNC_3(VAR_1->content.like_regex.flags, VAR_2, VAR_3);
   FUNC_3(VAR_1->content.like_regex.expr, VAR_2, VAR_3);
   FUNC_3(VAR_1->content.like_regex.patternlen, VAR_2, VAR_3);
   VAR_1->content.like_regex.pattern = VAR_2 + VAR_3;
   break;
  case 140:
  case 156:
  case 150:
  case 135:
  case 143:
  case 155:
  case 160:
   FUNC_3(VAR_1->content.arg, VAR_2, VAR_3);
   break;
  case 151:
   FUNC_3(VAR_1->content.array.nelems, VAR_2, VAR_3);
   FUNC_4(VAR_1->content.array.elems, VAR_2, VAR_3,
       VAR_1->content.array.nelems * 2);
   break;
  case 166:
   FUNC_3(VAR_1->content.anybounds.first, VAR_2, VAR_3);
   FUNC_3(VAR_1->content.anybounds.last, VAR_2, VAR_3);
   break;
  default:
   FUNC_1(VAR_0, "unrecognized jsonpath item type: %d", VAR_1->type);
 }
}
