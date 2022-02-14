
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {int pass; int dev; TYPE_1__* fw; } ;
struct snd_soc_tplg_hdr {scalar_t__ size; scalar_t__ type; scalar_t__ magic; scalar_t__ abi; scalar_t__ payload_size; int vendor_type; int version; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,int ,int ,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct soc_tplg*) ;

__attribute__((used)) static int FUNC_4(struct soc_tplg *VAR_5,
 struct snd_soc_tplg_hdr *VAR_6)
{
 if (FUNC_3(VAR_5) >= VAR_5->fw->size)
  return 0;

 if (FUNC_2(VAR_6->size) != sizeof(*VAR_6)) {
  FUNC_1(VAR_5->dev,
   "ASoC: invalid header size for type %d at offset 0x%lx size 0x%zx.\n",
   FUNC_2(VAR_6->type), FUNC_3(VAR_5),
   VAR_5->fw->size);
  return -VAR_0;
 }


 if (VAR_6->magic == VAR_4) {
  FUNC_1(VAR_5->dev,
   "ASoC: pass %d big endian not supported header got %x at offset 0x%lx size 0x%zx.\n",
   VAR_5->pass, VAR_6->magic,
   FUNC_3(VAR_5), VAR_5->fw->size);
  return -VAR_0;
 }

 if (FUNC_2(VAR_6->magic) != VAR_3) {
  FUNC_1(VAR_5->dev,
   "ASoC: pass %d does not have a valid header got %x at offset 0x%lx size 0x%zx.\n",
   VAR_5->pass, VAR_6->magic,
   FUNC_3(VAR_5), VAR_5->fw->size);
  return -VAR_0;
 }


 if (FUNC_2(VAR_6->abi) > VAR_1 ||
     FUNC_2(VAR_6->abi) < VAR_2) {
  FUNC_1(VAR_5->dev,
   "ASoC: pass %d invalid ABI version got 0x%x need 0x%x at offset 0x%lx size 0x%zx.\n",
   VAR_5->pass, VAR_6->abi,
   VAR_1, FUNC_3(VAR_5),
   VAR_5->fw->size);
  return -VAR_0;
 }

 if (VAR_6->payload_size == 0) {
  FUNC_1(VAR_5->dev, "ASoC: header has 0 size at offset 0x%lx.\n",
   FUNC_3(VAR_5));
  return -VAR_0;
 }

 if (VAR_5->pass == FUNC_2(VAR_6->type))
  FUNC_0(VAR_5->dev,
   "ASoC: Got 0x%x bytes of type %d version %d vendor %d at pass %d\n",
   VAR_6->payload_size, VAR_6->type, VAR_6->version,
   VAR_6->vendor_type, VAR_5->pass);

 return 1;
}
