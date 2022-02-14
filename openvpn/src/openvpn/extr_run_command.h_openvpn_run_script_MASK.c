
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_set {int dummy; } ;
struct argv {int dummy; } ;
typedef int msg ;


 unsigned int const VAR_0 ;
 int FUNC_0 (struct argv const*,struct env_set const*,unsigned int const,char*) ;
 int FUNC_1 (char*,int,char*,char const*) ;

__attribute__((used)) static inline bool
FUNC_2(const struct argv *VAR_1, const struct env_set *VAR_2,
                   const unsigned int VAR_3, const char *VAR_4)
{
    char VAR_5[256];

    FUNC_1(VAR_5, sizeof(VAR_5),
                     "WARNING: Failed running command (%s)", VAR_4);
    return FUNC_0(VAR_1, VAR_2, VAR_3 | VAR_0, VAR_5);
}
