
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct outbuffer {int fill; size_t size; scalar_t__ data; } ;
typedef size_t ssize_t ;
typedef scalar_t__ int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct outbuffer *VAR_2)
{
 ssize_t VAR_3;
 int16_t *VAR_4 = (int16_t*) VAR_2->data;
 float *VAR_5 = (float*) VAR_2->data;
 size_t VAR_6 = VAR_2->fill/sizeof(int16_t);



 float VAR_7 = 1./VAR_0;

 if(VAR_2->size < VAR_6*sizeof(float))
 {
  FUNC_0("%s", VAR_1);
  return;
 }


 for(VAR_3=VAR_6-1; VAR_3>=0; --VAR_3)
 VAR_5[VAR_3] = (float)VAR_4[VAR_3] * VAR_7;

 VAR_2->fill = VAR_6*sizeof(float);
}
