
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_mgr {TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned int FUNC_0 (struct pcxhr_mgr*,int ) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_1 (struct pcxhr_mgr*,int ,unsigned char) ;
 int FUNC_2 (struct pcxhr_mgr*,int ,unsigned int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pcxhr_mgr*,int ,unsigned int,unsigned int,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_7(struct pcxhr_mgr *VAR_20,
        unsigned int VAR_21, int VAR_22)
{
 int VAR_23;
 unsigned char VAR_24;

 if (VAR_21 & VAR_11) {

  FUNC_2(VAR_20, VAR_16,
       FUNC_0(VAR_20, VAR_16) &
       ~VAR_15);
 }
 if ((VAR_21 & VAR_12) == 0) {
  VAR_24 = (VAR_6 |
         VAR_7 |
         VAR_3);
  if (VAR_21 & VAR_9)
   VAR_24 |= VAR_4;
  if (VAR_21 & VAR_10)
   VAR_24 |= VAR_5;
  FUNC_1(VAR_20, VAR_2, VAR_24);
 }
 VAR_24 = (unsigned char)(((VAR_21 & VAR_8) >> 1) |
         VAR_0);
 FUNC_1(VAR_20, VAR_1, VAR_24);
 if (VAR_21 & VAR_13) {
  if (VAR_22)
   FUNC_4(VAR_18);
  else
   FUNC_5(VAR_18);
 }
 if (VAR_21 & VAR_14) {
  if (VAR_22)
   FUNC_4(VAR_19);
  else
   FUNC_5(VAR_18);
 }

 VAR_23 = FUNC_6(VAR_20, VAR_1, VAR_0, 0,
      VAR_17, &VAR_24);
 if (VAR_23) {
  FUNC_3(&VAR_20->pci->dev, "pcxhr_send_it_dsp : TIMEOUT CVR\n");
  return VAR_23;
 }
 if (VAR_21 & VAR_11) {

  VAR_23 = FUNC_6(VAR_20, VAR_16,
       VAR_15,
       VAR_15,
       VAR_17,
       &VAR_24);
  if (VAR_23) {
   FUNC_3(&VAR_20->pci->dev,
       "pcxhr_send_it_dsp : TIMEOUT HF5\n");
   return VAR_23;
  }
 }
 return 0;
}
