
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct ip_set {int family; struct bitmap_ip* data; int timeout; } ;
struct bitmap_ip {struct ip_set* set; int netmask; void* hosts; void* elements; void* last_ip; void* first_ip; int members; int memsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(struct ip_set *VAR_2, struct bitmap_ip *VAR_3,
     u32 VAR_4, u32 VAR_5,
     u32 VAR_6, u32 VAR_7, u8 VAR_8)
{
 VAR_3->members = FUNC_0(VAR_3->memsize);
 if (!VAR_3->members)
  return 0;
 VAR_3->first_ip = VAR_4;
 VAR_3->last_ip = VAR_5;
 VAR_3->elements = VAR_6;
 VAR_3->hosts = VAR_7;
 VAR_3->netmask = VAR_8;
 VAR_2->timeout = VAR_0;

 VAR_3->set = VAR_2;
 VAR_2->data = VAR_3;
 VAR_2->family = VAR_1;

 return 1;
}
