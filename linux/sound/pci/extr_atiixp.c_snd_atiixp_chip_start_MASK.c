
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atiixp {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_0 (struct atiixp*,int ) ;
 int FUNC_1 (struct atiixp*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct atiixp *VAR_13)
{
 unsigned int VAR_14;


 VAR_14 = FUNC_0(VAR_13, VAR_9);
 VAR_14 |= 0x02 << VAR_1;
 VAR_14 |= VAR_0;
 FUNC_1(VAR_13, VAR_9, VAR_14);

 VAR_14 = FUNC_0(VAR_13, VAR_12);
 VAR_14 &= ~(VAR_7|VAR_8);
 FUNC_1(VAR_13, VAR_12, VAR_14);


 FUNC_1(VAR_13, VAR_11, 0xffffffff);

 FUNC_1(VAR_13, VAR_10,
       VAR_3 |
       VAR_2 |
       VAR_4 |
       VAR_6 |
       VAR_5);
 return 0;
}
