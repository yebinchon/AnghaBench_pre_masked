
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar934x_nfc {unsigned int buf_size; int * buf; int parent; int buf_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ,unsigned int,int *,int ) ;
 int FUNC_2 (struct ar934x_nfc*,char*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct ar934x_nfc *VAR_2, unsigned VAR_3)
{
 VAR_2->buf = FUNC_1(VAR_2->parent, VAR_3,
          &VAR_2->buf_dma, VAR_1);
 if (VAR_2->buf == ((void*)0)) {
  FUNC_0(VAR_2->parent, "no memory for DMA buffer\n");
  return -VAR_0;
 }

 VAR_2->buf_size = VAR_3;
 FUNC_2(VAR_2, "buf:%p size:%u\n", VAR_2->buf, VAR_2->buf_size);

 return 0;
}
