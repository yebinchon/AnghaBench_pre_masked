
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct ieee80211_he_obss_pd {scalar_t__ min_offset; scalar_t__ max_offset; int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct nlattr *VAR_5,
        struct ieee80211_he_obss_pd *VAR_6)
{
 struct nlattr *VAR_7[VAR_1 + 1];
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_1, VAR_5,
          VAR_4, ((void*)0));
 if (VAR_8)
  return VAR_8;

 if (!VAR_7[VAR_3] ||
     !VAR_7[VAR_2])
  return -VAR_0;

 VAR_6->min_offset =
  FUNC_0(VAR_7[VAR_3]);
 VAR_6->max_offset =
  FUNC_0(VAR_7[VAR_2]);

 if (VAR_6->min_offset >= VAR_6->max_offset)
  return -VAR_0;

 VAR_6->enable = 1;

 return 0;
}
