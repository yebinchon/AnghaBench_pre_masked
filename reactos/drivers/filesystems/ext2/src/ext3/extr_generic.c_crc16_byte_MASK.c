
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u16 ;


 int* VAR_0 ;

__attribute__((used)) static inline __u16 FUNC_0(__u16 VAR_1, const __u8 VAR_2)
{
    return (VAR_1 >> 8) ^ VAR_0[(VAR_1 ^ VAR_2) & 0xff];
}
