
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_recording {int snapshot_size; int evlist; int intel_pt_pmu; } ;


 size_t FUNC_0 (int ,int ) ;

__attribute__((used)) static size_t FUNC_1(struct intel_pt_recording *VAR_0,
          size_t VAR_1)
{
 const size_t VAR_2 = 256 * 1024;
 size_t VAR_3 = 0, VAR_4;

 if (VAR_0->snapshot_size <= 64 * 1024)
  return 0;

 VAR_4 = FUNC_0(VAR_0->intel_pt_pmu, VAR_0->evlist);
 if (VAR_4)
  VAR_3 = VAR_4 * 2;

 if (!VAR_3 || VAR_3 > VAR_2)
  VAR_3 = VAR_2;

 if (VAR_3 >= VAR_1)
  return 0;

 if (VAR_3 >= VAR_0->snapshot_size / 2)
  return 0;

 return VAR_3;
}
