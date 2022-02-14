
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_mgr {TYPE_1__* pci; } ;
struct firmware {unsigned char* data; unsigned int size; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct pcxhr_mgr*,int ) ;
 int FUNC_1 (struct pcxhr_mgr*,int ,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct pcxhr_mgr *VAR_7,
        const struct firmware *VAR_8, int VAR_9)
{
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned char VAR_12;
 unsigned char VAR_13;
 const unsigned char *VAR_14;


 VAR_11 = FUNC_0(VAR_7, VAR_5);




 if(VAR_9) {
  if ((VAR_11 & VAR_3) == 0) {
   FUNC_3(&VAR_7->pci->dev, "error loading first xilinx\n");
   return -VAR_0;
  }

  VAR_11 |= VAR_4;
  FUNC_1(VAR_7, VAR_5, VAR_11);
  FUNC_4( VAR_6 );
 }
 VAR_14 = VAR_8->data;
 for (VAR_10 = 0; VAR_10 < VAR_8->size; VAR_10++, VAR_14++) {
  VAR_12 = *VAR_14;
  VAR_13 = 0x80;
  while (VAR_13) {
   VAR_11 &= ~(VAR_1 |
        VAR_2);
   if (VAR_12 & VAR_13)
    VAR_11 |= VAR_2;
   FUNC_1(VAR_7, VAR_5, VAR_11);
   VAR_11 |= VAR_1;
   FUNC_1(VAR_7, VAR_5, VAR_11);
   VAR_13 >>= 1;
  }

  FUNC_2();
 }
 VAR_11 &= ~(VAR_1 | VAR_2);
 FUNC_1(VAR_7, VAR_5, VAR_11);

 FUNC_4( VAR_6 );
 return 0;
}
