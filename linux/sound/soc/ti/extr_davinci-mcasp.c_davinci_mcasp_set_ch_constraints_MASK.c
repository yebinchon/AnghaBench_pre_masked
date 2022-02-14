
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct davinci_mcasp {int num_serializer; scalar_t__* serial_dir; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct davinci_mcasp*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct davinci_mcasp *VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0, VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->num_serializer; VAR_8++)
  if (VAR_4->serial_dir[VAR_8] == VAR_3)
   VAR_6++;
  else if (VAR_4->serial_dir[VAR_8] == VAR_0)
   VAR_5++;

 VAR_7 = FUNC_0(VAR_4, VAR_2,
       VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_1,
       VAR_5);

 return VAR_7;
}
