
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scarlett2_ports {scalar_t__* num; } ;



__attribute__((used)) static int FUNC_0(const struct scarlett2_ports *VAR_0,
     int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_4 += VAR_0[VAR_3].num[VAR_1];

 return VAR_4;
}
