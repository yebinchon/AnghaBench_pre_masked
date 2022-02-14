
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int uint32_t ;
struct msghdr {int dummy; } ;
struct cmsghdr {int dummy; } ;
struct TYPE_5__ {int has_error; } ;
struct TYPE_6__ {int keys; TYPE_1__ err; } ;
typedef TYPE_2__ res_context ;
typedef int buf ;


 struct cmsghdr* FUNC_0 (struct msghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char*,int,char*,unsigned int) ;
 int FUNC_7 (char const*,int *,TYPE_2__*) ;
 int * FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,char**) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(const char *VAR_0, zval *VAR_1, res_context *VAR_2)
{
 struct msghdr *VAR_3 = (struct msghdr *)VAR_0;
 struct cmsghdr *VAR_4;
 char VAR_5[sizeof("element #4294967295")];
 char *VAR_6 = VAR_5;
 uint32_t VAR_7 = 1;

 FUNC_4(VAR_1);

 for (VAR_4 = FUNC_0(VAR_3);
   VAR_4 != ((void*)0) && !VAR_2->err.has_error;
   VAR_4 = FUNC_1(VAR_3, VAR_4)) {
  zval *VAR_8, VAR_9;

  FUNC_2(&VAR_9);
  VAR_8 = FUNC_8(FUNC_3(VAR_1), &VAR_9);

  if ((size_t)FUNC_6(VAR_5, sizeof(VAR_5), "element #%u", (unsigned)VAR_7++) >= sizeof(VAR_5)) {
   FUNC_5(VAR_5, "element", sizeof("element"));
  }
  FUNC_9(&VAR_2->keys, &VAR_6);

  FUNC_7((const char *)VAR_4, VAR_8, VAR_2);

  FUNC_10(&VAR_2->keys);
 }
}
