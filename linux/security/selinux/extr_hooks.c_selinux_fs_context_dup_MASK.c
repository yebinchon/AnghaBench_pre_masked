
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinux_mnt_opts {void* defcontext; void* rootcontext; void* context; void* fscontext; } ;
struct fs_context {struct selinux_mnt_opts* security; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int ) ;
 struct selinux_mnt_opts* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_2,
      struct fs_context *VAR_3)
{
 const struct selinux_mnt_opts *VAR_4 = VAR_3->security;
 struct selinux_mnt_opts *VAR_5;

 if (!VAR_4)
  return 0;

 VAR_2->security = FUNC_1(sizeof(struct selinux_mnt_opts), VAR_1);
 if (!VAR_2->security)
  return -VAR_0;

 VAR_5 = VAR_2->security;

 if (VAR_4->fscontext) {
  VAR_5->fscontext = FUNC_0(VAR_4->fscontext, VAR_1);
  if (!VAR_5->fscontext)
   return -VAR_0;
 }
 if (VAR_4->context) {
  VAR_5->context = FUNC_0(VAR_4->context, VAR_1);
  if (!VAR_5->context)
   return -VAR_0;
 }
 if (VAR_4->rootcontext) {
  VAR_5->rootcontext = FUNC_0(VAR_4->rootcontext, VAR_1);
  if (!VAR_5->rootcontext)
   return -VAR_0;
 }
 if (VAR_4->defcontext) {
  VAR_5->defcontext = FUNC_0(VAR_4->defcontext, VAR_1);
  if (!VAR_5->defcontext)
   return -VAR_0;
 }
 return 0;
}
