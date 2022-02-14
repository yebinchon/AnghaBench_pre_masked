
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long offset; } ;
struct snd_dg00x {TYPE_1__ async_handler; } ;
struct fw_request {int dummy; } ;
struct fw_card {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct fw_card*,struct fw_request*,int ) ;
 int FUNC_1 (struct snd_dg00x*,unsigned long long,int *) ;

__attribute__((used)) static void FUNC_2(struct fw_card *VAR_1, struct fw_request *VAR_2,
      int VAR_3, int VAR_4, int VAR_5,
      int VAR_6, unsigned long long VAR_7,
      void *VAR_8, size_t VAR_9, void *VAR_10)
{
 struct snd_dg00x *VAR_11 = VAR_10;
 __be32 *VAR_12 = (__be32 *)VAR_8;

 FUNC_0(VAR_1, VAR_2, VAR_0);

 if (VAR_7 == VAR_11->async_handler.offset)
  FUNC_1(VAR_11, VAR_7, VAR_12);
}
