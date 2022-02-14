
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nf_conntrack_helper {int me; int refcnt; } ;


 struct nf_conntrack_helper* FUNC_0 (char const*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 int FUNC_6 (int ) ;

struct nf_conntrack_helper *
FUNC_7(const char *VAR_0, u16 VAR_1, u8 VAR_2)
{
 struct nf_conntrack_helper *VAR_3;

 FUNC_2();

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 != ((void*)0) && !FUNC_6(VAR_3->me))
  VAR_3 = ((void*)0);
 if (VAR_3 != ((void*)0) && !FUNC_4(&VAR_3->refcnt)) {
  FUNC_1(VAR_3->me);
  VAR_3 = ((void*)0);
 }

 FUNC_3();

 return VAR_3;
}
