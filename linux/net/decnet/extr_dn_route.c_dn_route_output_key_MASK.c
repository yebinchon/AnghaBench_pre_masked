
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowidn {scalar_t__ flowidn_proto; } ;
struct dst_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;
 int FUNC_2 (struct dst_entry**,struct flowidn*,int) ;
 int FUNC_3 (struct flowidn*) ;
 int VAR_0 ;
 struct dst_entry* FUNC_4 (int *,struct dst_entry*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct dst_entry **VAR_1, struct flowidn *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == 0 && VAR_2->flowidn_proto) {
  *VAR_1 = FUNC_4(&VAR_0, *VAR_1,
        FUNC_3(VAR_2), ((void*)0), 0);
  if (FUNC_0(*VAR_1)) {
   VAR_4 = FUNC_1(*VAR_1);
   *VAR_1 = ((void*)0);
  }
 }
 return VAR_4;
}
