
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; unsigned int* list; } ;
struct sigmadsp {TYPE_1__ rate_constraints; } ;
struct sigma_fw_chunk_samplerate {int * samplerates; } ;
struct sigma_fw_chunk {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int* FUNC_0 (unsigned int,int,int ) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sigmadsp *VAR_3,
 const struct sigma_fw_chunk *VAR_4, unsigned int VAR_5)
{
 const struct sigma_fw_chunk_samplerate *VAR_6;
 unsigned int VAR_7;
 unsigned int *VAR_8;
 unsigned int VAR_9;

 VAR_6 = (const struct sigma_fw_chunk_samplerate *)VAR_4;

 VAR_7 = (VAR_5 - sizeof(*VAR_6)) / sizeof(__le32);

 if (VAR_7 > 32 || VAR_7 == 0)
  return -VAR_0;


 if (VAR_3->rate_constraints.count)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_7, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  VAR_8[VAR_9] = FUNC_1(VAR_6->samplerates[VAR_9]);

 VAR_3->rate_constraints.count = VAR_7;
 VAR_3->rate_constraints.list = VAR_8;

 return 0;
}
