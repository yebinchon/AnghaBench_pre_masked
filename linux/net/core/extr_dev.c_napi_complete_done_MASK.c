
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct napi_struct {unsigned long state; int poll_list; int timer; TYPE_1__* dev; scalar_t__ gro_bitmask; } ;
struct TYPE_2__ {unsigned long gro_flush_timeout; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct napi_struct*) ;
 unsigned long FUNC_3 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_4 (struct napi_struct*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (struct napi_struct*,int) ;
 int FUNC_11 (unsigned long) ;
 scalar_t__ FUNC_12 (unsigned long) ;

bool FUNC_13(struct napi_struct *VAR_5, int VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;







 if (FUNC_12(VAR_5->state & (VAR_3 |
     VAR_1)))
  return 0;

 FUNC_4(VAR_5);

 if (VAR_5->gro_bitmask) {
  unsigned long VAR_10 = 0;

  if (VAR_6)
   VAR_10 = VAR_5->dev->gro_flush_timeout;





  FUNC_10(VAR_5, !!VAR_10);
  if (VAR_10)
   FUNC_5(&VAR_5->timer, FUNC_11(VAR_10),
          VAR_0);
 }
 if (FUNC_12(!FUNC_7(&VAR_5->poll_list))) {

  FUNC_9(VAR_7);
  FUNC_6(&VAR_5->poll_list);
  FUNC_8(VAR_7);
 }

 do {
  VAR_8 = FUNC_0(VAR_5->state);

  FUNC_1(!(VAR_8 & VAR_4));

  VAR_9 = VAR_8 & ~(VAR_2 | VAR_4);





  VAR_9 |= (VAR_8 & VAR_2) / VAR_2 *
          VAR_4;
 } while (FUNC_3(&VAR_5->state, VAR_8, VAR_9) != VAR_8);

 if (FUNC_12(VAR_8 & VAR_2)) {
  FUNC_2(VAR_5);
  return 0;
 }

 return 1;
}
