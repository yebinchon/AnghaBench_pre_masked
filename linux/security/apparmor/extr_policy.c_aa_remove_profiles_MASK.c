
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* hname; } ;
struct aa_profile {TYPE_2__ base; } ;
struct aa_ns {int lock; int base; int level; TYPE_1__* parent; } ;
struct aa_label {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {int lock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aa_ns*) ;
 int FUNC_1 (struct aa_ns*) ;
 int FUNC_2 (struct aa_ns*) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (struct aa_profile*) ;
 struct aa_ns* FUNC_5 (struct aa_ns*) ;
 struct aa_profile* FUNC_6 (int ) ;
 struct aa_ns* FUNC_7 (struct aa_ns*,char const*,size_t) ;
 int FUNC_8 (struct aa_ns*) ;
 int FUNC_9 (struct aa_profile*) ;
 char* FUNC_10 (char*,size_t,char const**,size_t*) ;
 int FUNC_11 (struct aa_label*,int ,char const*,char const*,char const*,size_t) ;
 struct aa_ns* FUNC_12 (struct aa_label*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;

ssize_t FUNC_15(struct aa_ns *VAR_2, struct aa_label *VAR_3,
      char *VAR_4, size_t VAR_5)
{
 struct aa_ns *VAR_6 = ((void*)0);
 struct aa_profile *VAR_7 = ((void*)0);
 const char *VAR_8 = VAR_4, *VAR_9 = ((void*)0);
 const char *VAR_10 = ((void*)0);
 ssize_t VAR_11 = 0;

 if (*VAR_4 == 0) {
  VAR_9 = "no profile specified";
  VAR_11 = -VAR_0;
  goto fail;
 }

 if (VAR_4[0] == ':') {
  size_t VAR_12;

  VAR_8 = FUNC_10(VAR_4, VAR_5, &VAR_10, &VAR_12);

  VAR_6 = FUNC_7(VAR_2 ? VAR_2 : FUNC_12(VAR_3),
       VAR_10, VAR_12);
  if (!VAR_6) {
   VAR_9 = "namespace does not exist";
   VAR_11 = -VAR_0;
   goto fail;
  }
 } else

  VAR_6 = FUNC_5(VAR_2 ? VAR_2 : FUNC_12(VAR_3));

 if (!VAR_8) {

  FUNC_13(&VAR_6->parent->lock, VAR_6->level);
  FUNC_2(VAR_6);
  FUNC_0(VAR_6);
  FUNC_14(&VAR_6->parent->lock);
 } else {

  FUNC_13(&VAR_6->lock, VAR_6->level);
  VAR_7 = FUNC_6(FUNC_3(&VAR_6->base, VAR_8));
  if (!VAR_7) {
   VAR_11 = -VAR_0;
   VAR_9 = "profile does not exist";
   goto fail_ns_lock;
  }
  VAR_8 = VAR_7->base.hname;
  FUNC_4(VAR_7);
  FUNC_1(VAR_6);
  FUNC_0(VAR_6);
  FUNC_14(&VAR_6->lock);
 }


 (void) FUNC_11(VAR_3, VAR_1, VAR_10, VAR_8, VAR_9,
       VAR_11);
 FUNC_8(VAR_6);
 FUNC_9(VAR_7);
 return VAR_5;

fail_ns_lock:
 FUNC_14(&VAR_6->lock);
 FUNC_8(VAR_6);

fail:
 (void) FUNC_11(VAR_3, VAR_1, VAR_10, VAR_8, VAR_9,
       VAR_11);
 return VAR_11;
}
