
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atiixp_modem {unsigned int codec_not_ready_bits; int reg_lock; int * dmas; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (struct atiixp_modem*,int ) ;
 int FUNC_1 (struct atiixp_modem*,int ,unsigned int,int ) ;
 int FUNC_2 (struct atiixp_modem*,int ,unsigned int) ;
 int FUNC_3 (struct atiixp_modem*,int *) ;
 int FUNC_4 (struct atiixp_modem*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct atiixp_modem *VAR_13 = VAR_12;
 unsigned int VAR_14;

 VAR_14 = FUNC_0(VAR_13, VAR_10);

 if (! VAR_14)
  return VAR_9;


 if (VAR_14 & VAR_5)
  FUNC_4(VAR_13, &VAR_13->dmas[VAR_1]);
 else if (VAR_14 & VAR_4)
  FUNC_3(VAR_13, &VAR_13->dmas[VAR_1]);
 if (VAR_14 & VAR_3)
  FUNC_4(VAR_13, &VAR_13->dmas[VAR_0]);
 else if (VAR_14 & VAR_2)
  FUNC_3(VAR_13, &VAR_13->dmas[VAR_0]);


 if (VAR_14 & VAR_6) {
  unsigned int VAR_15;
  VAR_15 = VAR_14 & VAR_6;
  FUNC_5(&VAR_13->reg_lock);
  VAR_13->codec_not_ready_bits |= VAR_15;
  FUNC_1(VAR_13, VAR_7, VAR_15, 0);
  FUNC_6(&VAR_13->reg_lock);
 }


 FUNC_2(VAR_13, VAR_10, VAR_14);

 return VAR_8;
}
