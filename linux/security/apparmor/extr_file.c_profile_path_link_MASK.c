
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path_cond {int uid; } ;
struct path {int dummy; } ;
struct TYPE_2__ {unsigned int start; int dfa; } ;
struct aa_profile {TYPE_1__ file; int path_flags; int label; } ;
struct aa_perms {int allow; int xindex; int kill; int quiet; int audit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aa_profile*,struct aa_perms*,int ,int,char const*,char const*,int *,int ,char const*,int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (int ,unsigned int,char const*,struct path_cond*,struct aa_perms*) ;
 int FUNC_3 (int ,int *,struct path const*,int ,char*,char const**,struct path_cond*,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct aa_profile *VAR_6,
        const struct path *VAR_7, char *VAR_8,
        const struct path *VAR_9, char *VAR_10,
        struct path_cond *VAR_11)
{
 const char *VAR_12, *VAR_13 = ((void*)0);
 struct aa_perms VAR_14 = {}, VAR_15;
 const char *VAR_16 = ((void*)0);
 u32 VAR_17 = VAR_2;
 unsigned int VAR_18;
 int VAR_19;

 VAR_19 = FUNC_3(VAR_5, &VAR_6->label, VAR_7, VAR_6->path_flags,
     VAR_8, &VAR_12, VAR_11, VAR_2);
 if (VAR_19)
  goto audit;


 VAR_19 = FUNC_3(VAR_5, &VAR_6->label, VAR_9, VAR_6->path_flags,
     VAR_10, &VAR_13, VAR_11, VAR_2);
 if (VAR_19)
  goto audit;

 VAR_19 = -VAR_3;

 VAR_18 = FUNC_2(VAR_6->file.dfa, VAR_6->file.start, VAR_12,
        VAR_11, &VAR_14);

 if (!(VAR_14.allow & VAR_2))
  goto audit;


 VAR_18 = FUNC_1(VAR_6->file.dfa, VAR_18);
 FUNC_2(VAR_6->file.dfa, VAR_18, VAR_13, VAR_11, &VAR_15);




 VAR_14.audit = VAR_15.audit;
 VAR_14.quiet = VAR_15.quiet;
 VAR_14.kill = VAR_15.kill;

 if (!(VAR_15.allow & VAR_2)) {
  VAR_16 = "target restricted";
  VAR_14 = VAR_15;
  goto audit;
 }


 if (!(VAR_15.allow & VAR_1))
  goto done_tests;




 FUNC_2(VAR_6->file.dfa, VAR_6->file.start, VAR_13, VAR_11,
       &VAR_15);


 VAR_17 = VAR_14.allow & ~VAR_2;
 VAR_14.allow &= VAR_15.allow | VAR_2;

 VAR_17 |= VAR_0 & (VAR_14.allow & ~VAR_15.allow);
 if (VAR_17 & ~VAR_14.allow) {
  goto audit;
 } else if ((VAR_14.allow & VAR_4) &&
     !FUNC_4(VAR_14.xindex, VAR_15.xindex)) {
  VAR_14.allow &= ~VAR_4;
  VAR_17 |= VAR_4;
  VAR_16 = "link not subset of target";
  goto audit;
 }

done_tests:
 VAR_19 = 0;

audit:
 return FUNC_0(VAR_6, &VAR_14, VAR_5, VAR_17, VAR_12, VAR_13,
        ((void*)0), VAR_11->uid, VAR_16, VAR_19);
}
