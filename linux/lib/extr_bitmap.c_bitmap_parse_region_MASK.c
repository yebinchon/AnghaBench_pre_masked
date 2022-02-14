
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct region {scalar_t__ end; scalar_t__ group_len; scalar_t__ off; scalar_t__ start; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*) ;
 char const* FUNC_2 (char const*,scalar_t__*) ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;

__attribute__((used)) static const char *FUNC_5(const char *VAR_1, struct region *VAR_2)
{
 VAR_1 = FUNC_2(VAR_1, &VAR_2->start);
 if (FUNC_1(VAR_1))
  return VAR_1;

 if (FUNC_3(*VAR_1))
  goto no_end;

 if (*VAR_1 != '-')
  return FUNC_0(-VAR_0);

 VAR_1 = FUNC_2(VAR_1 + 1, &VAR_2->end);
 if (FUNC_1(VAR_1))
  return VAR_1;

 if (FUNC_3(*VAR_1))
  goto no_pattern;

 if (*VAR_1 != ':')
  return FUNC_0(-VAR_0);

 VAR_1 = FUNC_2(VAR_1 + 1, &VAR_2->off);
 if (FUNC_1(VAR_1))
  return VAR_1;

 if (*VAR_1 != '/')
  return FUNC_0(-VAR_0);

 return FUNC_2(VAR_1 + 1, &VAR_2->group_len);

no_end:
 VAR_2->end = VAR_2->start;
no_pattern:
 VAR_2->off = VAR_2->end + 1;
 VAR_2->group_len = VAR_2->end + 1;

 return FUNC_4(*VAR_1) ? ((void*)0) : VAR_1;
}
