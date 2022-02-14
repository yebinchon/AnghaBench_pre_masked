
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct zyn_rombin_hdr {int osize; scalar_t__ ocsum; scalar_t__ mmap_addr; int flags; int type; int addr; } ;
struct fw_mmap {scalar_t__ addr; } ;
struct fw_block {scalar_t__ file_size; scalar_t__ type; int align; int file_name; } ;
struct csum_state {int dummy; } ;
typedef int hdr ;
struct TYPE_2__ {scalar_t__ romio_offs; scalar_t__ bootext_size; scalar_t__ flash_base; int code_start; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*,scalar_t__,...) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fw_block* VAR_5 ;
 TYPE_1__* VAR_6 ;
 struct fw_block* VAR_7 ;
 scalar_t__ FUNC_5 (struct csum_state*) ;
 int FUNC_6 (struct csum_state*) ;
 int FUNC_7 (struct zyn_rombin_hdr*,int ,int) ;
 int VAR_8 ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (int *,struct fw_block*,struct csum_state*) ;
 int FUNC_10 (int *,int *,int,int *) ;
 int FUNC_11 (int *,struct zyn_rombin_hdr*) ;
 int FUNC_12 (int *,struct fw_mmap*,struct csum_state*) ;
 int FUNC_13 (int *,scalar_t__,int,struct csum_state*) ;

int
FUNC_14(FILE *VAR_9)
{
 struct fw_block *VAR_10;
 struct fw_mmap VAR_11;
 struct zyn_rombin_hdr VAR_12;
 struct csum_state VAR_13;
 int VAR_14, VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;
 uint16_t VAR_18;
 uint16_t VAR_19;


 FUNC_7(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.addr = VAR_6->code_start;
 VAR_12.type = VAR_3;
 VAR_12.flags = VAR_4;

 VAR_16 = VAR_6->romio_offs;

 VAR_15 = FUNC_11(VAR_9, &VAR_12);
 if (VAR_15)
  return VAR_15;

 VAR_16 += sizeof(VAR_12);

 FUNC_6(&VAR_13);
 VAR_15 = FUNC_9(VAR_9, VAR_7, &VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_16 += VAR_7->file_size;
 if (VAR_16 > (VAR_6->romio_offs + VAR_6->bootext_size)) {
  FUNC_3("bootext file '%s' is too big", VAR_7->file_name);
  return -1;
 }

 VAR_17 = FUNC_0(VAR_16, VAR_1) - VAR_16;
 VAR_15 = FUNC_13(VAR_9, VAR_17, 0xFF, &VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_16 += VAR_17;

 VAR_11.addr = VAR_6->flash_base + VAR_16;
 VAR_15 = FUNC_12(VAR_9, &VAR_11, &VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_16 += VAR_2;

 if ((VAR_16 - VAR_6->romio_offs) < VAR_6->bootext_size) {
  VAR_17 = VAR_6->romio_offs + VAR_6->bootext_size - VAR_16;
  VAR_15 = FUNC_13(VAR_9, VAR_17, 0xFF, &VAR_13);
  if (VAR_15)
   return VAR_15;
  VAR_16 += VAR_17;

  FUNC_2(2, "bootext end at %08x", VAR_16);
 }

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  VAR_10 = &VAR_5[VAR_14];

  if (VAR_10->type == VAR_0)
   continue;

  VAR_17 = FUNC_0(VAR_16, VAR_10->align) - VAR_16;
  VAR_15 = FUNC_13(VAR_9, VAR_17, 0xFF, &VAR_13);
  if (VAR_15)
   return VAR_15;
  VAR_16 += VAR_17;

  VAR_15 = FUNC_9(VAR_9, VAR_10, &VAR_13);
  if (VAR_15)
   return VAR_15;
  VAR_16 += VAR_10->file_size;
 }

 VAR_17 = FUNC_0(VAR_16, 4) - VAR_16;
 VAR_15 = FUNC_13(VAR_9, VAR_17, 0xFF, &VAR_13);
 if (VAR_15)
  return VAR_15;
 VAR_16 += VAR_17;

 VAR_18 = FUNC_5(&VAR_13);
 VAR_12.mmap_addr = VAR_11.addr;
 VAR_12.osize = 2;

 VAR_15 = FUNC_8(&VAR_12.ocsum);
 if (VAR_15)
  return VAR_15;
 VAR_12.ocsum = FUNC_1(VAR_12.ocsum);

 if (VAR_18 <= VAR_12.ocsum)
  VAR_19 = VAR_12.ocsum - VAR_18;
 else
  VAR_19 = VAR_12.ocsum - VAR_18 - 1;

 FUNC_2(2, "ocsum=%04x, csum=%04x, fix=%04x", VAR_12.ocsum, VAR_18, VAR_19);

 VAR_19 = FUNC_4(VAR_19);
 VAR_15 = FUNC_10(VAR_9, (uint8_t *)&VAR_19, 2, ((void*)0));
 if (VAR_15)
  return VAR_15;


 VAR_15 = FUNC_11(VAR_9, &VAR_12);

 return VAR_15;
}
