
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsc7385 {TYPE_1__* pdata; struct spi_device* spi; } ;
struct spi_device {int dev; } ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_2__ {char* ucode_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,char*,int *) ;
 int FUNC_4 (struct vsc7385*) ;
 int FUNC_5 (struct vsc7385*) ;
 int FUNC_6 (struct vsc7385*) ;
 int FUNC_7 (struct vsc7385*,int ,int ,int ,unsigned int*) ;
 int FUNC_8 (struct vsc7385*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct vsc7385 *VAR_3)
{
 struct spi_device *VAR_4 = VAR_3->spi;
 const struct firmware *VAR_5;
 char *VAR_6;
 unsigned char *VAR_7;
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_6 = (VAR_3->pdata->ucode_name) ? VAR_3->pdata->ucode_name
           : "vsc7385_ucode.bin";
 VAR_11 = FUNC_3(&VAR_5, VAR_6, &VAR_4->dev);
 if (VAR_11) {
  FUNC_0(&VAR_4->dev, "request_firmware failed, err=%d\n",
   VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_6(VAR_3);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_4(VAR_3);
 if (VAR_11)
  goto out;

 FUNC_1(&VAR_4->dev, "uploading microcode...\n");

 VAR_7 = (unsigned char *) VAR_5->data;
 for (VAR_9 = 0; VAR_9 < VAR_5->size; VAR_9++) {
  VAR_11 = FUNC_8(VAR_3, VAR_1, 0,
       VAR_2, *VAR_7++);
  if (VAR_11) {
   FUNC_0(&VAR_4->dev, "could not load microcode, err=%d\n",
    VAR_11);
   goto out;
  }
 }

 VAR_11 = FUNC_4(VAR_3);
 if (VAR_11)
  goto out;

 FUNC_1(&VAR_4->dev, "verifying microcode...\n");

 VAR_7 = (unsigned char *) VAR_5->data;
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_5->size; VAR_9++) {
  VAR_11 = FUNC_7(VAR_3, VAR_1, 0,
      VAR_2, &VAR_8);
  if (VAR_11) {
   FUNC_0(&VAR_4->dev, "could not read microcode %d\n",
    VAR_11);
   goto out;
  }

  if (VAR_8 > 0xff) {
   FUNC_0(&VAR_4->dev, "bad val read: %04x : %02x  %02x\n",
    VAR_9, *VAR_7, VAR_8);
   VAR_11 = -VAR_0;
   goto out;
  }

  if ((VAR_8 & 0xff) != *VAR_7) {
   VAR_10++;
   FUNC_0(&VAR_4->dev, "verify error: %04x : %02x  %02x\n",
    VAR_9, *VAR_7, VAR_8);

   if (VAR_10 > 4)
    break;
   }
  VAR_7++;
 }

 if (VAR_10) {
  FUNC_0(&VAR_4->dev, "microcode verification failed\n");
  VAR_11 = -VAR_0;
  goto out;
 }

 FUNC_1(&VAR_4->dev, "microcode uploaded\n");

 VAR_11 = FUNC_5(VAR_3);

out:
 FUNC_2(VAR_5);
 return VAR_11;
}
