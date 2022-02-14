
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; } ;
struct snd_ff {TYPE_3__* spec; TYPE_1__ async_handler; } ;
struct fw_request {int dummy; } ;
struct fw_card {int dummy; } ;
typedef int __le32 ;
struct TYPE_6__ {TYPE_2__* protocol; } ;
struct TYPE_5__ {int (* handle_midi_msg ) (struct snd_ff*,unsigned int,int *,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct fw_card*,struct fw_request*,int ) ;
 int FUNC_1 (struct snd_ff*,unsigned int,int *,size_t) ;

__attribute__((used)) static void FUNC_2(struct fw_card *VAR_1, struct fw_request *VAR_2,
       int VAR_3, int VAR_4, int VAR_5,
       int VAR_6, unsigned long long VAR_7,
       void *VAR_8, size_t VAR_9, void *VAR_10)
{
 struct snd_ff *VAR_11 = VAR_10;
 __le32 *VAR_12 = VAR_8;

 FUNC_0(VAR_1, VAR_2, VAR_0);

 VAR_7 -= VAR_11->async_handler.offset;
 VAR_11->spec->protocol->handle_midi_msg(VAR_11, (unsigned int)VAR_7, VAR_12,
         VAR_9);
}
