
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_frame {int * linesize; int * data; int full_range; int format; } ;
typedef int gs_texture_t ;
 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(gs_texture_t *VAR_1[VAR_0],
        const struct obs_source_frame *VAR_2)
{
 switch (FUNC_1(VAR_2->format, VAR_2->full_range)) {
 case 136:
 case 132:
 case 128:
 case 131:
 case 140:
 case 138:
 case 129:
 case 135:
 case 139:
 case 137:
 case 134:
 case 133:
  for (size_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if (VAR_1[VAR_3])
    FUNC_2(VAR_1[VAR_3], VAR_2->data[VAR_3],
           VAR_2->linesize[VAR_3], 0);
  }
  break;

 case 130:
  FUNC_0(0 && "No conversion requested");
  break;
 }
}
