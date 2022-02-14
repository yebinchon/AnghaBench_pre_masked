
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smack_mnt_opts {void* fstransmute; void* fsroot; void* fshat; void* fsfloor; void* fsdefault; } ;
struct fs_context {struct smack_mnt_opts* security; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int ) ;
 struct smack_mnt_opts* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_2,
    struct fs_context *VAR_3)
{
 struct smack_mnt_opts *VAR_4, *VAR_5 = VAR_3->security;

 if (!VAR_5)
  return 0;

 VAR_2->security = FUNC_1(sizeof(struct smack_mnt_opts), VAR_1);
 if (!VAR_2->security)
  return -VAR_0;
 VAR_4 = VAR_2->security;

 if (VAR_5->fsdefault) {
  VAR_4->fsdefault = FUNC_0(VAR_5->fsdefault, VAR_1);
  if (!VAR_4->fsdefault)
   return -VAR_0;
 }
 if (VAR_5->fsfloor) {
  VAR_4->fsfloor = FUNC_0(VAR_5->fsfloor, VAR_1);
  if (!VAR_4->fsfloor)
   return -VAR_0;
 }
 if (VAR_5->fshat) {
  VAR_4->fshat = FUNC_0(VAR_5->fshat, VAR_1);
  if (!VAR_4->fshat)
   return -VAR_0;
 }
 if (VAR_5->fsroot) {
  VAR_4->fsroot = FUNC_0(VAR_5->fsroot, VAR_1);
  if (!VAR_4->fsroot)
   return -VAR_0;
 }
 if (VAR_5->fstransmute) {
  VAR_4->fstransmute = FUNC_0(VAR_5->fstransmute, VAR_1);
  if (!VAR_4->fstransmute)
   return -VAR_0;
 }
 return 0;
}
