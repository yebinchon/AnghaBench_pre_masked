
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_mgr {TYPE_1__* pci; } ;
struct firmware {int size; unsigned char* data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pcxhr_mgr*,int ,unsigned char const) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pcxhr_mgr*,int ,int ,int ,int ,unsigned char*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct pcxhr_mgr *VAR_8, const struct firmware *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 const unsigned char *VAR_13;
 unsigned char VAR_14;

 if (VAR_9->size <= 0)
  return -VAR_0;
 if (VAR_9->size % 3)
  return -VAR_0;
 if (FUNC_5(!VAR_9->data))
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_9->size; VAR_11 += 3) {
  VAR_13 = VAR_9->data + VAR_11;
  if (VAR_11 == 0) {

   VAR_12 = (unsigned int)((VAR_13[0]<<16) +
          (VAR_13[1]<<8) +
          VAR_13[2]);
   if (VAR_12 && (VAR_9->size != (VAR_12 + 2) * 3))
    return -VAR_0;
  }

  VAR_10 = FUNC_4(VAR_8, VAR_1,
       VAR_5,
       VAR_5,
       VAR_6, &VAR_14);
  if (VAR_10) {
   FUNC_2(&VAR_8->pci->dev,
       "dsp loading error at position %d\n", VAR_11);
   return VAR_10;
  }

  FUNC_0(VAR_8, VAR_2, VAR_13[0]);
  FUNC_0(VAR_8, VAR_4, VAR_13[1]);
  FUNC_0(VAR_8, VAR_3, VAR_13[2]);


  FUNC_1();
 }

 FUNC_3(VAR_7);
 return 0;
}
