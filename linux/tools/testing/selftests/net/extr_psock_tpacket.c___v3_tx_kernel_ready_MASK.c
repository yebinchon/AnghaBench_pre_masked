
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpacket3_hdr {int tp_status; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct tpacket3_hdr *VAR_2)
{
 return !(VAR_2->tp_status & (VAR_1 | VAR_0));
}
