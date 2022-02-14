
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct obs_data_item {int dummy; } ;
struct media_frames_per_second {void* denominator; void* numerator; } ;
typedef int obs_data_t ;


 scalar_t__ FUNC_0 (long long,int ,long long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,char const**) ;
 int FUNC_2 (struct media_frames_per_second) ;
 struct obs_data_item* FUNC_3 (int *,char*) ;
 long long FUNC_4 (struct obs_data_item*) ;
 int FUNC_5 (struct obs_data_item**) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline bool FUNC_7(obs_data_t *VAR_1,
      struct media_frames_per_second *VAR_2,
      const char **VAR_3)
{
 if (!VAR_1)
  return 0;

 if (FUNC_1(VAR_1, VAR_3))
  return 1;

 if (!VAR_2)
  goto free;

 struct obs_data_item *VAR_4 = FUNC_3(VAR_1, "numerator");
 struct obs_data_item *VAR_5 = FUNC_3(VAR_1, "denominator");
 if (!VAR_4 || !VAR_5) {
  FUNC_5(&VAR_4);
  FUNC_5(&VAR_5);
  goto free;
 }

 long long VAR_6 = FUNC_4(VAR_4);
 long long VAR_7 = FUNC_4(VAR_5);

 VAR_2->numerator = (uint32_t)FUNC_0(VAR_6, 0, (long long)VAR_0);
 VAR_2->denominator = (uint32_t)FUNC_0(VAR_7, 0, (long long)VAR_0);

 FUNC_5(&VAR_4);
 FUNC_5(&VAR_5);

 FUNC_6(VAR_1);

 return FUNC_2(*VAR_2);

free:
 FUNC_6(VAR_1);
 return 0;
}
