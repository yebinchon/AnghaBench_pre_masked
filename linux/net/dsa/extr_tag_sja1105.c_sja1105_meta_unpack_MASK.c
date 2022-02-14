
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct sja1105_meta {int switch_id; int source_port; int dmac_byte_3; int dmac_byte_4; int tstamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int,int ,int,int ,int ) ;
 int * FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_2(const struct sk_buff *VAR_2,
    struct sja1105_meta *VAR_3)
{
 u8 *VAR_4 = FUNC_1(VAR_2) + VAR_0;
 FUNC_0(VAR_4, &VAR_3->tstamp, 31, 0, 4, VAR_1, 0);
 FUNC_0(VAR_4 + 4, &VAR_3->dmac_byte_4, 7, 0, 1, VAR_1, 0);
 FUNC_0(VAR_4 + 5, &VAR_3->dmac_byte_3, 7, 0, 1, VAR_1, 0);
 FUNC_0(VAR_4 + 6, &VAR_3->source_port, 7, 0, 1, VAR_1, 0);
 FUNC_0(VAR_4 + 7, &VAR_3->switch_id, 7, 0, 1, VAR_1, 0);
}
