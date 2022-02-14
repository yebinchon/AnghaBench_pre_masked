
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tomoyo_request_info {scalar_t__ mode; int profile; TYPE_1__* domain; int type; } ;
struct tomoyo_page_dump {unsigned char* data; } ;
struct tomoyo_execve {struct tomoyo_request_info r; struct linux_binprm* bprm; } ;
struct linux_binprm {unsigned long p; int argc; int envc; } ;
struct TYPE_2__ {int ns; int profile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct linux_binprm*,unsigned long,struct tomoyo_page_dump*) ;
 scalar_t__ FUNC_3 (struct tomoyo_request_info*,char*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct tomoyo_execve *VAR_7)
{
 struct tomoyo_request_info *VAR_8 = &VAR_7->r;
 struct linux_binprm *VAR_9 = VAR_7->bprm;

 struct tomoyo_page_dump VAR_10 = { };
 char *VAR_11;
 int VAR_12 = 0;
 unsigned long VAR_13 = VAR_9->p;
 int VAR_14 = VAR_13 % VAR_3;
 int VAR_15 = VAR_9->argc;
 int VAR_16 = VAR_9->envc;
 int VAR_17 = -VAR_0;

 VAR_7->r.type = VAR_6;
 VAR_7->r.profile = VAR_8->domain->profile;
 VAR_7->r.mode = FUNC_4(VAR_8->domain->ns, VAR_7->r.profile,
         VAR_6);
 if (!VAR_8->mode || !VAR_16)
  return 0;
 VAR_11 = FUNC_1(VAR_5, VAR_2);
 if (!VAR_11)
  goto out;
 while (VAR_17 == -VAR_0) {
  if (!FUNC_2(VAR_9, VAR_13, &VAR_10))
   goto out;
  VAR_13 += VAR_3 - VAR_14;

  while (VAR_15 && VAR_14 < VAR_3) {
   if (!VAR_10.data[VAR_14++])
    VAR_15--;
  }
  if (VAR_15) {
   VAR_14 = 0;
   continue;
  }
  while (VAR_14 < VAR_3) {
   const unsigned char VAR_18 = VAR_10.data[VAR_14++];

   if (VAR_18 && VAR_12 < VAR_5 - 10) {
    if (VAR_18 == '=') {
     VAR_11[VAR_12++] = '\0';
    } else if (VAR_18 == '\\') {
     VAR_11[VAR_12++] = '\\';
     VAR_11[VAR_12++] = '\\';
    } else if (VAR_18 > ' ' && VAR_18 < 127) {
     VAR_11[VAR_12++] = VAR_18;
    } else {
     VAR_11[VAR_12++] = '\\';
     VAR_11[VAR_12++] = (VAR_18 >> 6) + '0';
     VAR_11[VAR_12++]
      = ((VAR_18 >> 3) & 7) + '0';
     VAR_11[VAR_12++] = (VAR_18 & 7) + '0';
    }
   } else {
    VAR_11[VAR_12] = '\0';
   }
   if (VAR_18)
    continue;
   if (FUNC_3(VAR_8, VAR_11)) {
    VAR_17 = -VAR_1;
    break;
   }
   if (!--VAR_16) {
    VAR_17 = 0;
    break;
   }
   VAR_12 = 0;
  }
  VAR_14 = 0;
 }
out:
 if (VAR_8->mode != VAR_4)
  VAR_17 = 0;
 FUNC_0(VAR_10.data);
 FUNC_0(VAR_11);
 return VAR_17;
}
