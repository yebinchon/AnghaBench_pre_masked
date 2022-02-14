
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct obs_source_frame {size_t* linesize; int * data; } ;


 int FUNC_0 (struct obs_source_frame*,struct obs_source_frame const*,size_t,size_t) ;
 int FUNC_1 (int ,int ,size_t) ;

__attribute__((used)) static inline void FUNC_2(struct obs_source_frame *VAR_0,
      const struct obs_source_frame *VAR_1,
      uint32_t VAR_2, uint32_t VAR_3)
{
 if (VAR_0->linesize[VAR_2] != VAR_1->linesize[VAR_2])
  for (uint32_t VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
 else
  FUNC_1(VAR_0->data[VAR_2], VAR_1->data[VAR_2],
         VAR_0->linesize[VAR_2] * VAR_3);
}
