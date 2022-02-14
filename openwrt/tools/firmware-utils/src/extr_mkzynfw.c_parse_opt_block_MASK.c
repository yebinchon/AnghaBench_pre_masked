
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_block {int padc; scalar_t__ type; int align; int * file_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct fw_block* VAR_5 ;
 struct fw_block* VAR_6 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*,char*,char**) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 int * FUNC_4 (char*) ;

int
FUNC_5(char VAR_8, char *VAR_9)
{
 char VAR_10[VAR_3];
 char *VAR_11[VAR_2];
 int VAR_12;
 char *VAR_13;
 struct fw_block *VAR_14;
 int VAR_15;

 if ( VAR_7 >= VAR_4 ) {
  FUNC_0("too many blocks specified");
  return -1;
 }

 VAR_14 = &VAR_5[VAR_7++];


 VAR_14->padc = 0xFF;

 switch(VAR_8) {
 case 'b':
  if (VAR_6) {
   FUNC_0("only one boot extension block allowed");
   break;
  }
  VAR_14->type = VAR_0;
  VAR_6 = VAR_14;
  break;
 case 'r':
  VAR_14->type = VAR_1;
  break;
 }

 VAR_12 = FUNC_2(VAR_9, VAR_10, VAR_11);

 VAR_15 = 0;
 VAR_13 = VAR_11[VAR_15++];
 if (FUNC_1(VAR_13)) {
  FUNC_0("no file specified in %s", VAR_9);
  return -1;
 } else {
  VAR_14->file_name = FUNC_4(VAR_13);
  if (VAR_14->file_name == ((void*)0)) {
   FUNC_0("not enough memory");
   return -1;
  }
 }

 if (VAR_14->type == VAR_0)
  return 0;

 VAR_13 = VAR_11[VAR_15++];
 if (!FUNC_1(VAR_13)) {
  if (FUNC_3(VAR_13, &VAR_14->align) != 0) {
   FUNC_0("invalid block align in %s", VAR_9);
   return -1;
  }
 }

 return 0;
}
