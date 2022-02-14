
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strlist {int dummy; } ;
struct machines {int dummy; } ;
struct machine {scalar_t__ pid; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {char* guestmount; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 struct machine* FUNC_1 (struct machines*,scalar_t__,char const*) ;
 struct machine* FUNC_2 (struct machines*,scalar_t__) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,char*,scalar_t__) ;
 int FUNC_5 (struct strlist*,char*) ;
 int FUNC_6 (struct strlist*,char*) ;
 struct strlist* FUNC_7 (int *,int *) ;
 TYPE_1__ VAR_4 ;

struct machine *FUNC_8(struct machines *VAR_5, pid_t VAR_6)
{
 char VAR_7[VAR_2];
 const char *VAR_8 = "";
 struct machine *VAR_9 = FUNC_2(VAR_5, VAR_6);

 if (VAR_9 && (VAR_9->pid == VAR_6))
  goto out;

 if ((VAR_6 != VAR_1) &&
     (VAR_6 != VAR_0) &&
     (VAR_4.guestmount)) {
  FUNC_4(VAR_7, "%s/%d", VAR_4.guestmount, VAR_6);
  if (FUNC_0(VAR_7, VAR_3)) {
   static struct strlist *VAR_10;

   if (!VAR_10)
    VAR_10 = FUNC_7(((void*)0), ((void*)0));

   if (!FUNC_6(VAR_10, VAR_7)) {
    FUNC_3("Can't access file %s\n", VAR_7);
    FUNC_5(VAR_10, VAR_7);
   }
   VAR_9 = ((void*)0);
   goto out;
  }
  VAR_8 = VAR_7;
 }

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_8);
out:
 return VAR_9;
}
