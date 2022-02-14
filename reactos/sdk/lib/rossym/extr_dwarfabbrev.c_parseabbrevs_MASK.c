
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_12__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_16__ {TYPE_1__ abbrev; } ;
struct TYPE_15__ {int haskids; int nattr; TYPE_3__* attr; scalar_t__ tag; scalar_t__ num; } ;
struct TYPE_14__ {scalar_t__ form; scalar_t__ name; } ;
struct TYPE_13__ {scalar_t__ p; scalar_t__ ep; } ;
typedef TYPE_2__ DwarfBuf ;
typedef TYPE_3__ DwarfAttr ;
typedef TYPE_4__ DwarfAbbrev ;
typedef TYPE_5__ Dwarf ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(Dwarf *VAR_1, ulong VAR_2, DwarfAbbrev *VAR_3, DwarfAttr *VAR_4, int *VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 ulong VAR_11, VAR_12, VAR_13, VAR_14;
 DwarfBuf VAR_15;

 if(VAR_2 >= VAR_1->abbrev.len){
  FUNC_3("bad abbrev section offset 0x%lux >= 0x%lux\n", VAR_2, VAR_1->abbrev.len);
  return -1;
 }

 FUNC_2(&VAR_15, 0, sizeof VAR_15);
 VAR_15.p = VAR_1->abbrev.data + VAR_2;
 VAR_15.ep = VAR_1->abbrev.data + VAR_1->abbrev.len;

 VAR_8 = 0;
 VAR_9 = 0;
 for(;;){
  if(VAR_15.p == VAR_0){
   FUNC_3("malformed abbrev data");
   return -1;
  }
  VAR_11 = FUNC_1(&VAR_15);
  if(VAR_11 == 0)
   break;
  VAR_12 = FUNC_1(&VAR_15);
  VAR_10 = FUNC_0(&VAR_15);
  for(VAR_7=0;; VAR_7++){
   VAR_13 = FUNC_1(&VAR_15);
   VAR_14 = FUNC_1(&VAR_15);
   if(VAR_13 == 0 && VAR_14 == 0)
    break;
   if(VAR_4){
    VAR_4[VAR_7].name = VAR_13;
    VAR_4[VAR_7].form = VAR_14;
   }
  }
  if(VAR_3){
   VAR_3->num = VAR_11;
   VAR_3->tag = VAR_12;
   VAR_3->haskids = VAR_10;
   VAR_3->attr = VAR_4;
   VAR_3->nattr = VAR_7;
   VAR_3++;
   VAR_4 += VAR_7;
  }
  VAR_8++;
  VAR_9 += VAR_7;
 }
 if(VAR_5)
  *VAR_5 = VAR_8;
 if(VAR_6)
  *VAR_6 = VAR_9;
 return 0;
}
