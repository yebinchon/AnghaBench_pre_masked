
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_size; int member_0; } ;
struct _stat64 {int member_0; } ;
typedef TYPE_1__* media_remux_job_t ;
struct TYPE_3__ {int in_size; } ;


 int FUNC_0 (char const*,struct _stat64*) ;
 int FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static inline void FUNC_2(media_remux_job_t VAR_0, const char *VAR_1)
{




 struct stat VAR_2 = {0};
 FUNC_1(VAR_1, &VAR_2);

 VAR_0->in_size = VAR_2.st_size;
}
