
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct echoaudio*,int *) ;

__attribute__((used)) static int FUNC_3(struct echoaudio *VAR_1)
{
 int VAR_2;
 u32 VAR_3[6];

 for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
  if (FUNC_2(VAR_1, &VAR_3[VAR_2])) {
   FUNC_1(VAR_1->card->dev,
    "Failed to read serial number\n");
   return -VAR_0;
  }
 }
 FUNC_0(VAR_1->card->dev,
  "Read serial number %08x %08x %08x %08x %08x\n",
   VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_3[4]);
 return 0;
}
