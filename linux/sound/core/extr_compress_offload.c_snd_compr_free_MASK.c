
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct snd_compr_runtime* runtime; TYPE_1__* ops; int error_work; } ;
struct snd_compr_runtime {int state; TYPE_2__ stream; struct snd_compr_runtime* buffer; int dma_buffer_p; } ;
struct snd_compr_file {int state; TYPE_2__ stream; struct snd_compr_file* buffer; int dma_buffer_p; } ;
struct inode {int dummy; } ;
struct file {struct snd_compr_runtime* private_data; } ;
struct TYPE_4__ {int (* free ) (TYPE_2__*) ;int (* trigger ) (TYPE_2__*,int ) ;} ;





 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_compr_runtime*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 struct snd_compr_file *VAR_3 = VAR_2->private_data;
 struct snd_compr_runtime *VAR_4 = VAR_3->stream.runtime;

 FUNC_0(&VAR_3->stream.error_work);

 switch (VAR_4->state) {
 case 128:
 case 130:
 case 129:
  VAR_3->stream.ops->trigger(&VAR_3->stream, VAR_0);
  break;
 default:
  break;
 }

 VAR_3->stream.ops->free(&VAR_3->stream);
 if (!VAR_3->stream.runtime->dma_buffer_p)
  FUNC_1(VAR_3->stream.runtime->buffer);
 FUNC_1(VAR_3->stream.runtime);
 FUNC_1(VAR_3);
 return 0;
}
