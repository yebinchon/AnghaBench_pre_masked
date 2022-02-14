
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voice {int flags; int period_size; int vperiod; int sync_cso; int sync_buffer_size; int sync_period_size; scalar_t__ buffer_size; int substream; scalar_t__ sync_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct voice*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct voice *VAR_3)
{
 if (VAR_3->flags & VAR_1) {
  FUNC_1(VAR_3, VAR_3->period_size);
 } else if (VAR_3->flags & VAR_2) {
  int VAR_4;




  if (VAR_3->vperiod > VAR_3->period_size) {
   VAR_3->vperiod -= VAR_3->period_size;
   if (VAR_3->vperiod < VAR_3->period_size)
    FUNC_1(VAR_3, VAR_3->vperiod);
   else
    FUNC_1(VAR_3, VAR_3->period_size);
   return;
  }






  VAR_4 = VAR_3->sync_cso;
  VAR_4 -= FUNC_0(VAR_3->sync_base + VAR_0);
  if (VAR_4 > (VAR_3->sync_buffer_size / 2))
   VAR_4 -= VAR_3->sync_buffer_size;






  if (VAR_4 > 0) {
   if (VAR_4 < 16)
    VAR_4 = 16;
   FUNC_1(VAR_3, VAR_4);
   return;
  }
  if (VAR_4 > -9)
   VAR_3->vperiod = VAR_3->sync_period_size + 1;
  else
   VAR_3->vperiod = VAR_3->sync_period_size + VAR_4 + 10;

  if (VAR_3->vperiod < VAR_3->buffer_size) {
   FUNC_1(VAR_3, VAR_3->vperiod);
   VAR_3->vperiod = 0;
  } else
   FUNC_1(VAR_3, VAR_3->period_size);

  VAR_4 = VAR_3->sync_cso + VAR_3->sync_period_size;
  if (VAR_4 >= VAR_3->sync_buffer_size)
   VAR_4 -= VAR_3->sync_buffer_size;
  VAR_3->sync_cso = VAR_4;
 }

 FUNC_2(VAR_3->substream);
}
