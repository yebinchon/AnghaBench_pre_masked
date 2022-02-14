
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lola_stream {int prepared; int index; int frags; int dsd; } ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct lola_pcm {TYPE_1__ bdl; } ;
struct lola {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lola*,int ,int ,int) ;
 int FUNC_1 (struct lola*,struct lola_stream*) ;
 int FUNC_2 (struct lola*,struct lola_stream*,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct lola *VAR_9, struct lola_pcm *VAR_10,
     struct lola_stream *VAR_11)
{
 dma_addr_t VAR_12;

 if (VAR_11->prepared)
  return -VAR_3;


 VAR_12 = VAR_10->bdl.addr + VAR_4 * VAR_11->index;
 FUNC_0(VAR_9, VAR_11->dsd, VAR_0, (u32)VAR_12);
 FUNC_0(VAR_9, VAR_11->dsd, VAR_1, FUNC_3(VAR_12));

 FUNC_0(VAR_9, VAR_11->dsd, VAR_8, VAR_11->frags - 1);
 FUNC_1(VAR_9, VAR_11);

  FUNC_0(VAR_9, VAR_11->dsd, VAR_2,
         VAR_6 | VAR_5 | VAR_7);

 VAR_11->prepared = 1;

 return FUNC_2(VAR_9, VAR_11, 1);
}
