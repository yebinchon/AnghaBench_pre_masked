
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int separate; } ;
struct TYPE_8__ {int objType; int dumpId; } ;
struct TYPE_7__ {int separate; } ;
typedef TYPE_1__ RuleInfo ;
typedef TYPE_2__ DumpableObject ;
typedef TYPE_3__ ConstraintInfo ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_1(DumpableObject **VAR_0, int VAR_1,
      DumpableObject *VAR_2)
{
 DumpableObject *VAR_3 = VAR_2 + 0;
 DumpableObject *VAR_4 = VAR_2 + 1;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 {
  DumpableObject *VAR_6 = VAR_0[VAR_5];





  switch (VAR_6->objType)
  {
   case 152:
   case 159:
   case 128:
   case 139:
   case 155:
   case 170:
   case 150:
   case 171:
   case 151:
   case 149:
   case 165:
   case 163:
   case 136:
   case 169:
   case 145:
   case 166:
   case 161:
   case 130:
   case 131:
   case 129:
   case 132:
   case 158:
   case 156:
   case 134:
   case 168:

    FUNC_0(VAR_3, VAR_6->dumpId);
    break;
   case 135:
   case 140:
   case 167:

    FUNC_0(VAR_6, VAR_3->dumpId);
    FUNC_0(VAR_4, VAR_6->dumpId);
    break;
   case 154:
   case 153:
   case 138:
   case 142:
   case 133:
   case 160:
   case 162:
   case 148:
   case 144:
   case 143:
   case 137:

    FUNC_0(VAR_6, VAR_4->dumpId);
    break;
   case 141:

    if (((RuleInfo *) VAR_6)->separate)
     FUNC_0(VAR_6, VAR_4->dumpId);
    break;
   case 164:
   case 157:

    if (((ConstraintInfo *) VAR_6)->separate)
     FUNC_0(VAR_6, VAR_4->dumpId);
    break;
   case 146:

    break;
   case 147:

    FUNC_0(VAR_6, VAR_3->dumpId);
    break;
  }
 }
}
