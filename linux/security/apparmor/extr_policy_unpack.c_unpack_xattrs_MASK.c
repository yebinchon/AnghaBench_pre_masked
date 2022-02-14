
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int xattr_count; int * xattrs; } ;
struct aa_ext {void* pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct aa_ext*,int *) ;
 scalar_t__ FUNC_2 (struct aa_ext*,int ,char*) ;
 int FUNC_3 (struct aa_ext*,int *,int *) ;

__attribute__((used)) static bool FUNC_4(struct aa_ext *VAR_4, struct aa_profile *VAR_5)
{
 void *VAR_6 = VAR_4->pos;

 if (FUNC_2(VAR_4, VAR_1, "xattrs")) {
  int VAR_7, VAR_8;

  VAR_8 = FUNC_1(VAR_4, ((void*)0));
  VAR_5->xattr_count = VAR_8;
  VAR_5->xattrs = FUNC_0(VAR_8, sizeof(char *), VAR_3);
  if (!VAR_5->xattrs)
   goto fail;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   if (!FUNC_3(VAR_4, &VAR_5->xattrs[VAR_7], ((void*)0)))
    goto fail;
  }
  if (!FUNC_2(VAR_4, VAR_0, ((void*)0)))
   goto fail;
  if (!FUNC_2(VAR_4, VAR_2, ((void*)0)))
   goto fail;
 }

 return 1;

fail:
 VAR_4->pos = VAR_6;
 return 0;
}
