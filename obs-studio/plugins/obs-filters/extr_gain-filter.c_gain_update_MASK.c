
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gain_data {int multiple; int channels; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (float) ;
 double FUNC_2 (int *,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_1, obs_data_t *VAR_2)
{
 struct gain_data *VAR_3 = VAR_1;
 double VAR_4 = FUNC_2(VAR_2, VAR_0);
 VAR_3->channels = FUNC_0(FUNC_3());
 VAR_3->multiple = FUNC_1((float)VAR_4);
}
