
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sigmadsp {int (* write ) (int ,unsigned int,int const*,size_t) ;int control_data; } ;


 int FUNC_0 (int ,unsigned int,int const*,size_t) ;

__attribute__((used)) static int FUNC_1(struct sigmadsp *VAR_0, unsigned int VAR_1,
 const uint8_t VAR_2[], size_t VAR_3)
{
 return VAR_0->write(VAR_0->control_data, VAR_1, VAR_2, VAR_3);
}
