
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int ulong ;
typedef int uchar ;
struct TYPE_21__ {size_t name; int off; int type; int haveoff; } ;
struct TYPE_20__ {int nattr; TYPE_1__* attr; int haskids; int tag; } ;
struct TYPE_19__ {int haskids; int tag; } ;
struct TYPE_18__ {int d; } ;
struct TYPE_17__ {int name; int form; } ;
typedef TYPE_2__ DwarfBuf ;
typedef TYPE_3__ DwarfAttrs ;
typedef TYPE_4__ DwarfAbbrev ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,void*,void*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,void*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,void*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,void*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int,int ,void*,int*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 TYPE_6__* VAR_9 ;
 TYPE_6__* VAR_10 ;
 scalar_t__ FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int
FUNC_9(DwarfBuf *VAR_11, ulong VAR_12, DwarfAbbrev *VAR_13, DwarfAttrs *VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18;
 static int VAR_19;
 void *VAR_20;


 if(VAR_10[VAR_1].name != VAR_1)
  for(VAR_15=0; VAR_9[VAR_15].name; VAR_15++)
   VAR_10[VAR_9[VAR_15].name] = VAR_9[VAR_15];

 FUNC_6(VAR_14, 0, sizeof *VAR_14);
 VAR_14->tag = VAR_13->tag;
 VAR_14->haskids = VAR_13->haskids;

 for(VAR_15=0; VAR_15<VAR_13->nattr; VAR_15++){
  VAR_17 = VAR_13->attr[VAR_15].name;
  VAR_16 = VAR_13->attr[VAR_15].form;
  if(VAR_17 < 0 || VAR_17 >= VAR_0 || VAR_10[VAR_17].name==0){
   if(++VAR_19 == 1)
    FUNC_8("dwarf parse attrs: unexpected attribute name 0x%x", VAR_17);
   continue;
  }
  VAR_20 = (char*)VAR_14 + VAR_10[VAR_17].off;
  VAR_18 = 0;
  if(VAR_16 == VAR_2)
   VAR_16 = FUNC_1(VAR_11);
  if((VAR_10[VAR_17].type&(VAR_5|VAR_7|VAR_3))
  && FUNC_5(VAR_11, VAR_16, VAR_12, VAR_20, &VAR_18) >= 0)
   ;
  else if((VAR_10[VAR_17].type&VAR_6) && FUNC_4(VAR_11, VAR_16, VAR_20) >= 0)
   VAR_18 = VAR_6;
  else if((VAR_10[VAR_17].type&VAR_8) && FUNC_3(VAR_11, VAR_16, VAR_20) >= 0)
   VAR_18 = VAR_8;
  else if((VAR_10[VAR_17].type&VAR_4) && FUNC_2(VAR_11, VAR_16, VAR_20) >= 0)
   VAR_18 = VAR_4;
  else{
   if(FUNC_7(VAR_11, VAR_16) < 0){
    if(++VAR_19 == 1)
     FUNC_8("dwarf parse attrs: cannot skip form %d", VAR_16);
    return -1;
   }
  }
  if(VAR_18 == VAR_4 && (VAR_10[VAR_17].type&VAR_5))
   VAR_18 = FUNC_0(VAR_11->d, VAR_20, VAR_20);
  *((uchar*)VAR_14+VAR_10[VAR_17].haveoff) = VAR_18;
 }
 return 0;
}
