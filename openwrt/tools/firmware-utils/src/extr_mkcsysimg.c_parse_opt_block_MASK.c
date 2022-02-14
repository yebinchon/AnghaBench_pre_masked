
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csys_header {int dummy; } ;
struct csys_block {int need_file; int padc; int size_hdr; int addr_set; int align_set; int align; int addr; int * file_name; int type; int size_csum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int FUNC_1 (char*) ;
 struct csys_block* VAR_11 ;
 struct csys_block* VAR_12 ;
 struct csys_block* VAR_13 ;
 struct csys_block* VAR_14 ;
 int FUNC_2 (char*) ;
 size_t VAR_15 ;
 int FUNC_3 (char*,char*,char**) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 scalar_t__ FUNC_5 (char*,int*) ;
 int * FUNC_6 (char*) ;
 struct csys_block* VAR_16 ;

int
FUNC_7(char VAR_17, char *VAR_18)
{
 char VAR_19[VAR_9];
 char *VAR_20[VAR_8];
 int VAR_21;
 char *VAR_22;
 struct csys_block *VAR_23;
 int VAR_24;

 if ( VAR_15 > VAR_10 ) {
  FUNC_0("too many blocks specified");
  return VAR_7;
 }

 VAR_23 = &VAR_11[VAR_15];


 VAR_23->need_file = 1;
 VAR_23->padc = 0xFF;

 switch (VAR_17) {
 case 'b':
  if (VAR_12) {
   FUNC_1("only one boot block allowed");
   break;
  }
  VAR_23->type = VAR_0;
  VAR_12 = VAR_23;
  break;
 case 'c':
  if (VAR_14) {
   FUNC_1("only one config block allowed");
   break;
  }
  VAR_23->type = VAR_2;
  VAR_14 = VAR_23;
  break;
 case 'w':
  if (VAR_16) {
   FUNC_1("only one web block allowed");
   break;
  }
  VAR_23->type = VAR_3;
  VAR_23->size_hdr = sizeof(struct csys_header);
  VAR_23->size_csum = VAR_6;
  VAR_23->need_file = 0;
  VAR_16 = VAR_23;
  break;
 case 'r':
  if (VAR_13) {
   FUNC_1("only one runtime block allowed");
   break;
  }
  VAR_23->type = VAR_1;
  VAR_23->size_hdr = sizeof(struct csys_header);
  VAR_23->size_csum = VAR_5;
  VAR_13 = VAR_23;
  break;
 case 'x':
  VAR_23->type = VAR_4;
  break;
 default:
  FUNC_0("unknown block type \"%c\"", VAR_17);
  return VAR_7;
 }

 VAR_21 = FUNC_3(VAR_18, VAR_19, VAR_20);

 VAR_24 = 0;
 VAR_22 = VAR_20[VAR_24++];
 if (!FUNC_2(VAR_22)) {
  VAR_23->file_name = FUNC_6(VAR_22);
  if (VAR_23->file_name == ((void*)0)) {
   FUNC_0("not enough memory");
   return VAR_7;
  }
 } else if (VAR_23->need_file){
  FUNC_0("no file specified in %s", VAR_18);
  return VAR_7;
 }

 if (VAR_23->size_hdr) {
  VAR_22 = VAR_20[VAR_24++];
  if (!FUNC_2(VAR_22)) {
   if (FUNC_4(VAR_22, &VAR_23->addr) != 0) {
    FUNC_0("invalid start address in %s", VAR_18);
    return VAR_7;
   }
   VAR_23->addr_set = 1;
  }
 }

 VAR_22 = VAR_20[VAR_24++];
 if (!FUNC_2(VAR_22)) {
  if (FUNC_4(VAR_22, &VAR_23->align) != 0) {
   FUNC_0("invalid alignment value in %s", VAR_18);
   return VAR_7;
  }
  VAR_23->align_set = 1;
 }

 VAR_22 = VAR_20[VAR_24++];
 if (!FUNC_2(VAR_22) && (FUNC_5(VAR_22, &VAR_23->padc) != 0)) {
  FUNC_0("invalid paddig character in %s", VAR_18);
  return VAR_7;
 }

 VAR_15++;

 return 0;
}
