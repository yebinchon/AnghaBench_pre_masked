
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atiixp_modem {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct atiixp_modem*,int ) ;
 int FUNC_1 (struct atiixp_modem*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct atiixp_modem *VAR_8)
{
 unsigned int VAR_9;


 VAR_9 = FUNC_0(VAR_8, VAR_5);
 VAR_9 |= VAR_0;
 if(!(VAR_9 & VAR_1))
  VAR_9 |= VAR_1;
 FUNC_1(VAR_8, VAR_5, VAR_9);


 FUNC_1(VAR_8, VAR_7, 0xffffffff);

 FUNC_1(VAR_8, VAR_6,
       VAR_4 |
       VAR_2 |
       VAR_3);
 return 0;
}
