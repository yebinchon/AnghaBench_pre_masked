
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int const ut16 ;
struct optimised_sbox {int dummy; } ;


 int const FUNC_0 (int ,int) ;
 int FUNC_1 (int const,int const,int const,int const,int const,int const,int const,int const,int const) ;
 int FUNC_2 (int ,struct optimised_sbox const*,int ) ;

__attribute__((used)) static inline ut16 FUNC_3(ut16 VAR_0, const int *VAR_1, const int *VAR_2,
  const struct optimised_sbox* VAR_3, const struct optimised_sbox* VAR_4,
  const struct optimised_sbox* VAR_5, const struct optimised_sbox* VAR_6,
  ut32 VAR_7, ut32 VAR_8, ut32 VAR_9, ut32 VAR_10)
{
 ut8 VAR_11 = FUNC_1(VAR_0, VAR_2[7],VAR_2[6],VAR_2[5],VAR_2[4],VAR_2[3],VAR_2[2],VAR_2[1],VAR_2[0]);
 ut8 VAR_12 = FUNC_1(VAR_0, VAR_1[7],VAR_1[6],VAR_1[5],VAR_1[4],VAR_1[3],VAR_1[2],VAR_1[1],VAR_1[0]);

 VAR_11 ^= FUNC_2(VAR_12, VAR_3, VAR_7);
 VAR_12 ^= FUNC_2(VAR_11, VAR_4, VAR_8);
 VAR_11 ^= FUNC_2(VAR_12, VAR_5, VAR_9);
 VAR_12 ^= FUNC_2(VAR_11, VAR_6, VAR_10);

 return
  (FUNC_0(VAR_11, 0) << VAR_1[0]) |
  (FUNC_0(VAR_11, 1) << VAR_1[1]) |
  (FUNC_0(VAR_11, 2) << VAR_1[2]) |
  (FUNC_0(VAR_11, 3) << VAR_1[3]) |
  (FUNC_0(VAR_11, 4) << VAR_1[4]) |
  (FUNC_0(VAR_11, 5) << VAR_1[5]) |
  (FUNC_0(VAR_11, 6) << VAR_1[6]) |
  (FUNC_0(VAR_11, 7) << VAR_1[7]) |
  (FUNC_0(VAR_12, 0) << VAR_2[0]) |
  (FUNC_0(VAR_12, 1) << VAR_2[1]) |
  (FUNC_0(VAR_12, 2) << VAR_2[2]) |
  (FUNC_0(VAR_12, 3) << VAR_2[3]) |
  (FUNC_0(VAR_12, 4) << VAR_2[4]) |
  (FUNC_0(VAR_12, 5) << VAR_2[5]) |
  (FUNC_0(VAR_12, 6) << VAR_2[6]) |
  (FUNC_0(VAR_12, 7) << VAR_2[7]);
}
