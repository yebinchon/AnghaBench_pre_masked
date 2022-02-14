
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int subtype; int name; int def; int num; } ;
struct TYPE_15__ {int * subcmds; int newrelpersistence; int rewrite; void* chgPersistence; } ;
typedef int Relation ;
typedef int List ;
typedef int LOCKMODE ;
typedef TYPE_1__ AlteredTableInfo ;
typedef TYPE_2__ AlterTableCmd ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int **,int ) ;
 int FUNC_2 (int **,int ,int,int,int,TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int **,TYPE_1__*,int ,int,int,TYPE_2__*,int ) ;
 void* FUNC_5 (int ,int) ;
 int FUNC_6 (int **,int ,int,int,TYPE_2__*,int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int **,int ,TYPE_2__*,int,int,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int **,int ,TYPE_2__*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_13 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_2__* FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ,char*,int) ;
 int FUNC_16 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_17(List **VAR_22, Relation VAR_23, AlterTableCmd *VAR_24,
    bool VAR_25, bool VAR_26, LOCKMODE VAR_27)
{
 AlteredTableInfo *VAR_28;
 int VAR_29 = VAR_16;


 VAR_28 = FUNC_1(VAR_22, VAR_23);







 VAR_24 = FUNC_14(VAR_24);





 switch (VAR_24->subtype)
 {
  case 183:
   FUNC_11(VAR_23,
        VAR_5 | VAR_0 | VAR_1);
   FUNC_2(VAR_22, VAR_23, VAR_25, VAR_26, 0, VAR_24,
       VAR_27);

   VAR_29 = VAR_9;
   break;
  case 182:
   FUNC_11(VAR_23, VAR_6);
   FUNC_2(VAR_22, VAR_23, VAR_25, VAR_26, 1, VAR_24,
       VAR_27);

   VAR_29 = VAR_9;
   break;
  case 168:







   FUNC_11(VAR_23, VAR_5 | VAR_6 | VAR_1);
   FUNC_12(VAR_22, VAR_23, VAR_24, VAR_25, VAR_27);

   VAR_29 = VAR_24->def ? VAR_10 : VAR_14;
   break;
  case 180:
   FUNC_11(VAR_23, VAR_5 | VAR_6 | VAR_1);

   VAR_29 = VAR_10;
   break;
  case 137:
   FUNC_11(VAR_23, VAR_5 | VAR_6 | VAR_1);

   VAR_29 = VAR_13;
   break;
  case 158:
   FUNC_11(VAR_23, VAR_5 | VAR_6 | VAR_1);

   VAR_29 = VAR_14;
   break;
  case 156:
   FUNC_11(VAR_23, VAR_5 | VAR_1);
   FUNC_7(VAR_23, VAR_25, VAR_26);
   FUNC_12(VAR_22, VAR_23, VAR_24, VAR_25, VAR_27);
   VAR_29 = VAR_14;
   break;
  case 135:
   FUNC_11(VAR_23, VAR_5 | VAR_1);

   FUNC_8(VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27);
   VAR_29 = VAR_13;
   break;
  case 170:
   FUNC_11(VAR_23, VAR_5 | VAR_1);
   FUNC_12(VAR_22, VAR_23, VAR_24, VAR_25, VAR_27);

   VAR_29 = VAR_13;
   break;
  case 132:
   FUNC_12(VAR_22, VAR_23, VAR_24, VAR_25, VAR_27);

   FUNC_9(VAR_23, VAR_24->name, VAR_24->num, VAR_24->def, VAR_27);
   VAR_29 = VAR_15;
   break;
  case 134:
  case 139:
   FUNC_11(VAR_23, VAR_5 | VAR_3 | VAR_2 | VAR_1);

   VAR_29 = VAR_15;
   break;
  case 131:
   FUNC_11(VAR_23, VAR_5 | VAR_3 | VAR_1);
   FUNC_12(VAR_22, VAR_23, VAR_24, VAR_25, VAR_27);

   VAR_29 = VAR_15;
   break;
  case 160:
   FUNC_11(VAR_23,
        VAR_5 | VAR_0 | VAR_1);
   FUNC_6(VAR_22, VAR_23, VAR_25, VAR_26, VAR_24, VAR_27);

   VAR_29 = VAR_14;
   break;
  case 179:
   FUNC_11(VAR_23, VAR_5);


   VAR_29 = VAR_11;
   break;
  case 181:
   FUNC_11(VAR_23, VAR_5 | VAR_1);


   if (VAR_25)
    VAR_24->subtype = VAR_7;
   VAR_29 = VAR_10;
   break;
  case 178:
   FUNC_11(VAR_23, VAR_5);


   VAR_29 = VAR_10;
   break;
  case 159:
   FUNC_11(VAR_23, VAR_5 | VAR_1);
   FUNC_0(VAR_23, VAR_27);


   if (VAR_25)
    VAR_24->subtype = VAR_8;
   VAR_29 = VAR_14;
   break;
  case 174:
   FUNC_11(VAR_23,
        VAR_5 | VAR_0 | VAR_1);

   FUNC_4(VAR_22, VAR_28, VAR_23, VAR_25, VAR_26, VAR_24, VAR_27);
   VAR_29 = VAR_12;
   break;
  case 175:
   FUNC_11(VAR_23, VAR_1);


   VAR_29 = VAR_15;
   break;
  case 171:


   VAR_29 = VAR_15;
   break;
  case 169:
  case 161:
   FUNC_11(VAR_23, VAR_5 | VAR_3);


   VAR_29 = VAR_15;
   break;
  case 136:
   FUNC_11(VAR_23, VAR_5);
   VAR_28->chgPersistence = FUNC_5(VAR_23, 1);

   if (VAR_28->chgPersistence)
   {
    VAR_28->rewrite |= VAR_17;
    VAR_28->newrelpersistence = VAR_20;
   }
   VAR_29 = VAR_15;
   break;
  case 129:
   FUNC_11(VAR_23, VAR_5);
   VAR_28->chgPersistence = FUNC_5(VAR_23, 0);

   if (VAR_28->chgPersistence)
   {
    VAR_28->rewrite |= VAR_17;
    VAR_28->newrelpersistence = VAR_21;
   }
   VAR_29 = VAR_15;
   break;
  case 154:
   FUNC_11(VAR_23, VAR_5 | VAR_1);
   VAR_29 = VAR_14;
   break;
  case 130:
   FUNC_11(VAR_23, VAR_5 | VAR_3 | VAR_2 |
        VAR_4);

   FUNC_10(VAR_28, VAR_23, VAR_24->name, VAR_27);
   VAR_29 = VAR_15;
   break;
  case 133:
  case 138:
  case 141:
   FUNC_11(VAR_23, VAR_5 | VAR_6 | VAR_3 | VAR_2);


   VAR_29 = VAR_15;
   break;
  case 177:
   FUNC_11(VAR_23, VAR_5 | VAR_1);

   FUNC_3(VAR_23);
   VAR_29 = VAR_15;
   break;
  case 157:
   FUNC_11(VAR_23, VAR_5 | VAR_1);


   VAR_29 = VAR_15;
   break;
  case 173:
   FUNC_11(VAR_23, VAR_5);
   VAR_29 = VAR_15;
   break;
  case 128:
   FUNC_11(VAR_23, VAR_5 | VAR_1);


   if (VAR_25)
    VAR_24->subtype = VAR_18;
   VAR_29 = VAR_15;
   break;
  case 140:
   FUNC_11(VAR_23, VAR_5 | VAR_3);
   VAR_29 = VAR_15;


   break;
  case 147:
  case 152:
  case 150:
  case 146:
  case 145:
  case 164:
  case 163:
  case 162:
   FUNC_11(VAR_23, VAR_5 | VAR_1);
   VAR_29 = VAR_15;
   break;
  case 148:
  case 153:
  case 151:
  case 165:
  case 176:
  case 155:
  case 149:
  case 166:
  case 144:
  case 142:
   FUNC_11(VAR_23, VAR_5);


   VAR_29 = VAR_15;
   break;
  case 143:
   FUNC_11(VAR_23, VAR_1);

   VAR_29 = VAR_15;
   break;
  case 172:
   FUNC_11(VAR_23, VAR_5 | VAR_4);

   VAR_29 = VAR_15;
   break;
  case 167:
   FUNC_11(VAR_23, VAR_5);

   VAR_29 = VAR_15;
   break;
  default:
   FUNC_15(VAR_19, "unrecognized alter table type: %d",
     (int) VAR_24->subtype);
   VAR_29 = VAR_16;
   break;
 }
 FUNC_13(VAR_29 > VAR_16);


 VAR_28->subcmds[VAR_29] = FUNC_16(VAR_28->subcmds[VAR_29], VAR_24);
}
