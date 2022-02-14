
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
struct mylo_partition_header {void* len; void* crc; } ;
struct fw_block {int flags; size_t crc; size_t size; int * name; } ;
typedef int ph ;
typedef int buff ;
typedef int FILE ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int,char*,int *) ;
 int FUNC_3 (int,char*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,size_t,int,int *) ;
 scalar_t__ FUNC_7 (struct fw_block*) ;
 scalar_t__ FUNC_8 (int *,char*,size_t,int *) ;
 scalar_t__ FUNC_9 (int *,size_t,int,int *) ;

int
FUNC_10(FILE *VAR_3, struct fw_block *VAR_4, uint32_t *VAR_5)
{
 char VAR_6[VAR_1];
 size_t VAR_7 = sizeof(VAR_6);
 FILE *VAR_8;
 size_t VAR_9;

 VAR_2 = 0;

 if (VAR_4->name == ((void*)0)) {
  return 0;
 }

 if ((VAR_4->flags & VAR_0) != 0) {
  struct mylo_partition_header VAR_10;

  if (FUNC_7(VAR_4) != 0)
          return -1;

  VAR_10.crc = FUNC_1(VAR_4->crc);
  VAR_10.len = FUNC_1(VAR_4->size);

  if (FUNC_8(VAR_3, (uint8_t *)&VAR_10, sizeof(VAR_10), VAR_5) != 0)
   return -1;
 }

 VAR_8 = FUNC_5(VAR_4->name,"r");
 if (VAR_2) {
  FUNC_3(1,"unable to open file: %s", VAR_4->name);
  return -1;
 }

 VAR_9 = VAR_4->size;
 while (VAR_9 > 0) {
  if (VAR_9 < VAR_7)
   VAR_7 = VAR_9;


  VAR_2 = 0;
  FUNC_6(VAR_6, VAR_7, 1, VAR_8);
  if (VAR_2 != 0) {
   FUNC_3(1,"unable to read from file: %s",VAR_4->name);
   return -1;
  }

  if (FUNC_8(VAR_3, VAR_6, VAR_7, VAR_5) != 0)
   return -1;

  VAR_9 -= VAR_7;
 }

 FUNC_4(VAR_8);


 VAR_9 = FUNC_0(VAR_9,4) - VAR_4->size;
 if (FUNC_9(VAR_3, VAR_9, 0xFF, VAR_5))
  return -1;

 FUNC_2(1,"file %s written out", VAR_4->name);
 return 0;
}
