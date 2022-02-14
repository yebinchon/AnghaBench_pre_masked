
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct udphdr {scalar_t__ len; } ;
struct iphdr {int saddr; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static uint16_t FUNC_3(const struct iphdr *VAR_1,
      const struct udphdr *VAR_2,
      int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = sizeof(VAR_1->saddr);

 VAR_4 = FUNC_0((void *) &VAR_1->saddr, VAR_5);
 VAR_4 += FUNC_2(VAR_0);
 VAR_4 += VAR_2->len;
 return FUNC_1((void *) VAR_2, VAR_3, VAR_4);
}
