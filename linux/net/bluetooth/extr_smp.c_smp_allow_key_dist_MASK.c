
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp_chan {int remote_key_dist; } ;


 int FUNC_0 (struct smp_chan*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct smp_chan *VAR_6)
{




 if (VAR_6->remote_key_dist & VAR_3)
  FUNC_0(VAR_6, VAR_0);
 else if (VAR_6->remote_key_dist & VAR_4)
  FUNC_0(VAR_6, VAR_1);
 else if (VAR_6->remote_key_dist & VAR_5)
  FUNC_0(VAR_6, VAR_2);
}
