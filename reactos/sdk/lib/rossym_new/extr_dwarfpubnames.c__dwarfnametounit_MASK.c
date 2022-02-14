
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef int uchar ;
struct TYPE_19__ {scalar_t__ data; } ;
struct TYPE_24__ {TYPE_2__ info; } ;
struct TYPE_23__ {int data; int len; } ;
struct TYPE_22__ {int p; int ep; TYPE_7__* d; } ;
struct TYPE_20__ {char* name; } ;
struct TYPE_18__ {scalar_t__ ep; scalar_t__ p; } ;
struct TYPE_21__ {TYPE_3__ attrs; TYPE_1__ b; } ;
typedef TYPE_4__ DwarfSym ;
typedef TYPE_5__ DwarfBuf ;
typedef TYPE_6__ DwarfBlock ;
typedef TYPE_7__ Dwarf ;


 scalar_t__ FUNC_0 (TYPE_7__*,scalar_t__,TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 char* FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_7__*,TYPE_4__*) ;
 char* VAR_0 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(Dwarf *VAR_1, char *VAR_2, DwarfBlock *VAR_3, DwarfSym *VAR_4)
{
 int VAR_5;
 ulong VAR_6, VAR_7, VAR_8;
 uchar *VAR_9;
 char *VAR_10;
 DwarfBuf VAR_11;

 VAR_11.d = VAR_1;
 VAR_11.p = VAR_3->data;
 VAR_11.ep = VAR_11.p + VAR_3->len;

 while(VAR_11.p < VAR_11.ep){
  VAR_6 = FUNC_2(&VAR_11);
  if(VAR_6 > VAR_11.ep-VAR_11.p){
   FUNC_6("bad length in dwarf name header");
   return -1;
  }
  VAR_9 = VAR_11.p + VAR_6;
  VAR_5 = FUNC_1(&VAR_11);
  if(VAR_5 != 1 && VAR_5 != 2){
   FUNC_6("bad version %d in dwarf name header", VAR_5);
   return -1;
  }
  VAR_7 = FUNC_2(&VAR_11);
  FUNC_2(&VAR_11);
  while(VAR_11.p < VAR_9){
   VAR_8 = FUNC_2(&VAR_11);
   if(VAR_8 == 0)
    break;
   VAR_10 = FUNC_3(&VAR_11);
   if(FUNC_5(VAR_10, VAR_2) == 0){
    if(FUNC_0(VAR_1, VAR_7, VAR_4) < 0)
     return -1;
    if(VAR_7 + VAR_8 >= VAR_4->b.ep - VAR_1->info.data){
     FUNC_6("bad offset in name entry");
     return -1;
    }
    VAR_4->b.p = VAR_1->info.data + VAR_7 + VAR_8;
    if(FUNC_4(VAR_1, VAR_4) < 0)
     return -1;
    if(VAR_4->attrs.name==VAR_0 || FUNC_5(VAR_4->attrs.name, VAR_2)!=0){
     FUNC_6("unexpected name %#q in lookup for %#q", VAR_4->attrs.name, VAR_2);
     return -1;
    }
    return 0;
   }
  }
  VAR_11.p = *VAR_9;
 }
 FUNC_6("unknown name '%s'", VAR_2);
 return -1;
}
