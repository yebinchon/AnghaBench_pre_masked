
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ag71xx {int rx_ring; int tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ag71xx*) ;

__attribute__((used)) static int FUNC_3(struct ag71xx *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->tx_ring, VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_2);

 VAR_3 = FUNC_0(&VAR_2->rx_ring, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 return VAR_3;
}
