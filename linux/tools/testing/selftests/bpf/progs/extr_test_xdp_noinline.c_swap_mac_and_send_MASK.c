
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eth_hdr {unsigned char* eth_source; unsigned char* eth_dest; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static __attribute__ ((noinline))
int FUNC_1(void *VAR_1, void *VAR_2)
{
 unsigned char VAR_3[6];
 struct eth_hdr *VAR_4;

 VAR_4 = VAR_1;
 FUNC_0(VAR_3, VAR_4->eth_source, 6);
 FUNC_0(VAR_4->eth_source, VAR_4->eth_dest, 6);
 FUNC_0(VAR_4->eth_dest, VAR_3, 6);
 return VAR_0;
}
