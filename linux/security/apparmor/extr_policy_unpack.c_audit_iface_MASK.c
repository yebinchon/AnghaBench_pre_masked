
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char const* hname; } ;
struct aa_profile {TYPE_2__ base; } ;
struct aa_ext {scalar_t__ start; scalar_t__ pos; } ;
struct TYPE_4__ {char const* ns; scalar_t__ pos; } ;
struct TYPE_6__ {char const* name; char const* info; int error; TYPE_1__ iface; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct aa_profile*,int *,int ) ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (int *) ;
 int VAR_2 ;
 struct aa_profile* FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct aa_profile *VAR_4, const char *VAR_5,
         const char *VAR_6, const char *VAR_7, struct aa_ext *VAR_8,
         int VAR_9)
{
 struct aa_profile *VAR_10 = FUNC_4(FUNC_2());
 FUNC_0(VAR_3, VAR_1, ((void*)0));
 if (VAR_8)
  FUNC_3(&VAR_3)->iface.pos = VAR_8->pos - VAR_8->start;
 FUNC_3(&VAR_3)->iface.ns = VAR_5;
 if (VAR_4)
  FUNC_3(&VAR_3)->name = VAR_4->base.hname;
 else
  FUNC_3(&VAR_3)->name = VAR_6;
 FUNC_3(&VAR_3)->info = VAR_7;
 FUNC_3(&VAR_3)->error = VAR_9;

 return FUNC_1(VAR_0, VAR_10, &VAR_3, VAR_2);
}
