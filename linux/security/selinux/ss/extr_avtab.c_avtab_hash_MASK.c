
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct avtab_key {int source_type; int target_type; int target_class; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct avtab_key *VAR_0, u32 VAR_1)
{
 static const u32 VAR_2 = 0xcc9e2d51;
 static const u32 VAR_3 = 0x1b873593;
 static const u32 VAR_4 = 15;
 static const u32 VAR_5 = 13;
 static const u32 VAR_6 = 5;
 static const u32 VAR_7 = 0xe6546b64;

 u32 VAR_8 = 0;
 { u32 VAR_9 = VAR_0->target_class; VAR_9 *= VAR_2; VAR_9 = (VAR_9 << VAR_4) | (VAR_9 >> (32 - VAR_4)); VAR_9 *= VAR_3; VAR_8 ^= VAR_9; VAR_8 = (VAR_8 << VAR_5) | (VAR_8 >> (32 - VAR_5)); VAR_8 = VAR_8 * VAR_6 + VAR_7; };
 { u32 VAR_10 = VAR_0->target_type; VAR_10 *= VAR_2; VAR_10 = (VAR_10 << VAR_4) | (VAR_10 >> (32 - VAR_4)); VAR_10 *= VAR_3; VAR_8 ^= VAR_10; VAR_8 = (VAR_8 << VAR_5) | (VAR_8 >> (32 - VAR_5)); VAR_8 = VAR_8 * VAR_6 + VAR_7; };
 { u32 VAR_11 = VAR_0->source_type; VAR_11 *= VAR_2; VAR_11 = (VAR_11 << VAR_4) | (VAR_11 >> (32 - VAR_4)); VAR_11 *= VAR_3; VAR_8 ^= VAR_11; VAR_8 = (VAR_8 << VAR_5) | (VAR_8 >> (32 - VAR_5)); VAR_8 = VAR_8 * VAR_6 + VAR_7; };



 VAR_8 ^= VAR_8 >> 16;
 VAR_8 *= 0x85ebca6b;
 VAR_8 ^= VAR_8 >> 13;
 VAR_8 *= 0xc2b2ae35;
 VAR_8 ^= VAR_8 >> 16;

 return VAR_8 & VAR_1;
}
