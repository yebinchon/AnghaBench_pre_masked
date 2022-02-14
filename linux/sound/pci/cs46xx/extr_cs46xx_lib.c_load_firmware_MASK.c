
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_cs46xx {TYPE_3__* ba1; TYPE_1__* pci; } ;
struct firmware {int size; int data; } ;
struct TYPE_7__ {TYPE_2__* memory; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,char*,int *) ;
 TYPE_3__* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct snd_cs46xx *VAR_4)
{
 const struct firmware *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_2(&VAR_5, "cs46xx/ba1", &VAR_4->pci->dev);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_5->size != sizeof(*VAR_4->ba1)) {
  VAR_8 = -VAR_2;
  goto error;
 }

 VAR_4->ba1 = FUNC_3(sizeof(*VAR_4->ba1));
 if (!VAR_4->ba1) {
  VAR_8 = -VAR_3;
  goto error;
 }

 FUNC_0(VAR_4->ba1, VAR_5->data, sizeof(*VAR_4->ba1));


 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_7 += VAR_4->ba1->memory[VAR_6].size;
 if (VAR_7 > VAR_0 * 4)
  VAR_8 = -VAR_2;

 error:
 FUNC_1(VAR_5);
 return VAR_8;
}
