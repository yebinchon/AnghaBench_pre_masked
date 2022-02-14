
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ut8 ;
typedef int ut32 ;
typedef int ut16 ;
typedef int instr ;
struct TYPE_5__ {int opmin; int opmax; char const* name; int optype; } ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ RAsmOp ;
 int* VAR_0 ;
 int FUNC_0 (int*,size_t const*,int) ;
 TYPE_3__* VAR_1 ;
 char* FUNC_1 (char*,char*,int,...) ;
 int FUNC_2 (char*,char const*) ;

int FUNC_3(RAsmOp *VAR_2, char *VAR_3, const ut8 *VAR_4, int VAR_5) {
 int VAR_6;
 if (VAR_5 < 2) {
  FUNC_2 (VAR_3, "invalid");
  VAR_2->size = VAR_5;
  return -1;
 }
 ut16 VAR_7 = 0 ;
 FUNC_0 (&VAR_7, VAR_4, sizeof (VAR_7));

 const char *VAR_8 = "invalid";
 FUNC_2 (VAR_3, VAR_8);

 for (VAR_6 = 0; VAR_1[VAR_6].opmin != (VAR_1[VAR_6].opmin & VAR_7) || VAR_1[VAR_6].opmax != (VAR_1[VAR_6].opmax | VAR_7); VAR_6++) {
  ;
 }
 if (VAR_1[VAR_6].opmin == 0 && VAR_1[VAR_6].opmax == 0xffff) {
  FUNC_2 (VAR_3, VAR_1[VAR_6].name);
  VAR_2->size = 2;
  return -1;
 }
 VAR_2->size = 2;
 switch (VAR_1[VAR_6].optype) {
 case 131:
  VAR_8 = VAR_1[VAR_6].name;
  break;
 case 130:
 case 134:
  VAR_8 = FUNC_1 ("%s 0x%x", VAR_1[VAR_6].name, VAR_7 & 0xff);
  break;
 case 137:
  VAR_8 = FUNC_1 ("%s 0x%x, %d, %d", VAR_1[VAR_6].name, VAR_7 & 0xff, (VAR_7 >> 9) & 1, (VAR_7 >> 8) & 1);
  break;
 case 140:
  VAR_8 = FUNC_1 ("%s 0x%x, %d", VAR_1[VAR_6].name, VAR_7 & 0xff, (VAR_7 >> 8) & 1);
  break;
 case 139:
  VAR_8 = FUNC_1 ("%s 0x%x, %d, %d", VAR_1[VAR_6].name, VAR_7 & 0xff, (VAR_7 >> 9) & 0x7, (VAR_7 >> 8) & 0x1);
  break;
 case 132:
  VAR_8 = FUNC_1 ("%s 0x%x", VAR_1[VAR_6].name, VAR_7 & 0x7ff);
  break;
 case 138:
  if (VAR_5 < 4) {
   return -1;
  }
  VAR_2->size = 4;
  {
  ut32 VAR_9 = *(ut32 *)VAR_4;


  if (VAR_9 >> 28 != 0xf) {
   return -1;
  }
  VAR_8 = FUNC_1 ("%s 0x%x, %d", VAR_1[VAR_6].name,
     (VAR_9 & 0xff) | (VAR_9 >> 8 & 0xfff00), (VAR_9 >> 8) & 0x1);
  }
  break;
 case 135:
  if (VAR_5 < 4) {
   return -1;
  }
  {
  VAR_2->size = 4;
  ut32 VAR_10 = *(ut32 *)VAR_4;
  if (VAR_10 >> 28 != 0xf) {
   return -1;
  }
  VAR_8 = FUNC_1 ("%s 0x%x", VAR_1[VAR_6].name,
     ((VAR_10 & 0xff) | ((VAR_10 & 0xfff0000) >>8) )*2);
  }
  break;
 case 136:
  if (VAR_5 < 4) {
   return -1;
  }
  VAR_2->size = 4;
  {
  ut32 VAR_11 = *(ut32 *)VAR_4;
  if (VAR_11 >> 28 != 0xf) {
   return -1;
  }
  VAR_8 = FUNC_1 ("%s 0x%x, 0x%x", VAR_1[VAR_6].name,
     VAR_11 & 0xfff, (VAR_11 >> 16) & 0xfff);
  }
  break;
 case 129:
  VAR_8 = FUNC_1 ("%s 0x%x", VAR_1[VAR_6].name, VAR_7 & 0xf);
  break;
 case 128:
  VAR_8 = FUNC_1 ("%s %d", VAR_1[VAR_6].name, VAR_7 & 0x1);
  break;
 case 133: {
  VAR_2->size = 4;
  ut32 VAR_12 = *(ut32 *)VAR_4;
  if (VAR_12 >> 28 != 0xf) {
   return -1;
  }
  ut8 VAR_13 = (VAR_12 >> 4) & 0x3;
  VAR_8 = FUNC_1 ("%s %s, %d", VAR_1[VAR_6].name, VAR_0[VAR_13],
   (VAR_12 & 0xf) << 8 | ((VAR_12 >> 16) & 0xff));
  break;
 }
 default:
  VAR_8 = "unknown args";
 };
 FUNC_2 (VAR_3, VAR_8);
 return VAR_2->size;
}
