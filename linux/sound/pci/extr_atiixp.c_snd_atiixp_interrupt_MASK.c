
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atiixp {unsigned int codec_not_ready_bits; int reg_lock; int * dmas; int spdif_over_aclink; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_0 (struct atiixp*,int ) ;
 int FUNC_1 (struct atiixp*,int ,unsigned int,int ) ;
 int FUNC_2 (struct atiixp*,int ,unsigned int) ;
 int FUNC_3 (struct atiixp*,int *) ;
 int FUNC_4 (struct atiixp*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_14, void *VAR_15)
{
 struct atiixp *VAR_16 = VAR_15;
 unsigned int VAR_17;

 VAR_17 = FUNC_0(VAR_16, VAR_13);

 if (! VAR_17)
  return VAR_12;


 if (VAR_17 & VAR_6)
  FUNC_4(VAR_16, &VAR_16->dmas[VAR_1]);
 else if (VAR_17 & VAR_5)
  FUNC_3(VAR_16, &VAR_16->dmas[VAR_1]);
 if (VAR_17 & VAR_4)
  FUNC_4(VAR_16, &VAR_16->dmas[VAR_0]);
 else if (VAR_17 & VAR_3)
  FUNC_3(VAR_16, &VAR_16->dmas[VAR_0]);
 if (! VAR_16->spdif_over_aclink) {
  if (VAR_17 & VAR_8)
   FUNC_4(VAR_16, &VAR_16->dmas[VAR_2]);
  else if (VAR_17 & VAR_7)
   FUNC_3(VAR_16, &VAR_16->dmas[VAR_2]);
 }


 if (VAR_17 & VAR_9) {
  unsigned int VAR_18;
  VAR_18 = VAR_17 & VAR_9;
  FUNC_5(&VAR_16->reg_lock);
  VAR_16->codec_not_ready_bits |= VAR_18;
  FUNC_1(VAR_16, VAR_10, VAR_18, 0);
  FUNC_6(&VAR_16->reg_lock);
 }


 FUNC_2(VAR_16, VAR_13, VAR_17);

 return VAR_11;
}
