
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aa_label {int dummy; } ;
struct TYPE_3__ {char const* ns; } ;
struct TYPE_4__ {char const* name; char const* info; int error; struct aa_label* label; TYPE_1__ iface; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct aa_label *VAR_4, const char *VAR_5,
   const char *VAR_6, const char *VAR_7,
   const char *VAR_8, int VAR_9)
{
 FUNC_0(VAR_3, VAR_1, VAR_5);

 FUNC_2(&VAR_3)->iface.ns = VAR_6;
 FUNC_2(&VAR_3)->name = VAR_7;
 FUNC_2(&VAR_3)->info = VAR_8;
 FUNC_2(&VAR_3)->error = VAR_9;
 FUNC_2(&VAR_3)->label = VAR_4;

 FUNC_1(VAR_0, &VAR_3, VAR_2);

 return VAR_9;
}
