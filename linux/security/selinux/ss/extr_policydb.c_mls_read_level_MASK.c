
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mls_level {int cat; int sens; } ;
typedef int __le32 ;


 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mls_level*,int ,int) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct mls_level *VAR_0, void *VAR_1)
{
 __le32 VAR_2[1];
 int VAR_3;

 FUNC_2(VAR_0, 0, sizeof(*VAR_0));

 VAR_3 = FUNC_3(VAR_2, VAR_1, sizeof VAR_2);
 if (VAR_3) {
  FUNC_4("SELinux: mls: truncated level\n");
  return VAR_3;
 }
 VAR_0->sens = FUNC_1(VAR_2[0]);

 VAR_3 = FUNC_0(&VAR_0->cat, VAR_1);
 if (VAR_3) {
  FUNC_4("SELinux: mls:  error reading level categories\n");
  return VAR_3;
 }
 return 0;
}
