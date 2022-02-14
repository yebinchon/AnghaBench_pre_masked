
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int dummy; } ;
typedef int kuid_t ;


 scalar_t__ FUNC_0 (int ,struct cred*) ;
 scalar_t__ FUNC_1 (int ,struct cred*,struct cred const*) ;
 scalar_t__ FUNC_2 (int ,int ,struct cred*) ;
 scalar_t__ FUNC_3 (int ,struct cred*) ;
 scalar_t__ FUNC_4 (int ,struct cred*) ;
 int FUNC_5 (struct cred*,struct cred const*) ;
 scalar_t__ FUNC_6 (int ,struct cred*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static inline bool FUNC_8(struct cred *VAR_3, const struct cred *VAR_4,
         kuid_t VAR_5, bool VAR_6)
{
 bool VAR_7 = 0;

 if ((FUNC_2(VAR_1, VAR_0, VAR_3) &&
      !(FUNC_0(VAR_1, VAR_3) &&
        (FUNC_3(VAR_5, VAR_3) || FUNC_4(VAR_5, VAR_3)) &&
        FUNC_7())) ||
     (FUNC_7() &&
      FUNC_6(VAR_5, VAR_3) &&
      !FUNC_0(VAR_1, VAR_3)) ||
     (!FUNC_5(VAR_3, VAR_4) &&
      ((VAR_6 &&
        FUNC_1(VAR_2, VAR_3, VAR_4)) ||
       FUNC_1(VAR_0, VAR_3, VAR_4))))

  VAR_7 = 1;

 return VAR_7;
}
