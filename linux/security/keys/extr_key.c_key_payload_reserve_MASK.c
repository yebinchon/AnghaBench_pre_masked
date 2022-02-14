
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int datalen; int quotalen; TYPE_1__* user; int flags; } ;
struct TYPE_2__ {int qnbytes; int lock; int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct key*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;

int FUNC_5(struct key *VAR_5, size_t VAR_6)
{
 int VAR_7 = (int)VAR_6 - VAR_5->datalen;
 int VAR_8 = 0;

 FUNC_0(VAR_5);


 if (VAR_7 != 0 && FUNC_3(VAR_2, &VAR_5->flags)) {
  unsigned VAR_9 = FUNC_4(VAR_5->user->uid, VAR_1) ?
   VAR_4 : VAR_3;

  FUNC_1(&VAR_5->user->lock);

  if (VAR_7 > 0 &&
      (VAR_5->user->qnbytes + VAR_7 >= VAR_9 ||
       VAR_5->user->qnbytes + VAR_7 < VAR_5->user->qnbytes)) {
   VAR_8 = -VAR_0;
  }
  else {
   VAR_5->user->qnbytes += VAR_7;
   VAR_5->quotalen += VAR_7;
  }
  FUNC_2(&VAR_5->user->lock);
 }


 if (VAR_8 == 0)
  VAR_5->datalen = VAR_6;

 return VAR_8;
}
