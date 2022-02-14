
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_data {scalar_t__* data; } ;


 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct audio_data *VAR_2)
{
 int VAR_3 = 0;
 for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2->data[VAR_4])
   VAR_3++;
 }
 return FUNC_0(VAR_3, 0, VAR_0);
}
