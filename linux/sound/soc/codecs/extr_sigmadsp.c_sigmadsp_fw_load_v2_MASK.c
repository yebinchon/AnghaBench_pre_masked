
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmadsp {int dev; } ;
struct sigma_fw_chunk {int tag; int length; } ;
struct sigma_firmware_header {int dummy; } ;
struct firmware {int size; scalar_t__ data; } ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (unsigned int,int) ;
 int VAR_0 ;



 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sigmadsp*,struct sigma_fw_chunk*,unsigned int) ;
 int FUNC_4 (struct sigmadsp*,struct sigma_fw_chunk*,unsigned int) ;
 int FUNC_5 (struct sigmadsp*,struct sigma_fw_chunk*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct sigmadsp *VAR_1,
 const struct firmware *VAR_2)
{
 struct sigma_fw_chunk *VAR_3;
 unsigned int VAR_4, VAR_5;
 int VAR_6;





 if (VAR_2->size < sizeof(*VAR_3) + sizeof(struct sigma_firmware_header))
  return 0;

 VAR_5 = sizeof(struct sigma_firmware_header);

 while (VAR_5 < VAR_2->size - sizeof(*VAR_3)) {
  VAR_3 = (struct sigma_fw_chunk *)(VAR_2->data + VAR_5);

  VAR_4 = FUNC_2(VAR_3->length);

  if (VAR_4 > VAR_2->size - VAR_5 || VAR_4 < sizeof(*VAR_3))
   return -VAR_0;

  switch (FUNC_2(VAR_3->tag)) {
  case 129:
   VAR_6 = FUNC_4(VAR_1, VAR_3, VAR_4);
   break;
  case 130:
   VAR_6 = FUNC_3(VAR_1, VAR_3, VAR_4);
   break;
  case 128:
   VAR_6 = FUNC_5(VAR_1, VAR_3, VAR_4);
   break;
  default:
   FUNC_1(VAR_1->dev, "Unknown chunk type: %d\n",
    VAR_3->tag);
   VAR_6 = 0;
   break;
  }

  if (VAR_6)
   return VAR_6;





  VAR_5 += FUNC_0(VAR_4, sizeof(__le32));
 }

 return 0;
}
