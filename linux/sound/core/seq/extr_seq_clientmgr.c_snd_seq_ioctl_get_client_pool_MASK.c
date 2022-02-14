
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_seq_client_pool {scalar_t__ input_free; scalar_t__ input_pool; int output_free; int output_pool; int output_room; int client; } ;
struct TYPE_4__ {int fifo; scalar_t__ fifo_pool_size; } ;
struct TYPE_5__ {TYPE_1__ user; } ;
struct snd_seq_client {scalar_t__ type; TYPE_2__ data; TYPE_3__* pool; int number; } ;
struct TYPE_6__ {int room; int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_seq_client_pool*,int ,int) ;
 int FUNC_1 (struct snd_seq_client*) ;
 struct snd_seq_client* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct snd_seq_client *VAR_2,
      void *VAR_3)
{
 struct snd_seq_client_pool *VAR_4 = VAR_3;
 struct snd_seq_client *VAR_5;

 VAR_5 = FUNC_2(VAR_4->client);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->client = VAR_5->number;
 VAR_4->output_pool = VAR_5->pool->size;
 VAR_4->output_room = VAR_5->pool->room;
 VAR_4->output_free = VAR_4->output_pool;
 VAR_4->output_free = FUNC_4(VAR_5->pool);
 if (VAR_5->type == VAR_1) {
  VAR_4->input_pool = VAR_5->data.user.fifo_pool_size;
  VAR_4->input_free = VAR_4->input_pool;
  VAR_4->input_free = FUNC_3(VAR_5->data.user.fifo);
 } else {
  VAR_4->input_pool = 0;
  VAR_4->input_free = 0;
 }
 FUNC_1(VAR_5);

 return 0;
}
