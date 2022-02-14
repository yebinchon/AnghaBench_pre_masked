
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int orig_interval; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 () ;

__attribute__((used)) static unsigned long
FUNC_3(const struct batadv_priv *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->orig_interval) - VAR_0;
 VAR_3 += FUNC_2() % (2 * VAR_0);

 return VAR_1 + FUNC_1(VAR_3);
}
