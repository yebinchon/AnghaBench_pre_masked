
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* media_remux_job_t ;
struct TYPE_3__ {int ifmt_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char const*,int *,int *) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static inline bool FUNC_4(media_remux_job_t VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_2(&VAR_1->ifmt_ctx, VAR_2, ((void*)0), ((void*)0));
 if (VAR_3 < 0) {
  FUNC_3(VAR_0, "media_remux: Could not open input file '%s'",
       VAR_2);
  return 0;
 }

 VAR_3 = FUNC_1(VAR_1->ifmt_ctx, ((void*)0));
 if (VAR_3 < 0) {
  FUNC_3(VAR_0, "media_remux: Failed to retrieve input stream"
    " information");
  return 0;
 }


 FUNC_0(VAR_1->ifmt_ctx, 0, VAR_2, 0);

 return 1;
}
