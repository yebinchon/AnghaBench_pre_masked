
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct aa_label {int dummy; } ;


 struct aa_label* FUNC_0 () ;
 int FUNC_1 (struct aa_label*) ;
 int FUNC_2 (struct aa_label*,struct vfsmount*,int) ;
 int FUNC_3 (struct aa_label*) ;

__attribute__((used)) static int FUNC_4(struct vfsmount *VAR_0, int VAR_1)
{
 struct aa_label *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_0();
 if (!FUNC_3(VAR_2))
  VAR_3 = FUNC_2(VAR_2, VAR_0, VAR_1);
 FUNC_1(VAR_2);

 return VAR_3;
}
