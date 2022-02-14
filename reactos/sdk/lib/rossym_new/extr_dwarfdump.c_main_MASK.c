
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_10__ {int lowpc; int ranges; int location; } ;
struct TYPE_8__ {int data; int len; } ;
struct TYPE_9__ {int c; TYPE_1__ b; } ;
struct TYPE_11__ {int tag; int lowpc; int highpc; TYPE_3__ have; int ranges; TYPE_2__ location; int name; int isexternal; } ;
struct TYPE_12__ {TYPE_4__ attrs; } ;
typedef char Pe ;
typedef TYPE_5__ DwarfSym ;
typedef char Dwarf ;
 scalar_t__ FUNC_0 (char*,TYPE_5__*) ;
 int FUNC_1 (char*,TYPE_5__*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char**,char**,char**,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (char,int ) ;
 char* VAR_2 ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 () ;

int
FUNC_11(int VAR_3, char **VAR_4)
{
 int VAR_5;
 Pe *VAR_6;
 Dwarf *VAR_7;
 DwarfSym VAR_8;
 char *VAR_9, *VAR_10, *VAR_11;
 ulong VAR_12, VAR_13, VAR_14;

 if(VAR_3 != 2)
  FUNC_10();






 if((VAR_6 = FUNC_6(VAR_4[1])) == VAR_2)
  FUNC_9("elfopen %s: %r", VAR_4[1]);
 if((VAR_7=FUNC_2(VAR_6)) == VAR_2)
  FUNC_9("dwarfopen: %r");

 if(FUNC_0(VAR_7, &VAR_8) < 0)
  FUNC_9("dwarfenumall: %r");

 while(FUNC_1(VAR_7, &VAR_8) == 1){
  switch(VAR_8.attrs.tag){
  case 132:
   FUNC_7("compileunit %s\n", VAR_8.attrs.name);
   break;
  case 129:
   VAR_5 = 't';
   goto sym;
  case 128:
   VAR_5 = 'd';
   goto sym;
  case 131:
   VAR_5 = 'c';
   goto sym;
  case 130:
   if(!VAR_8.attrs.name)
    break;
   VAR_5 = 'p';
  sym:
   if(VAR_8.attrs.isexternal)
    VAR_5 += 'A' - 'a';
   FUNC_7("%c %s", VAR_5, VAR_8.attrs.name);
   if(VAR_8.attrs.have.lowpc)
    FUNC_7(" 0x%lux-0x%lux", VAR_8.attrs.lowpc, VAR_8.attrs.highpc);
   switch(VAR_8.attrs.have.location){
   case 134:
    FUNC_7(" @ %.*H", VAR_8.attrs.location.b.len, VAR_8.attrs.location.b.data);
    break;
   case 133:
    FUNC_7(" @ 0x%lux", VAR_8.attrs.location.c);
    break;
   }
   if(VAR_8.attrs.have.ranges)
    FUNC_7(" ranges@0x%lux", VAR_8.attrs.ranges);
   FUNC_7("\n");
   if(VAR_8.attrs.have.lowpc){
    if(FUNC_3(VAR_7, VAR_8.attrs.lowpc, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13, &VAR_14) < 0)
     FUNC_7("\tcould not find source: %r\n");
    else if(VAR_10 == VAR_2)
     FUNC_7("\t%s/%s:%lud mtime=%lud length=%lud\n",
      VAR_9, VAR_11, VAR_12, VAR_13, VAR_14);
    else
     FUNC_7("\t%s/%s/%s:%lud mtime=%lud length=%lud\n",
      VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

    if(0) FUNC_8(VAR_7, VAR_8.attrs.lowpc);
    if(0) FUNC_8(VAR_7, (VAR_8.attrs.lowpc+VAR_8.attrs.highpc)/2);
   }
   break;
  }
 }
 FUNC_4(0);
}
