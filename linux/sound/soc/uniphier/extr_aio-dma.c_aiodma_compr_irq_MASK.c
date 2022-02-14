
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_aio_sub {TYPE_1__* cstream; int lock; int compr_bytes; int compr_addr; scalar_t__ threshold; } ;
struct snd_compr_runtime {int fragment_size; } ;
struct TYPE_2__ {struct snd_compr_runtime* runtime; } ;


 int FUNC_0 (struct uniphier_aio_sub*) ;
 int FUNC_1 (struct uniphier_aio_sub*,int ,scalar_t__) ;
 int FUNC_2 (struct uniphier_aio_sub*,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct uniphier_aio_sub *VAR_0)
{
 struct snd_compr_runtime *VAR_1 = VAR_0->cstream->runtime;
 int VAR_2 = VAR_1->fragment_size;
 int VAR_3;

 FUNC_4(&VAR_0->lock);
 VAR_3 = FUNC_1(VAR_0, VAR_0->compr_bytes,
          VAR_0->threshold + VAR_2);
 if (!VAR_3)
  VAR_0->threshold += VAR_2;

 FUNC_2(VAR_0, VAR_0->compr_addr, VAR_0->compr_bytes, VAR_2);
 FUNC_0(VAR_0);
 FUNC_5(&VAR_0->lock);

 FUNC_3(VAR_0->cstream);
}
