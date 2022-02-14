
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct batadv_priv {int hop_penalty; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_1, const struct batadv_priv *VAR_2)
{
 int VAR_3 = FUNC_0(&VAR_2->hop_penalty);
 int VAR_4;

 VAR_4 = VAR_1 * (VAR_0 - VAR_3);
 VAR_4 /= VAR_0;

 return VAR_4;
}
