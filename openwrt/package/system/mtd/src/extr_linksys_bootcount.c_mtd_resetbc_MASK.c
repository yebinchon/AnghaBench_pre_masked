
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info_user {unsigned int writesize; unsigned int size; unsigned int length; scalar_t__ start; } ;
struct erase_info_user {unsigned int writesize; unsigned int size; unsigned int length; scalar_t__ start; } ;
struct bootcounter {void* magic; int count; void* checksum; } ;


 unsigned int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int,int ,struct mtd_info_user*) ;
 int FUNC_6 (struct bootcounter*,int,unsigned int) ;
 int FUNC_7 (char const*) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int,struct bootcounter*,int,unsigned int) ;
 int FUNC_9 (int,struct bootcounter*,unsigned int,unsigned int) ;
 int FUNC_10 () ;

int FUNC_11(const char *VAR_6)
{
 struct mtd_info_user VAR_7;
 struct bootcounter *VAR_8 = (struct bootcounter *)VAR_5;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 FUNC_3();

 VAR_13 = FUNC_7(VAR_6);

 if (FUNC_5(VAR_13, VAR_3, &VAR_7) < 0) {
  FUNC_1("Unable to obtain mtd_info for given partition name.");

  VAR_15 = -1;
  goto out;
 }




 if (VAR_7.writesize < VAR_0) {

  VAR_10 = VAR_0;
  FUNC_0("Offset increment set to %i for writesize of %i",
      VAR_10, VAR_7.writesize);
 } else {

  VAR_10 = VAR_7.writesize;
 }

 VAR_12 = VAR_7.size / VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
  FUNC_8(VAR_13, VAR_8, sizeof(*VAR_8), VAR_9 * VAR_10);



  if (VAR_8->magic != VAR_1 &&
      VAR_8->magic != 0xffffffff) {
   FUNC_1("Unexpected magic %08x at offset %08x; aborting.",
     VAR_8->magic, VAR_9 * VAR_10);

   VAR_15 = -2;
   goto out;
  }

  if (VAR_8->magic == 0xffffffff)
   break;

  VAR_11 = VAR_8->count;
 }


 if (VAR_11 == 0) {

  VAR_15 = 0;
  goto out;
 }


 if (VAR_9 == VAR_12) {
  FUNC_2("Boot-count log full with %i entries; erasing (expected occasionally).",
       VAR_9);

  struct erase_info_user VAR_16;
  VAR_16.start = 0;
  VAR_16.length = VAR_7.size;

  VAR_14 = FUNC_5(VAR_13, VAR_2, &VAR_16);
  if (VAR_14 < 0) {
   FUNC_1("Failed to erase boot-count log MTD; ioctl() MEMERASE returned %i",
     VAR_14);

   VAR_15 = -3;
   goto out;
  }

  VAR_9 = 0;
 }

 FUNC_6(VAR_8, 0xff, VAR_10);

 VAR_8->magic = VAR_1;
 VAR_8->count = 0;
 VAR_8->checksum = VAR_1;



 VAR_14 = FUNC_9(VAR_13, VAR_8, VAR_10, VAR_9 * VAR_10);
 if (VAR_14 < 0) {
  FUNC_1("Failed to write boot-count log entry; pwrite() returned %i",
    VAR_4);
  VAR_15 = -4;
  goto out;

 } else {
  FUNC_10();

  FUNC_2("Boot count sucessfully reset to zero.");

  VAR_15 = 0;
  goto out;
 }

out:
 FUNC_4(VAR_13);
 return VAR_15;
}
