
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_ogm2_packet {int tvlv_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(int VAR_1, int VAR_2,
    const struct batadv_ogm2_packet *VAR_3)
{
 int VAR_4 = 0;


 VAR_4 += VAR_1 + sizeof(*VAR_3);
 if (VAR_4 > VAR_2)
  return 0;


 VAR_4 += FUNC_0(VAR_3->tvlv_len);

 return (VAR_4 <= VAR_2) &&
        (VAR_4 <= VAR_0);
}
