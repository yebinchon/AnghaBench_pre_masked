
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme32 {int rcreg; scalar_t__ iobase; scalar_t__ playback_substream; scalar_t__ capture_substream; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct rme32 *VAR_7 = (struct rme32 *) VAR_6;

 VAR_7->rcreg = FUNC_0(VAR_7->iobase + VAR_3);
 if (!(VAR_7->rcreg & VAR_4)) {
  return VAR_1;
 } else {
  if (VAR_7->capture_substream) {
   FUNC_1(VAR_7->capture_substream);
  }
  if (VAR_7->playback_substream) {
   FUNC_1(VAR_7->playback_substream);
  }
  FUNC_2(0, VAR_7->iobase + VAR_2);
 }
 return VAR_0;
}
