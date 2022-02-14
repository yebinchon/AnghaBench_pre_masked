
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* hname; } ;
struct TYPE_3__ {int dfa; } ;
struct aa_profile {scalar_t__ ns; TYPE_2__ base; TYPE_1__ file; } ;


 unsigned int FUNC_0 (int ,unsigned int,char const*) ;
 unsigned int FUNC_1 (int ,unsigned int,char*,int) ;
 char* FUNC_2 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct aa_profile *VAR_0,
        struct aa_profile *VAR_1,
        bool VAR_2, unsigned int VAR_3)
{
 const char *VAR_4;

 if (VAR_2)
  VAR_3 = FUNC_0(VAR_0->file.dfa, VAR_3, "&");
 if (VAR_0->ns == VAR_1->ns)
  return FUNC_0(VAR_0->file.dfa, VAR_3, VAR_1->base.hname);


 VAR_4 = FUNC_2(VAR_0->ns, VAR_1->ns, 1);
 VAR_3 = FUNC_1(VAR_0->file.dfa, VAR_3, ":", 1);
 VAR_3 = FUNC_0(VAR_0->file.dfa, VAR_3, VAR_4);
 VAR_3 = FUNC_1(VAR_0->file.dfa, VAR_3, ":", 1);
 return FUNC_0(VAR_0->file.dfa, VAR_3, VAR_1->base.hname);
}
