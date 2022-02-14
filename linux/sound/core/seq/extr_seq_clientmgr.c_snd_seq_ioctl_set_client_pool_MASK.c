
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_seq_client_pool {scalar_t__ client; int output_pool; int input_pool; int output_room; } ;
struct TYPE_6__ {int fifo_pool_size; int * fifo; } ;
struct TYPE_7__ {TYPE_1__ user; } ;
struct snd_seq_client {scalar_t__ number; scalar_t__ type; TYPE_3__* pool; TYPE_2__ data; } ;
struct TYPE_8__ {int size; int room; int counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct snd_seq_client*,void*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (struct snd_seq_client*) ;

__attribute__((used)) static int FUNC_7(struct snd_seq_client *VAR_5,
      void *VAR_6)
{
 struct snd_seq_client_pool *VAR_7 = VAR_6;
 int VAR_8;

 if (VAR_5->number != VAR_7->client)
  return -VAR_1;

 if (VAR_7->output_pool >= 1 && VAR_7->output_pool <= VAR_3 &&
     (! FUNC_6(VAR_5) ||
      VAR_7->output_pool != VAR_5->pool->size)) {
  if (FUNC_6(VAR_5)) {

   if (FUNC_0(&VAR_5->pool->counter))
    return -VAR_0;

   FUNC_5(VAR_5->pool);
   FUNC_3(VAR_5->pool);
  }
  VAR_5->pool->size = VAR_7->output_pool;
  VAR_8 = FUNC_4(VAR_5->pool);
  if (VAR_8 < 0)
   return VAR_8;
 }
 if (VAR_5->type == VAR_4 && VAR_5->data.user.fifo != ((void*)0) &&
     VAR_7->input_pool >= 1 &&
     VAR_7->input_pool <= VAR_2 &&
     VAR_7->input_pool != VAR_5->data.user.fifo_pool_size) {

  VAR_8 = FUNC_1(VAR_5->data.user.fifo, VAR_7->input_pool);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_5->data.user.fifo_pool_size = VAR_7->input_pool;
 }
 if (VAR_7->output_room >= 1 &&
     VAR_7->output_room <= VAR_5->pool->size) {
  VAR_5->pool->room = VAR_7->output_room;
 }

 return FUNC_2(VAR_5, VAR_6);
}
