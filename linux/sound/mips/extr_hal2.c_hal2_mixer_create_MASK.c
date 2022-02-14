
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_hal2 {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_hal2*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,struct snd_hal2*) ;

__attribute__((used)) static int FUNC_3(struct snd_hal2 *VAR_7)
{
 int VAR_8;


 FUNC_0(VAR_7, VAR_4,
         VAR_1 | VAR_3 | VAR_2);

 FUNC_0(VAR_7, VAR_0, 0);

 VAR_8 = FUNC_1(VAR_7->card,
     FUNC_2(&VAR_5, VAR_7));
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_7->card,
     FUNC_2(&VAR_6, VAR_7));
 if (VAR_8 < 0)
  return VAR_8;

 return 0;
}
