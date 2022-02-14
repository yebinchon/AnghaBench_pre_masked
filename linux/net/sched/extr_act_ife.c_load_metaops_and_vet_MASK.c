
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_meta_ops {int owner; } ;


 int VAR_0 ;
 struct tcf_meta_ops* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tcf_meta_ops*,void*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(u32 VAR_1, void *VAR_2, int VAR_3, bool VAR_4)
{
 struct tcf_meta_ops *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = 0;

 if (!VAR_5) {
  VAR_6 = -VAR_0;
 }

 if (VAR_5) {
  VAR_6 = 0;
  if (VAR_3)
   VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_3);

  FUNC_3(VAR_5->owner);
 }

 return VAR_6;
}
