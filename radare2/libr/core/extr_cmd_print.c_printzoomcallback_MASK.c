
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct count_pz_t {int addr; int* ret; int size; int flagspace; } ;
struct TYPE_12__ {int bbs; } ;
struct TYPE_11__ {int flags; int anal; } ;
struct TYPE_10__ {TYPE_1__* block; } ;
struct TYPE_9__ {int functions; int in_functions; int comments; int symbols; int flags; int strings; int blocks; } ;
typedef TYPE_2__ RCoreAnalStats ;
typedef TYPE_3__ RCore ;
typedef TYPE_4__ RAnalFunction ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (int ,int,int ) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int,int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,struct count_pz_t*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_3, int VAR_4, ut64 VAR_5, ut8 *VAR_6, ut64 VAR_7) {
 RCore *VAR_8 = (RCore *) VAR_3;
 int VAR_9, VAR_10 = 0;
 struct count_pz_t VAR_11;

 switch (VAR_4) {
 case 'a':
  {
  RAnalFunction *VAR_12 = FUNC_1 (VAR_8->anal, VAR_5, 0);
  int VAR_13 = 0;
  if (VAR_12) {
   VAR_13 = FUNC_7 (VAR_12->bbs);
  }
  return VAR_13;
  }
  break;
 case 'A':
  {
  RCoreAnalStats *VAR_14 = FUNC_2 (VAR_8, VAR_5, VAR_5 + VAR_7 * 2, VAR_7);
  int VAR_15;
  int VAR_16 = 0;
  for (VAR_15 = 0; VAR_15 < 1; VAR_15++) {
   VAR_16 += VAR_14->block[VAR_15].functions;
   VAR_16 += VAR_14->block[VAR_15].in_functions;
   VAR_16 += VAR_14->block[VAR_15].comments;
   VAR_16 += VAR_14->block[VAR_15].symbols;
   VAR_16 += VAR_14->block[VAR_15].flags;
   VAR_16 += VAR_14->block[VAR_15].strings;
   VAR_16 += VAR_14->block[VAR_15].blocks;
   VAR_16 *= 20;
  }
  FUNC_3 (VAR_14);
  return VAR_16;
  }
  break;
 case '0':
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   if (VAR_6[VAR_9] == 0) {
    VAR_10++;
   }
  }
  break;
 case 'e':
  VAR_10 = (ut8) (FUNC_6 (VAR_6, VAR_7) * 255);
  break;
 case 'f':
  VAR_11.addr = VAR_5;
  VAR_11.ret = &VAR_10;
  FUNC_4 (VAR_8->flags, VAR_1, &VAR_11);
  break;
 case 'F':
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   if (VAR_6[VAR_9] == 0xff) {
    VAR_10++;
   }
  }
  break;
 case 'p':
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   if (FUNC_0 (VAR_6[VAR_9])) {
    VAR_10++;
   }
  }
  break;
 case 's':
  VAR_11.flagspace = FUNC_5 (VAR_8->flags, VAR_0);
  VAR_11.addr = VAR_5;
  VAR_11.size = VAR_7;
  VAR_11.ret = &VAR_10;
  FUNC_4 (VAR_8->flags, VAR_2, &VAR_11);
  break;
 case 'h':
 default:
  VAR_10 = *VAR_6;
 }
 return VAR_10;
}
