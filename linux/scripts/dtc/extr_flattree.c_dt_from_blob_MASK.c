
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int totalsize_buf ;
typedef int totalsize ;
struct reserve_info {int dummy; } ;
struct node {int dummy; } ;
struct inbuf {int dummy; } ;
struct fdt_header {char off_dt_struct; char off_dt_strings; char off_mem_rsvmap; char version; char boot_cpuid_phys; char size_dt_strings; char size_dt_struct; void* totalsize; void* magic; } ;
struct dt_info {int dummy; } ;
typedef int magic_buf ;
typedef int magic ;
typedef char fdt32_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct dt_info* FUNC_0 (int ,struct reserve_info*,struct node*,scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 struct reserve_info* FUNC_7 (struct inbuf*) ;
 scalar_t__ FUNC_8 (struct inbuf*) ;
 int FUNC_9 (char*,int,int,int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct inbuf*,char*,char*) ;
 int * FUNC_12 (char const*,int *) ;
 int FUNC_13 (int ) ;
 struct node* FUNC_14 (struct inbuf*,struct inbuf*,char*,int) ;
 char* FUNC_15 (scalar_t__) ;

struct dt_info *FUNC_16(const char *VAR_10)
{
 FILE *VAR_11;
 fdt32_t VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 uint32_t VAR_19, VAR_20, VAR_21;
 int VAR_22;
 char *VAR_23;
 struct fdt_header *VAR_24;
 char *VAR_25;
 struct inbuf VAR_26, VAR_27;
 struct inbuf VAR_28;
 int VAR_29;
 struct reserve_info *VAR_30;
 struct node *VAR_31;
 uint32_t VAR_32;
 int VAR_33 = 0;

 VAR_11 = FUNC_12(VAR_10, ((void*)0));

 VAR_22 = FUNC_9(&VAR_12, sizeof(VAR_12), 1, VAR_11);
 if (FUNC_6(VAR_11))
  FUNC_2("Error reading DT blob magic number: %s\n",
      FUNC_13(VAR_9));
 if (VAR_22 < 1) {
  if (FUNC_5(VAR_11))
   FUNC_2("EOF reading DT blob magic number\n");
  else
   FUNC_2("Mysterious short read reading magic number\n");
 }

 VAR_14 = FUNC_4(VAR_12);
 if (VAR_14 != VAR_3)
  FUNC_2("Blob has incorrect magic number\n");

 VAR_22 = FUNC_9(&VAR_13, sizeof(VAR_13), 1, VAR_11);
 if (FUNC_6(VAR_11))
  FUNC_2("Error reading DT blob size: %s\n", FUNC_13(VAR_9));
 if (VAR_22 < 1) {
  if (FUNC_5(VAR_11))
   FUNC_2("EOF reading DT blob size\n");
  else
   FUNC_2("Mysterious short read reading blob size\n");
 }

 VAR_15 = FUNC_4(VAR_13);
 if (VAR_15 < VAR_4)
  FUNC_2("DT blob size (%d) is too small\n", VAR_15);

 VAR_23 = FUNC_15(VAR_15);

 VAR_24 = (struct fdt_header *)VAR_23;
 VAR_24->magic = FUNC_1(VAR_14);
 VAR_24->totalsize = FUNC_1(VAR_15);

 VAR_29 = VAR_15 - sizeof(VAR_14) - sizeof(VAR_15);
 VAR_25 = VAR_23 + sizeof(VAR_14) + sizeof(VAR_15);

 while (VAR_29) {
  if (FUNC_5(VAR_11))
   FUNC_2("EOF before reading %d bytes of DT blob\n",
       VAR_15);

  VAR_22 = FUNC_9(VAR_25, 1, VAR_29, VAR_11);
  if (FUNC_6(VAR_11))
   FUNC_2("Error reading DT blob: %s\n",
       FUNC_13(VAR_9));

  VAR_29 -= VAR_22;
  VAR_25 += VAR_22;
 }

 VAR_19 = FUNC_4(VAR_24->off_dt_struct);
 VAR_20 = FUNC_4(VAR_24->off_dt_strings);
 VAR_21 = FUNC_4(VAR_24->off_mem_rsvmap);
 VAR_16 = FUNC_4(VAR_24->version);
 VAR_18 = FUNC_4(VAR_24->boot_cpuid_phys);

 if (VAR_21 >= VAR_15)
  FUNC_2("Mem Reserve structure offset exceeds total size\n");

 if (VAR_19 >= VAR_15)
  FUNC_2("DT structure offset exceeds total size\n");

 if (VAR_20 > VAR_15)
  FUNC_2("String table offset exceeds total size\n");

 if (VAR_16 >= 3) {
  uint32_t VAR_34 = FUNC_4(VAR_24->size_dt_strings);
  if ((VAR_20+VAR_34 < VAR_20) || (VAR_20+VAR_34 > VAR_15))
   FUNC_2("String table extends past total size\n");
  FUNC_11(&VAR_27, VAR_23 + VAR_20, VAR_23 + VAR_20 + VAR_34);
 } else {
  FUNC_11(&VAR_27, VAR_23 + VAR_20, VAR_23 + VAR_15);
 }

 if (VAR_16 >= 17) {
  VAR_17 = FUNC_4(VAR_24->size_dt_struct);
  if ((VAR_19+VAR_17 < VAR_19) || (VAR_19+VAR_17 > VAR_15))
   FUNC_2("Structure block extends past total size\n");
 }

 if (VAR_16 < 16) {
  VAR_33 |= VAR_5 | VAR_6 | VAR_8;
 } else {
  VAR_33 |= VAR_7;
 }

 FUNC_11(&VAR_28,
     VAR_23 + VAR_21, VAR_23 + VAR_15);
 FUNC_11(&VAR_26, VAR_23 + VAR_19, VAR_23 + VAR_15);

 VAR_30 = FUNC_7(&VAR_28);

 VAR_32 = FUNC_8(&VAR_26);

 if (VAR_32 != VAR_1)
  FUNC_2("Device tree blob doesn't begin with FDT_BEGIN_NODE (begins with 0x%08x)\n", VAR_32);

 VAR_31 = FUNC_14(&VAR_26, &VAR_27, "", VAR_33);

 VAR_32 = FUNC_8(&VAR_26);
 if (VAR_32 != VAR_2)
  FUNC_2("Device tree blob doesn't end with FDT_END\n");

 FUNC_10(VAR_23);

 FUNC_3(VAR_11);

 return FUNC_0(VAR_0, VAR_30, VAR_31, VAR_18);
}
