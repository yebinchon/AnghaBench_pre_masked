
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct outbuffer {int fill; scalar_t__ data; } ;
typedef scalar_t__ int16_t ;



__attribute__((used)) static void FUNC_0(struct outbuffer *VAR_0)
{
 size_t VAR_1;
 int16_t *VAR_2 = (int16_t*) VAR_0->data;
 uint16_t *VAR_3 = (uint16_t*)VAR_0->data;
 size_t VAR_4 = VAR_0->fill/sizeof(int16_t);

 for(VAR_1=0; VAR_1<VAR_4; ++VAR_1)
 {
  long VAR_5 = (long)VAR_2[VAR_1]+32768;
  VAR_3[VAR_1] = (uint16_t)VAR_5;
 }
}
