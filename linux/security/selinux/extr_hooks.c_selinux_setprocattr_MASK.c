
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct task_security_struct {scalar_t__ sid; scalar_t__ sockcreate_sid; scalar_t__ keycreate_sid; scalar_t__ create_sid; scalar_t__ exec_sid; } ;
struct cred {int dummy; } ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct cred*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct audit_buffer*) ;
 int FUNC_3 (struct audit_buffer*,char*) ;
 int FUNC_4 (struct audit_buffer*,void*,size_t) ;
 struct audit_buffer* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__,int ,int ,int *) ;
 int FUNC_7 (struct cred*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int) ;
 struct cred* FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int *,scalar_t__,scalar_t__) ;
 int FUNC_14 (int *,void*,size_t,scalar_t__*,int ) ;
 int FUNC_15 (int *,void*,size_t,scalar_t__*) ;
 struct task_security_struct* FUNC_16 (struct cred*) ;
 int VAR_16 ;
 int FUNC_17 (char const*,char*) ;

__attribute__((used)) static int FUNC_18(const char *VAR_17, void *VAR_18, size_t VAR_19)
{
 struct task_security_struct *VAR_20;
 struct cred *VAR_21;
 u32 VAR_22 = FUNC_9(), VAR_23 = 0, VAR_24;
 int VAR_25;
 char *VAR_26 = VAR_18;




 if (!FUNC_17(VAR_17, "exec"))
  VAR_25 = FUNC_6(&VAR_16,
         VAR_22, VAR_22, VAR_15,
         VAR_10, ((void*)0));
 else if (!FUNC_17(VAR_17, "fscreate"))
  VAR_25 = FUNC_6(&VAR_16,
         VAR_22, VAR_22, VAR_15,
         VAR_11, ((void*)0));
 else if (!FUNC_17(VAR_17, "keycreate"))
  VAR_25 = FUNC_6(&VAR_16,
         VAR_22, VAR_22, VAR_15,
         VAR_12, ((void*)0));
 else if (!FUNC_17(VAR_17, "sockcreate"))
  VAR_25 = FUNC_6(&VAR_16,
         VAR_22, VAR_22, VAR_15,
         VAR_13, ((void*)0));
 else if (!FUNC_17(VAR_17, "current"))
  VAR_25 = FUNC_6(&VAR_16,
         VAR_22, VAR_22, VAR_15,
         VAR_9, ((void*)0));
 else
  VAR_25 = -VAR_1;
 if (VAR_25)
  return VAR_25;


 if (VAR_19 && VAR_26[0] && VAR_26[0] != '\n') {
  if (VAR_26[VAR_19-1] == '\n') {
   VAR_26[VAR_19-1] = 0;
   VAR_19--;
  }
  VAR_25 = FUNC_14(&VAR_16, VAR_18, VAR_19,
      &VAR_23, VAR_5);
  if (VAR_25 == -VAR_1 && !FUNC_17(VAR_17, "fscreate")) {
   if (!FUNC_10(1)) {
    struct audit_buffer *VAR_27;
    size_t VAR_28;



    if (VAR_26[VAR_19 - 1] == '\0')
     VAR_28 = VAR_19 - 1;
    else
     VAR_28 = VAR_19;
    VAR_27 = FUNC_5(FUNC_1(),
           VAR_4,
           VAR_0);
    FUNC_3(VAR_27, "op=fscreate invalid_context=");
    FUNC_4(VAR_27, VAR_18, VAR_28);
    FUNC_2(VAR_27);

    return VAR_25;
   }
   VAR_25 = FUNC_15(
            &VAR_16,
            VAR_18, VAR_19, &VAR_23);
  }
  if (VAR_25)
   return VAR_25;
 }

 VAR_21 = FUNC_11();
 if (!VAR_21)
  return -VAR_2;







 VAR_20 = FUNC_16(VAR_21);
 if (!FUNC_17(VAR_17, "exec")) {
  VAR_20->exec_sid = VAR_23;
 } else if (!FUNC_17(VAR_17, "fscreate")) {
  VAR_20->create_sid = VAR_23;
 } else if (!FUNC_17(VAR_17, "keycreate")) {
  if (VAR_23) {
   VAR_25 = FUNC_6(&VAR_16, VAR_22, VAR_23,
          VAR_14, VAR_6, ((void*)0));
   if (VAR_25)
    goto abort_change;
  }
  VAR_20->keycreate_sid = VAR_23;
 } else if (!FUNC_17(VAR_17, "sockcreate")) {
  VAR_20->sockcreate_sid = VAR_23;
 } else if (!FUNC_17(VAR_17, "current")) {
  VAR_25 = -VAR_1;
  if (VAR_23 == 0)
   goto abort_change;


  VAR_25 = -VAR_3;
  if (!FUNC_8()) {
   VAR_25 = FUNC_13(&VAR_16,
           VAR_20->sid, VAR_23);
   if (VAR_25)
    goto abort_change;
  }


  VAR_25 = FUNC_6(&VAR_16,
         VAR_20->sid, VAR_23, VAR_15,
         VAR_7, ((void*)0));
  if (VAR_25)
   goto abort_change;



  VAR_24 = FUNC_12();
  if (VAR_24 != 0) {
   VAR_25 = FUNC_6(&VAR_16,
          VAR_24, VAR_23, VAR_15,
          VAR_8, ((void*)0));
   if (VAR_25)
    goto abort_change;
  }

  VAR_20->sid = VAR_23;
 } else {
  VAR_25 = -VAR_1;
  goto abort_change;
 }

 FUNC_7(VAR_21);
 return VAR_19;

abort_change:
 FUNC_0(VAR_21);
 return VAR_25;
}
