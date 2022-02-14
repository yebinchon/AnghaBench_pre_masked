
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int time; } ;
struct TYPE_5__ {scalar_t__ code; } ;
union evrec {TYPE_3__ t; TYPE_2__ s; } ;
struct TYPE_4__ {scalar_t__ client; } ;
struct snd_seq_event {scalar_t__ type; int data; TYPE_1__ source; } ;
struct seq_oss_devinfo {scalar_t__ cseq; int * readq; int writeq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_seq_event*,int,void*) ;
 int FUNC_1 (int *,union evrec*) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct snd_seq_event *VAR_2, int VAR_3, void *VAR_4,
   int VAR_5, int VAR_6)
{
 struct seq_oss_devinfo *VAR_7 = (struct seq_oss_devinfo *)VAR_4;
 union evrec *VAR_8;

 if (VAR_2->type != VAR_1)
  return FUNC_0(VAR_2, VAR_3, VAR_4);

 if (VAR_2->source.client != VAR_7->cseq)
  return 0;

 VAR_8 = (union evrec*)&VAR_2->data;
 if (VAR_8->s.code == VAR_0) {

  FUNC_2(VAR_7->writeq, VAR_8->t.time);

 } else {

  if (VAR_7->readq == ((void*)0))
   return 0;
  FUNC_1(VAR_7->readq, VAR_8);
 }
 return 0;
}
