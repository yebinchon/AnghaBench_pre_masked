
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct file {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_2 (struct cred const*) ;
 struct cred* FUNC_3 () ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct cred const*,struct file*,int ) ;
 int FUNC_5 (struct file*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct file *VAR_9, unsigned long VAR_10, int VAR_11)
{
 const struct cred *VAR_12 = FUNC_3();
 u32 VAR_13 = FUNC_2(VAR_12);
 int VAR_14 = 0;

 if (VAR_7 &&
     (VAR_10 & VAR_4) && (!VAR_9 || FUNC_0(FUNC_5(VAR_9)) ||
       (!VAR_11 && (VAR_10 & VAR_5)))) {





  VAR_14 = FUNC_1(&VAR_8,
      VAR_13, VAR_13, VAR_6,
      VAR_3, ((void*)0));
  if (VAR_14)
   goto error;
 }

 if (VAR_9) {

  u32 VAR_15 = VAR_1;


  if (VAR_11 && (VAR_10 & VAR_5))
   VAR_15 |= VAR_2;

  if (VAR_10 & VAR_4)
   VAR_15 |= VAR_0;

  return FUNC_4(VAR_12, VAR_9, VAR_15);
 }

error:
 return VAR_14;
}
