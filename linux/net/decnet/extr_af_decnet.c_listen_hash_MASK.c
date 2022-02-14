
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dn {unsigned int sdn_objnum; unsigned int sdn_objnamel; unsigned int* sdn_objname; } ;
struct hlist_head {int dummy; } ;


 unsigned int VAR_0 ;
 struct hlist_head* VAR_1 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static struct hlist_head *FUNC_1(struct sockaddr_dn *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4 = VAR_2->sdn_objnum;

 if (VAR_4 == 0) {
  VAR_4 = VAR_2->sdn_objnamel;
  for(VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->sdn_objnamel); VAR_3++) {
   VAR_4 ^= VAR_2->sdn_objname[VAR_3];
   VAR_4 ^= (VAR_4 << 3);
  }
 }

 return &VAR_1[VAR_4 & VAR_0];
}
